#include <fstream>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

#define NSET_CT10 26
#define NSET_EPS09 25 // 15 for EPS09, 25 for DSSZ
#define NSET_SCALES 3
#define nbins 10
#define LUMINOSITY 1

using namespace std;

// Observables
double CA(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot);
double A1p(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot);
double A1m(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot);
double A3(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot);
double A4(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot);
double xsecwp(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot);
double xsecwm(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot);

void GetErr(double (*f)(double, double, double, double, double),int ibin, int nset, double *x0, double **xp, double **xm, double & x, double & xupper, double & xlower);
int bin(int cmsbin);
int bin(int cmsbin,string wpm);
double sigtot(double *x);
double sigtot(double **x,int iset);

int main(int argc, const char** argv)
{
	   if (argc != 2)
	   {
	      cout << "Usage: " << argv[0] << " elec|muon" << endl;
	      return 0;
	   }
	string e_mu = argv[1];

   // some declarations
   double *etamin = new double[2*nbins];
   double *etamax = new double[2*nbins];
   double *etaavg = new double[2*nbins];
   double *yields0vac = new double[2*nbins];
   double *yields0nuc = new double[2*nbins];
   double *yields0 = new double[2*nbins];
   
	double **yieldsp_ct10 = new double*[2*nbins];
   for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsp_ct10[ibin] = new double[NSET_CT10];
	
   double **yieldsm_ct10 = new double*[2*nbins];
	for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsm_ct10[ibin] = new double[NSET_CT10];

	double **yieldsp_vac = new double*[2*nbins];
   for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsp_vac[ibin] = new double[NSET_CT10];
	
   double **yieldsm_vac = new double*[2*nbins];
	for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsm_vac[ibin] = new double[NSET_CT10];

   double **yieldsp_eps09 = new double*[2*nbins];
	for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsp_eps09[ibin] = new double[NSET_EPS09];

   double **yieldsm_eps09 = new double*[2*nbins];
	for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsm_eps09[ibin] = new double[NSET_EPS09];
   
   double **yieldsp_scales = new double*[2*nbins];
	for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsp_scales[ibin] = new double[NSET_SCALES];

   double **yieldsm_scales = new double*[2*nbins];
	for (int ibin=0; ibin<2*nbins; ibin++)
      yieldsm_scales[ibin] = new double[NSET_SCALES];
   
// yields
	double *yields_upper_ct10 = new double[2*nbins];
   double *yields_lower_ct10 = new double[2*nbins];
	double *yields_upper_vac = new double[2*nbins];
   double *yields_lower_vac = new double[2*nbins];
   double *yields_upper_eps09 = new double[2*nbins];
   double *yields_lower_eps09 = new double[2*nbins];
   double *yields_upper_scales = new double[2*nbins];
   double *yields_lower_scales = new double[2*nbins];

//input files
	ifstream fileWp, fileWm,fileWpscales, fileWmscales,fileWpvac, fileWmvac;
	string fnameWp,fnameWm,fnameWpvac,fnameWmvac,fnameWpscales,fnameWmscales;
	fnameWp="All_Wplus_"+e_mu+".dta";
	fnameWm="All_Wminus_"+e_mu+".dta";
	fnameWpvac="All_Wplus_"+e_mu+"_CT10.dta";
	fnameWmvac="All_Wminus_"+e_mu+"_CT10.dta";
	fnameWpscales="All_Wplus_"+e_mu+"_scales.dta";
	fnameWmscales="All_Wminus_"+e_mu+"_scales.dta";		
	fileWp.open(fnameWp.c_str());
	fileWm.open(fnameWm.c_str());
	fileWpvac.open(fnameWpvac.c_str());
	fileWmvac.open(fnameWmvac.c_str());
	fileWpscales.open(fnameWpscales.c_str());
	fileWmscales.open(fnameWmscales.c_str());

//output files
	ofstream filexswp, filexswm, fileCA, fileA1p, fileA1m, fileA3, fileA4;
	string fnamexswp, fnamexswm, fnameCA, fnameA1p, fnameA1m, fnameA3, fnameA4;
	fnamexswp="yieldsWp_"+e_mu+".dta";
	fnamexswm="yieldsWm_"+e_mu+".dta";
	fnameCA="CA_"+e_mu+".dta";
	fnameA1p="A1p_"+e_mu+".dta";
	fnameA1m="A1m_"+e_mu+".dta";
	fnameA3="A3_"+e_mu+".dta";
	fnameA4="A4_"+e_mu+".dta";
	filexswp.open(fnamexswp.c_str());
	filexswm.open(fnamexswm.c_str());
	fileCA.open(fnameCA.c_str());
	fileA1p.open(fnameA1p.c_str());
	fileA1m.open(fnameA1m.c_str());
	fileA3.open(fnameA3.c_str());
	fileA4.open(fnameA4.c_str());

// A refers to the observable (e.g. A1, A3…)
	double A_ct10  ;
	double A_vac  ;
   double A_eps09 ;
   double A_scales;
	double A_upper_ct10  ;
   double A_lower_ct10  ;
	double A_upper_vac  ;
   double A_lower_vac  ;
   double A_upper_eps09 ;
   double A_lower_eps09 ;
   double A_upper_scales;
   double A_lower_scales;

   // read the files
   for (int ibin=0; ibin<nbins; ibin++)
   {
      fileWpvac >> etamin[ibin] >> etamax[ibin] >> etaavg[ibin] >> yields0vac[ibin];
      fileWp >> etamin[ibin] >> etamax[ibin] >> etaavg[ibin] >> yields0nuc[ibin];
      fileWpscales >> etamin[ibin] >> etamax[ibin] >> etaavg[ibin] >> yields0[ibin];
      for (int iset=0; iset<NSET_CT10; iset++)
         fileWp >> yieldsp_ct10[ibin][iset] >> yieldsm_ct10[ibin][iset];
      for (int iset=0; iset<NSET_CT10; iset++)
         fileWpvac >> yieldsp_vac[ibin][iset] >> yieldsm_vac[ibin][iset];
      for (int iset=0; iset<NSET_EPS09; iset++)
         fileWp >> yieldsp_eps09[ibin][iset] >> yieldsm_eps09[ibin][iset];
      fileWpscales >> yieldsm_scales[ibin][0] >> yieldsm_scales[ibin][1] >> yieldsm_scales[ibin][2];
	   fileWpscales >> yieldsp_scales[ibin][1] >> yieldsp_scales[ibin][0] >> yieldsp_scales[ibin][2];
   }
   for (int ibin=nbins; ibin<2*nbins; ibin++)
   {
      fileWmvac >> etamin[ibin] >> etamax[ibin] >> etaavg[ibin] >> yields0vac[ibin];
      fileWm >> etamin[ibin] >> etamax[ibin] >> etaavg[ibin] >> yields0nuc[ibin];
      fileWmscales >> etamin[ibin] >> etamax[ibin] >> etaavg[ibin] >> yields0[ibin];
      for (int iset=0; iset<NSET_CT10; iset++)
         fileWm >> yieldsp_ct10[ibin][iset] >> yieldsm_ct10[ibin][iset];
      for (int iset=0; iset<NSET_CT10; iset++)
         fileWmvac >> yieldsp_vac[ibin][iset] >> yieldsm_vac[ibin][iset];
      for (int iset=0; iset<NSET_EPS09; iset++)
         fileWm >> yieldsp_eps09[ibin][iset] >> yieldsm_eps09[ibin][iset];
      fileWmscales >> yieldsm_scales[ibin][0] >> yieldsm_scales[ibin][1] >> yieldsm_scales[ibin][2];
	   fileWmscales >> yieldsp_scales[ibin][1] >> yieldsp_scales[ibin][0] >> yieldsp_scales[ibin][2];
   }

	cout << "test " << sigtot(yields0) << endl;
	cout << "test2 " << yields0[5] << endl;
// Computes various observables for all bins
	for (int ibin=-nbins/2; ibin<=-1; ibin++) // also negative bins for charge asymmetry
	{
		GetErr(xsecwp,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(xsecwp,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(xsecwp,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(xsecwp,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		filexswp << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		filexswp << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		filexswp << A_upper_scales << " " << A_lower_scales << endl;

		GetErr(xsecwm,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(xsecwm,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(xsecwm,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(xsecwm,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		filexswm << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		filexswm << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		filexswm << A_upper_scales << " " << A_lower_scales << endl;

		GetErr(CA,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(CA,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(CA,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(CA,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		fileCA << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		fileCA << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		fileCA << A_upper_scales << " " << A_lower_scales << endl;
	}
   for (int ibin=1; ibin<=nbins/2; ibin++)
	{
		GetErr(xsecwp,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(xsecwp,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(xsecwp,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(xsecwp,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		filexswp << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		filexswp << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		filexswp << A_upper_scales << " " << A_lower_scales << endl;

		GetErr(xsecwm,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(xsecwm,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(xsecwm,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(xsecwm,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		filexswm << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		filexswm << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		filexswm << A_upper_scales << " " << A_lower_scales << endl;

		GetErr(CA,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(CA,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(CA,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(CA,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		fileCA << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		fileCA << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		fileCA << A_upper_scales << " " << A_lower_scales << endl;	

		GetErr(A1p,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(A1p,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(A1p,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(A1p,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		fileA1p << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		fileA1p << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		fileA1p << A_upper_scales << " " << A_lower_scales << endl;	

		GetErr(A1m,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(A1m,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(A1m,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(A1m,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		fileA1m << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		fileA1m << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		fileA1m << A_upper_scales << " " << A_lower_scales << endl;	

		GetErr(A3,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(A3,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(A3,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(A3,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		fileA3 << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		fileA3 << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		fileA3 << A_upper_scales << " " << A_lower_scales << endl;	

		GetErr(A4,ibin,NSET_CT10,yields0vac,yieldsp_vac,yieldsm_vac,A_vac,A_upper_vac,A_lower_vac);	
		GetErr(A4,ibin,NSET_CT10,yields0nuc,yieldsp_ct10,yieldsm_ct10,A_ct10,A_upper_ct10,A_lower_ct10);	
		GetErr(A4,ibin,NSET_EPS09,yields0nuc,yieldsp_eps09,yieldsm_eps09,A_eps09,A_upper_eps09,A_lower_eps09);	
		GetErr(A4,ibin,NSET_SCALES,yields0,yieldsp_scales,yieldsm_scales,A_scales,A_upper_scales,A_lower_scales);	
		fileA4 << ibin << " " << etaavg[bin(ibin)]<< " " << A_vac << " " << A_upper_vac << " " << A_lower_vac << " " << A_ct10 << " " << A_upper_ct10 << " " << A_lower_ct10 << " ";
		fileA4 << A_upper_eps09 << " " << A_lower_eps09 << " " ;
		fileA4 << A_upper_scales << " " << A_lower_scales << endl;	
	}   
}

double CA(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot)
{
	return (wp_fwd-wm_fwd)/(wp_fwd+wm_fwd);
}

double A1p(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot)
{
	return wp_fwd/wp_bwd;
}

double A1m(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot)
{
	return wm_fwd/wm_bwd;
}

double A3(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot)
{
	return (wp_fwd+wm_fwd)/(wp_bwd+wm_bwd);
}

double A4(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot)
{
	return (wp_fwd+wm_fwd-wp_bwd-wm_bwd)/tot;
}
	
double xsecwp(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot)
{
	return wp_fwd/LUMINOSITY;
}
	
double xsecwm(double wp_fwd, double wp_bwd, double wm_fwd, double wm_bwd, double tot)
{
	return wm_fwd/LUMINOSITY;
}

void GetErr(double (*f)(double, double, double, double, double),int ibin, int nset, double *x0, double **xp, double **xm, double & x, double & xupper, double & xlower)
{
	int wp_fwd=bin(ibin);
	int wp_bwd=bin(-ibin,"wplus");
	int wm_fwd=bin(ibin,"wminus");
	int wm_bwd=bin(-ibin,"wminus");
	double dxpsq=0; double dxmsq=0;
	x=(*f)(x0[wp_fwd],x0[wp_bwd],x0[wm_fwd],x0[wm_bwd],sigtot(x0));
   int cntp=0,cntm=0;
	for (int iset=0;iset<nset;iset++)
	{
		double xplus=(*f)(xp[wp_fwd][iset],xp[wp_bwd][iset],xp[wm_fwd][iset],xp[wm_bwd][iset],sigtot(xp,iset));
		double xminus=(*f)(xm[wp_fwd][iset],xm[wp_bwd][iset],xm[wm_fwd][iset],xm[wm_bwd][iset],sigtot(xm,iset));
      // if (*f == CA) cout << iset << " " << x << " " << xminus << " " << xplus << endl;
      dxpsq+=pow(max(max(xplus-x,xminus-x),0.),2); // CTEQ eq.5
      dxmsq+=pow(max(max(x-xplus,x-xminus),0.),2); // CTEQ eq.5
      // dxpsq+=0.25*pow(xplus-xminus,2); // Pia
      // dxmsq+=0.25*pow(xplus-xminus,2); // Pia
      if (max(max(xplus-x,xminus-x),0.)==0) cntp++;
      if (max(max(x-xplus,x-xminus),0.)==0) cntm++;
	}
// gives the upper and lower yields
	// xupper=x+sqrt(dxpsq);
	// xlower=x-sqrt(dxmsq);
// gives the uncertainty and not the upper and lower yields
	xupper=sqrt(dxpsq);
	xlower=sqrt(dxmsq);
   // cout << xupper << ", " << xlower << " with " << cntp << ", " << cntm << endl;
}

// returns the total yields of W+ + W- (all bins)
double sigtot(double *x)
{
   double sig=0;
	for (int ibin=0; ibin<2*nbins; ibin++)
	{
		sig+=x[ibin];
	}
	return sig;
}

double sigtot(double **x,int iset)
{
   double sig=0;
	for (int ibin=0; ibin<2*nbins; ibin++)
	{
		sig+=x[ibin][iset];
	}
	return sig;
}

// returns the array index depending on the experimental bin and the particle species
int bin(int cmsbin)
{
	int ibin;
	if(cmsbin>0)ibin=cmsbin+nbins/2-1;
	if(cmsbin<0)ibin=cmsbin+nbins/2;
	return ibin;
}

int bin(int cmsbin,string wpm)
{
	int ibin;
	if(cmsbin>0)ibin=cmsbin+nbins/2-1;
	if(cmsbin<0)ibin=cmsbin+nbins/2;
	if(wpm=="wminus")ibin+=nbins;
	return ibin;
}
