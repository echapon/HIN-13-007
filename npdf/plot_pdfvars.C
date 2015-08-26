#include <fstream>
#include "TH1F.h"

#define N_CT10 40 // 52 for CT10, 40 for MSTW
#define N_DSSZ 50 // 50 for DSSZ, 30 for EPS09


const double scale = 1./34.62;

void plot_pdfvars(const char* filep, const char* filem)
{
   fp = ifstream(filep);
   fm = ifstream(filem);

   double xbin[11] = {-2.4,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.4};
   double xbina[6] = {0,0.5,1,1.5,2,2.4};

   TH1F *hwp_c = new TH1F("hwp_c","hwp_c",10,xbin);
   TH1F *hwm_c = new TH1F("hwm_c","hwm_c",10,xbin);
   TH1F *hch_c = new TH1F("hch_c","hch_c",10,xbin);
   TH1F *ha1p_c = new TH1F("ha1p_c","ha1p_c",5,xbina);
   TH1F *ha1m_c = new TH1F("ha1m_c","ha1m_c",5,xbina);
   TH1F *ha3_c = new TH1F("ha3_c","ha3_c",5,xbina);

   TH1F *hwp_CT10[N_CT10];
   TH1F *hwm_CT10[N_CT10];
   TH1F *hch_CT10[N_CT10];
   TH1F *ha1p_CT10[N_CT10];
   TH1F *ha1m_CT10[N_CT10];
   TH1F *ha3_CT10[N_CT10];
   TH1F *rwp_CT10[N_CT10];
   TH1F *rwm_CT10[N_CT10];
   TH1F *rch_CT10[N_CT10];
   TH1F *ra1p_CT10[N_CT10];
   TH1F *ra1m_CT10[N_CT10];
   TH1F *ra3_CT10[N_CT10];
   for (int i=0; i<N_CT10; i++) 
   {
      hwp_CT10[i] = new TH1F(Form("hwp_CT10_%i",i),"hwp_CT10",10,xbin);
      hwm_CT10[i] = new TH1F(Form("hwm_CT10_%i",i),"hwm_CT10",10,xbin);
      hch_CT10[i] = new TH1F(Form("hch_CT10_%i",i),"hch_CT10",10,xbin);
      ha1p_CT10[i] = new TH1F(Form("ha1p_CT10_%i",i),"ha1p_CT10",5,xbina);
      ha1m_CT10[i] = new TH1F(Form("ha1m_CT10_%i",i),"ha1m_CT10",5,xbina);
      ha3_CT10[i] = new TH1F(Form("ha3_CT10_%i",i),"ha3_CT10",5,xbina);
      rwp_CT10[i] = new TH1F(Form("rwp_CT10_%i",i),"rwp_CT10",10,xbin);
      rwm_CT10[i] = new TH1F(Form("rwm_CT10_%i",i),"rwm_CT10",10,xbin);
      rch_CT10[i] = new TH1F(Form("rch_CT10_%i",i),"rch_CT10",10,xbin);
      ra1p_CT10[i] = new TH1F(Form("ra1p_CT10_%i",i),"ra1p_CT10",5,xbina);
      ra1m_CT10[i] = new TH1F(Form("ra1m_CT10_%i",i),"ra1m_CT10",5,xbina);
      ra3_CT10[i] = new TH1F(Form("ra3_CT10_%i",i),"ra3_CT10",5,xbina);
   }

   TH1F *hwp_DSSZ[N_DSSZ];
   TH1F *hwm_DSSZ[N_DSSZ];
   TH1F *hch_DSSZ[N_DSSZ];
   TH1F *ha1p_DSSZ[N_DSSZ];
   TH1F *ha1m_DSSZ[N_DSSZ];
   TH1F *ha3_DSSZ[N_DSSZ];
   TH1F *rwp_DSSZ[N_DSSZ];
   TH1F *rwm_DSSZ[N_DSSZ];
   TH1F *rch_DSSZ[N_DSSZ];
   TH1F *ra1p_DSSZ[N_DSSZ];
   TH1F *ra1m_DSSZ[N_DSSZ];
   TH1F *ra3_DSSZ[N_DSSZ];
   for (int i=0; i<N_DSSZ; i++) 
   {
      hwp_DSSZ[i] = new TH1F(Form("hwp_DSSZ_%i",i),"hwp_DSSZ",10,xbin);
      hwm_DSSZ[i] = new TH1F(Form("hwm_DSSZ_%i",i),"hwm_DSSZ",10,xbin);
      hch_DSSZ[i] = new TH1F(Form("hch_DSSZ_%i",i),"hch_DSSZ",10,xbin);
      ha1p_DSSZ[i] = new TH1F(Form("ha1p_DSSZ_%i",i),"ha1p_DSSZ",5,xbina);
      ha1m_DSSZ[i] = new TH1F(Form("ha1m_DSSZ_%i",i),"ha1m_DSSZ",5,xbina);
      ha3_DSSZ[i] = new TH1F(Form("ha3_DSSZ_%i",i),"ha3_DSSZ",5,xbina);
      rwp_DSSZ[i] = new TH1F(Form("rwp_DSSZ_%i",i),"rwp_DSSZ",10,xbin);
      rwm_DSSZ[i] = new TH1F(Form("rwm_DSSZ_%i",i),"rwm_DSSZ",10,xbin);
      rch_DSSZ[i] = new TH1F(Form("rch_DSSZ_%i",i),"rch_DSSZ",10,xbin);
      ra1p_DSSZ[i] = new TH1F(Form("ra1p_DSSZ_%i",i),"ra1p_DSSZ",5,xbina);
      ra1m_DSSZ[i] = new TH1F(Form("ra1m_DSSZ_%i",i),"ra1m_DSSZ",5,xbina);
      ra3_DSSZ[i] = new TH1F(Form("ra3_DSSZ_%i",i),"ra3_DSSZ",5,xbina);
   }

   double valp, valm;
   int i=0, bin=1;

   while (fp.good() && fm.good())
   {
      fp >> valp;
      fm >> valm;
      double ca=(valp-valm)/(valp+valm);

      if (!fp.good() || !fm.good()) break;

      if (i==3) 
      {
         hwp_c->SetBinContent(bin,valp/scale);
         hwm_c->SetBinContent(bin,valm/scale);
         hch_c->SetBinContent(bin,ca);
      }
      else if (i>=4 && i<4+N_CT10)
      {
         hwp_CT10[i-4]->SetBinContent(bin,valp/scale);
         hwm_CT10[i-4]->SetBinContent(bin,valm/scale);
         hch_CT10[i-4]->SetBinContent(bin,ca);
      }
      else if (i>=4+N_CT10 && i<4+N_CT10+N_DSSZ)
      {
         hwp_DSSZ[i-4-N_CT10]->SetBinContent(bin,valp/scale);
         hwm_DSSZ[i-4-N_CT10]->SetBinContent(bin,valm/scale);
         hch_DSSZ[i-4-N_CT10]->SetBinContent(bin,ca);
      }

      i++;
      if (i>=4+N_CT10+N_DSSZ) {i=0; bin++;}
   }

   for (int ibin=1; ibin<=6; ibin++)
   {
      double wp_f = hwp_c->GetBinContent(5+ibin);
      double wm_f = hwm_c->GetBinContent(5+ibin);
      double wp_b = hwp_c->GetBinContent(6-ibin);
      double wm_b = hwm_c->GetBinContent(6-ibin);
      double a1p = wp_f/wp_b;
      double a1m = wm_f/wm_b;
      double a3 = (wp_f+wm_f)/(wp_b+wm_b);

      ha1p_c->SetBinContent(ibin,a1p);
      ha1m_c->SetBinContent(ibin,a1m);
      ha3_c->SetBinContent(ibin,a3);

      for (int j=0; j<N_CT10; j++)
      {
         wp_f = hwp_CT10[j]->GetBinContent(5+ibin);
         wm_f = hwm_CT10[j]->GetBinContent(5+ibin);
         wp_b = hwp_CT10[j]->GetBinContent(6-ibin);
         wm_b = hwm_CT10[j]->GetBinContent(6-ibin);
         a1p = wp_f/wp_b;
         a1m = wm_f/wm_b;
         a3 = (wp_f+wm_f)/(wp_b+wm_b);

         ha1p_CT10[j]->SetBinContent(ibin,a1p);
         ha1m_CT10[j]->SetBinContent(ibin,a1m);
         ha3_CT10[j]->SetBinContent(ibin,a3);
      }

      for (int j=0; j<N_DSSZ; j++)
      {
         wp_f = hwp_DSSZ[j]->GetBinContent(5+ibin);
         wm_f = hwm_DSSZ[j]->GetBinContent(5+ibin);
         wp_b = hwp_DSSZ[j]->GetBinContent(6-ibin);
         wm_b = hwm_DSSZ[j]->GetBinContent(6-ibin);
         a1p = wp_f/wp_b;
         a1m = wm_f/wm_b;
         a3 = (wp_f+wm_f)/(wp_b+wm_b);

         ha1p_DSSZ[j]->SetBinContent(ibin,a1p);
         ha1m_DSSZ[j]->SetBinContent(ibin,a1m);
         ha3_DSSZ[j]->SetBinContent(ibin,a3);
      }
   }

   // Ouf. Now let's plot all this
   TCanvas *c1 = new TCanvas(); c1->cd();
   TPad *p1 = new TPad("p1","p1",0,0.2,1,1);
   p1->Draw();
   TPad *p2 = new TPad("p2","p2",0,0,1,0.2);
   p2->Draw();
   p1->cd();

   //W+
   hwp_c->Draw("hist L");
   for (int i=0; i<N_CT10; i++)
   {
      hwp_CT10[i]->SetLineColor(kBlue);
      hwp_CT10[i]->Draw("hist L same");
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      hwp_DSSZ[i]->SetLineColor(kRed);
      hwp_DSSZ[i]->Draw("hist L same");
   }
   hwp_c->SetLineColor(kBlack);
   hwp_c->SetLineWidth(2);
   hwp_c->Draw("hist L same");

   p2->cd();
   for (int i=0; i<N_CT10; i++)
   {
      rwp_CT10[i] = (TH1F*) hwp_CT10[i]->Clone(Form("rwp_CT10_%i",i));
      rwp_CT10[i]->Divide(hwp_c);
      rwp_CT10[i]->Draw(i==0 ? "hist L" : "hist L same");
      if (i==0) 
      {
         rwp_CT10[i]->GetYaxis()->SetRangeUser(0.95,1.05); 
         rwp_CT10[i]->GetYaxis()->SetLabelSize(0.2); 
         rwp_CT10[i]->GetYaxis()->SetNdivisions(3,5,0);
      }
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      rwp_DSSZ[i] = (TH1F*) hwp_DSSZ[i]->Clone(Form("rwp_DSSZ_%i",i));
      rwp_DSSZ[i]->Divide(hwp_c);
      rwp_DSSZ[i]->Draw("hist L same");
   }
   rwp_c = (TH1F*) hwp_c->Clone("rwp_c");
   rwp_c->Divide(hwp_c);
   rwp_c->Draw("hist L same");

   c1->SaveAs("pdfvars_wp.pdf");
   c1->SaveAs("pdfvars_wp.png");
   c1->SaveAs("pdfvars_wp.root");

   //W-
   p1->cd();
   hwm_c->Draw("hist L");
   for (int i=0; i<N_CT10; i++)
   {
      hwm_CT10[i]->SetLineColor(kBlue);
      hwm_CT10[i]->Draw("hist L same");
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      hwm_DSSZ[i]->SetLineColor(kRed);
      hwm_DSSZ[i]->Draw("hist L same");
   }
   hwm_c->SetLineColor(kBlack);
   hwm_c->SetLineWidth(2);
   hwm_c->Draw("hist L same");

   p2->cd();
   for (int i=0; i<N_CT10; i++)
   {
      rwm_CT10[i] = (TH1F*) hwm_CT10[i]->Clone(Form("rwm_CT10_%i",i));
      rwm_CT10[i]->Divide(hwm_c);
      rwm_CT10[i]->Draw(i==0 ? "hist L" : "hist L same");
      if (i==0) 
      {
         rwm_CT10[i]->GetYaxis()->SetRangeUser(0.95,1.05); 
         rwm_CT10[i]->GetYaxis()->SetLabelSize(0.2); 
         rwm_CT10[i]->GetYaxis()->SetNdivisions(3,5,0);
      }
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      rwm_DSSZ[i] = (TH1F*) hwm_DSSZ[i]->Clone(Form("rwm_DSSZ_%i",i));
      rwm_DSSZ[i]->Divide(hwm_c);
      rwm_DSSZ[i]->Draw("hist L same");
   }
   rwm_c = (TH1F*) hwm_c->Clone("rwm_c");
   rwm_c->Divide(hwm_c);
   rwm_c->Draw("hist L same");

   c1->SaveAs("pdfvars_wm.pdf");
   c1->SaveAs("pdfvars_wm.png");
   c1->SaveAs("pdfvars_wm.root");

   //CA
   p1->cd();
   hch_c->Draw("hist L");
   for (int i=0; i<N_CT10; i++)
   {
      hch_CT10[i]->SetLineColor(kBlue);
      hch_CT10[i]->Draw("hist L same");
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      hch_DSSZ[i]->SetLineColor(kRed);
      hch_DSSZ[i]->Draw("hist L same");
   }
   hch_c->SetLineColor(kBlack);
   hch_c->SetLineWidth(2);
   hch_c->Draw("hist L same");

   p2->cd();
   for (int i=0; i<N_CT10; i++)
   {
      rch_CT10[i] = (TH1F*) hch_CT10[i]->Clone(Form("rch_CT10_%i",i));
      rch_CT10[i]->Divide(hch_c);
      rch_CT10[i]->Draw(i==0 ? "hist L" : "hist L same");
      if (i==0) 
      {
         rch_CT10[i]->GetYaxis()->SetRangeUser(0.95,1.05); 
         rch_CT10[i]->GetYaxis()->SetLabelSize(0.2); 
         rch_CT10[i]->GetYaxis()->SetNdivisions(3,5,0);
      }
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      rch_DSSZ[i] = (TH1F*) hch_DSSZ[i]->Clone(Form("rch_DSSZ_%i",i));
      rch_DSSZ[i]->Divide(hch_c);
      rch_DSSZ[i]->Draw("hist L same");
   }
   rch_c = (TH1F*) hch_c->Clone("rch_c");
   rch_c->Divide(hch_c);
   rch_c->Draw("hist L same");

   c1->SaveAs("pdfvars_ch.pdf");
   c1->SaveAs("pdfvars_ch.png");
   c1->SaveAs("pdfvars_ch.root");

   //A1+
   p1->cd();
   ha1p_c->Draw("hist L");
   for (int i=0; i<N_CT10; i++)
   {
      ha1p_CT10[i]->SetLineColor(kBlue);
      ha1p_CT10[i]->Draw("hist L same");
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      ha1p_DSSZ[i]->SetLineColor(kRed);
      ha1p_DSSZ[i]->Draw("hist L same");
   }
   ha1p_c->SetLineColor(kBlack);
   ha1p_c->SetLineWidth(2);
   ha1p_c->Draw("hist L same");

   p2->cd();
   for (int i=0; i<N_CT10; i++)
   {
      ra1p_CT10[i] = (TH1F*) ha1p_CT10[i]->Clone(Form("ra1p_CT10_%i",i));
      ra1p_CT10[i]->Divide(ha1p_c);
      ra1p_CT10[i]->Draw(i==0 ? "hist L" : "hist L same");
      if (i==0) 
      {
         ra1p_CT10[i]->GetYaxis()->SetRangeUser(0.95,1.05); 
         ra1p_CT10[i]->GetYaxis()->SetLabelSize(0.2); 
         ra1p_CT10[i]->GetYaxis()->SetNdivisions(3,5,0);
      }
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      ra1p_DSSZ[i] = (TH1F*) ha1p_DSSZ[i]->Clone(Form("ra1p_DSSZ_%i",i));
      ra1p_DSSZ[i]->Divide(ha1p_c);
      ra1p_DSSZ[i]->Draw("hist L same");
   }
   ra1p_c = (TH1F*) ha1p_c->Clone("ra1p_c");
   ra1p_c->Divide(ha1p_c);
   ra1p_c->Draw("hist L same");

   c1->SaveAs("pdfvars_a1p.pdf");
   c1->SaveAs("pdfvars_a1p.png");
   c1->SaveAs("pdfvars_a1p.root");

   //A1-
   p1->cd();
   ha1m_c->Draw("hist L");
   for (int i=0; i<N_CT10; i++)
   {
      ha1m_CT10[i]->SetLineColor(kBlue);
      ha1m_CT10[i]->Draw("hist L same");
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      ha1m_DSSZ[i]->SetLineColor(kRed);
      ha1m_DSSZ[i]->Draw("hist L same");
   }
   ha1m_c->SetLineColor(kBlack);
   ha1m_c->SetLineWidth(2);
   ha1m_c->Draw("hist L same");

   p2->cd();
   for (int i=0; i<N_CT10; i++)
   {
      ra1m_CT10[i] = (TH1F*) ha1m_CT10[i]->Clone(Form("ra1m_CT10_%i",i));
      ra1m_CT10[i]->Divide(ha1m_c);
      ra1m_CT10[i]->Draw(i==0 ? "hist L" : "hist L same");
      if (i==0) 
      {
         ra1m_CT10[i]->GetYaxis()->SetRangeUser(0.95,1.05); 
         ra1m_CT10[i]->GetYaxis()->SetLabelSize(0.2); 
         ra1m_CT10[i]->GetYaxis()->SetNdivisions(3,5,0);
      }
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      ra1m_DSSZ[i] = (TH1F*) ha1m_DSSZ[i]->Clone(Form("ra1m_DSSZ_%i",i));
      ra1m_DSSZ[i]->Divide(ha1m_c);
      ra1m_DSSZ[i]->Draw("hist L same");
   }
   ra1m_c = (TH1F*) ha1m_c->Clone("ra1m_c");
   ra1m_c->Divide(ha1m_c);
   ra1m_c->Draw("hist L same");

   c1->SaveAs("pdfvars_a1m.pdf");
   c1->SaveAs("pdfvars_a1m.png");
   c1->SaveAs("pdfvars_a1m.root");

   //A3
   p1->cd();
   ha3_c->Draw("hist L");
   for (int i=0; i<N_CT10; i++)
   {
      ha3_CT10[i]->SetLineColor(kBlue);
      ha3_CT10[i]->Draw("hist L same");
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      ha3_DSSZ[i]->SetLineColor(kRed);
      ha3_DSSZ[i]->Draw("hist L same");
   }
   ha3_c->SetLineColor(kBlack);
   ha3_c->SetLineWidth(2);
   ha3_c->Draw("hist L same");

   p2->cd();
   for (int i=0; i<N_CT10; i++)
   {
      ra3_CT10[i] = (TH1F*) ha3_CT10[i]->Clone(Form("ra3_CT10_%i",i));
      ra3_CT10[i]->Divide(ha3_c);
      ra3_CT10[i]->Draw(i==0 ? "hist L" : "hist L same");
      if (i==0) 
      {
         ra3_CT10[i]->GetYaxis()->SetRangeUser(0.95,1.05); 
         ra3_CT10[i]->GetYaxis()->SetLabelSize(0.2); 
         ra3_CT10[i]->GetYaxis()->SetNdivisions(3,5,0);
      }
   }
   for (int i=0; i<N_DSSZ; i++)
   {
      ra3_DSSZ[i] = (TH1F*) ha3_DSSZ[i]->Clone(Form("ra3_DSSZ_%i",i));
      ra3_DSSZ[i]->Divide(ha3_c);
      ra3_DSSZ[i]->Draw("hist L same");
   }
   ra3_c = (TH1F*) ha3_c->Clone("ra3_c");
   ra3_c->Divide(ha3_c);
   ra3_c->Draw("hist L same");

   c1->SaveAs("pdfvars_a3.pdf");
   c1->SaveAs("pdfvars_a3.png");
   c1->SaveAs("pdfvars_a3.root");
}
