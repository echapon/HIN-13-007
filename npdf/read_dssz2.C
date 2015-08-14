#include <fstream>

int translate(int idx)
{
   if (idx==0) return 0;
   else if (idx%2==1) return (idx+1)/2;
   else return 25+(idx)/2;
}

void read_dssz2()
{
   TTree *tr = new TTree("tree","tree");
   TTree *tr2 = new TTree("tree2","tree2");

   ifstream file("WP-CMS-CT-DSSZ.dat");
   ifstream file2("All_Wplus_EPS09.dta");
   float val, val0=1;
   int idx2;
   tr->Branch("val",&val,"val/F");
   tr->Branch("val0",&val0,"val0/F");
   tr2->Branch("val",&val,"val/F");
   tr2->Branch("val0",&val0,"val0/F");
   tr2->Branch("idx2",&idx2,"idx2/I");
   int i=0;

   while (file.good())
   {
      file >> val;
      if (!file.good()) break;
      if (i==0) cout << val;
      if (i==1) cout << " " << val << endl;
      if (i==1) val0=val;
      if (i>50) i=-1;
      tr->Fill();
      i++;
   }

   int i2=0;

   while (file2.good())
   {
      file2 >> val;
      if (!file2.good()) break;
      i2++;
      if (i==0) cout << val;
      if (i2==2 || i2==3) continue;
      if (i==1) cout << " " << val << endl;
      if (i==1) val0=val;
      if (i2>4&&i2<=56) continue;
      idx2 = translate(i-1)+1;
      cout << i << " " << i2 << " " << idx2 << " " << val0 << " " << val << endl;
      if (i>50) {cout << i2 << endl;i=-1; i2=0;}
      tr2->Fill();
      i++;
   }

   TCanvas *c1 = new TCanvas(); c1->cd();
   tr->Draw("Entry$>>h0(520,0,520)","(val>10.)*((val-val0)/val0)", "hist");
   h0->SetFillColor(kRed);
   // tr2->Scan("TMath::Floor(Entry$/52)*52+idx2+1:Entry$:idx2:TMath::Floor(Entry$/52)","(val>10.)");
   tr2->Draw("TMath::Floor(Entry$/52)*52+idx2>>h2(520,0,520)","(val>10.)*((val-val0)/val0)", "hist same");
   h2->SetFillStyle(3003);
   h2->SetFillColor(kGreen);
   tr->Draw("Entry$>>h1(520,0,520)","(val<10.)*0.02", "hist same");
   h1->SetFillColor(kBlue);
   TCanvas *c2 = new TCanvas(); c2->cd();
   tr->Draw("(val-val0)/val0","val>10.");
}
