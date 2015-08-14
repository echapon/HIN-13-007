double mysqrt(double a)
{
   return a>0 ? sqrt(a) : -sqrt(-a);
   // return a;
}

void test_combine()
{
   gROOT->ProcessLine(".L combine.C");

   int nbins = 2;
   double x[2] = {1,2};
   // double y[4] = {10.5,9.5,13.5,14.};
   double y[2] = {2066,2087};
   double ex[2] = {0.1,0.1};
   double ey[2] = {23,30};
   double ey2[2] = {sqrt(23*23+97*97+54*54),sqrt(30*30+104*104+54*54)};
   // double ey[4] = {sqrt(0.0145),sqrt(0.016),sqrt(0.017),sqrt(0.026)};
   // double ey[4] = {1,3,3,3};
   TGraphErrors *gr12 = new TGraphErrors(nbins,x,y,ex,ey);

   TH2F *hcov12 = new TH2F("hcov12","hcov12",nbins,0,nbins,nbins,0,nbins);
   for (int i=0; i<nbins; i++)
      for (int j=0; j<nbins; j++)
         hcov12->SetBinContent(i+1,j+1,i==j ? ey2[i]*ey2[i] : 0);
   // hcov12->SetBinContent(1,3,0.45);
   // hcov12->SetBinContent(3,1,0.45);
   hcov12->SetBinContent(1,2,sqrt((97*97+54*54)*(104*104+54*54)));
   hcov12->SetBinContent(2,1,sqrt((97*97+54*54)*(104*104+54*54)));
   // hcov12->SetBinContent(3,4,8.96);
   // hcov12->SetBinContent(4,3,8.96);
   for (int i=0; i<nbins; i++)
   {
      for (int j=0; j<nbins; j++)
         cout << hcov12->GetBinContent(i+1,j+1) << " ";
      cout << endl;
   }

   TGraphErrors *grcombo = new TGraphErrors(nbins/2);
   TH2F *hcovcombo = new TH2F("hcovcombo","hcovcombo",nbins/2,0,nbins/2,nbins/2,0,nbins/2);
   combine_blue(gr12,hcov12,grcombo,hcovcombo);
   for (int i=0; i<nbins/2; i++)
   {
      for (int j=0; j<nbins/2; j++)
         cout << hcovcombo->GetBinContent(i+1,j+1) << " ";
      cout << endl;
   }
}
