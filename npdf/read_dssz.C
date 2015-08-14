#include <fstream>

void read_dssz()
{
   TTree *tr = new TTree("tree","tree");

   ifstream file("WP-CMS-CT-DSSZ.dat");
   float val, val0=1, eta;
   tr->Branch("eta",&eta,"eta/F");
   tr->Branch("val",&val,"val/F");
   tr->Branch("val0",&val0,"val0/F");
   int i=0;
   tr->Branch("i",&i,"i/I");

   while (file.good())
   {
      file >> val;
      if (!file.good()) break;
      if (i==0) {eta = val; cout << eta;}
      if (i==1) cout << " " << val << endl;
      if (i==1) val0=val;
      if (i>0) tr->Fill();
      if (i>50) i=-1;
      i++;
   }

   TCanvas *c1 = new TCanvas(); c1->cd();
   tr->Draw("Entry$>>h0(520,0,520)","(val>10.)*((val-val0)/val0)", "hist");
   h0->SetFillColor(kRed);
   tr->Draw("Entry$>>h1(520,0,520)","(val<10.)*0.02", "hist same");
   h1->SetFillColor(kBlue);
   TCanvas *c2 = new TCanvas(); c2->cd();
   tr->Draw("(val-val0)/val0","val>10.");

   TCanvas *c3 = new TCanvas(); c3->cd();
   tr->Draw("eta>>(10,-3,2)","val*(i==1)","hist L");
   for (int it=2; it<52; it++)
   {
      // cout << Form("eta>>h%i",it+10) << " " << Form("val*(i==%i)",it) << endl;
      tr->Draw(Form("eta>>h%i(10,-3,2)",it+10),Form("val*(i==%i)",it),"hist L same");
      TH1F *hist = (TH1F*) gDirectory->Get(Form("h%i",it+10));
      // hist->SetLineColor(it%2==0 ? kRed : kBlue);
      hist->SetLineColor(kRed);
   }
   tr->Draw("eta>>hlast(10,-3,2)","val*(i==1)","hist L same");
}
