void gA1p()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 31 19:31:42 2015) by ROOT version6.05/01
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.5,0.44,2.625,3.44);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.04);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.12);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3009[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph0_fy3009[5] = {
   1.0283,
   1.1045,
   1.25445,
   1.60653,
   2.38443};
   Double_t Graph0_felx3009[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fely3009[5] = {
   0.008340636,
   0.01759299,
   0.02682874,
   0.04307044,
   0.07661457};
   Double_t Graph0_fehx3009[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fehy3009[5] = {
   0.006600096,
   0.02525716,
   0.03849533,
   0.05198622,
   0.07231854};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph0_fx3009,Graph0_fy3009,Graph0_felx3009,Graph0_fehx3009,Graph0_fely3009,Graph0_fehy3009);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","Graph",100,0,2.5);
   Graph_Graph3009->SetMinimum(0.8);
   Graph_Graph3009->SetMaximum(3.2);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetTitle("#eta_{lab}");
   Graph_Graph3009->GetXaxis()->SetNdivisions(505);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetTitle("N_{#font[12]{l}}^{+}(+#eta_{lab})/N_{#font[12]{l}}^{+}(#font[122]{-}#eta_{lab})");
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("a2");
   
   Double_t Graph1_fx3010[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph1_fy3010[5] = {
   1.0283,
   1.1045,
   1.25445,
   1.60653,
   2.38443};
   Double_t Graph1_felx3010[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fely3010[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehx3010[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fehy3010[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph1_fx3010,Graph1_fy3010,Graph1_felx3010,Graph1_fehx3010,Graph1_fely3010,Graph1_fehy3010);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   grae->Draw("z");
   
   Double_t Graph2_fx3011[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph2_fy3011[5] = {
   0.999177,
   1.02266,
   1.1311,
   1.44437,
   2.17478};
   Double_t Graph2_felx3011[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fely3011[5] = {
   0.02113293,
   0.03041053,
   0.07040685,
   0.07719417,
   0.1563891};
   Double_t Graph2_fehx3011[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fehy3011[5] = {
   0.01227216,
   0.04566249,
   0.05147521,
   0.1046447,
   0.1575292};
   grae = new TGraphAsymmErrors(5,Graph2_fx3011,Graph2_fy3011,Graph2_felx3011,Graph2_fehx3011,Graph2_fely3011,Graph2_fehy3011);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#009900");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3375);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineStyle(7);
   grae->SetLineWidth(4);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","Graph",100,0,2.64);
   Graph_Graph3011->SetMinimum(0.8426176);
   Graph_Graph3011->SetMaximum(2.467736);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2");
   
   Double_t Graph3_fx3012[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph3_fy3012[5] = {
   0.999177,
   1.02266,
   1.1311,
   1.44437,
   2.17478};
   Double_t Graph3_felx3012[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fely3012[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehx3012[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fehy3012[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph3_fx3012,Graph3_fy3012,Graph3_felx3012,Graph3_fehx3012,Graph3_fely3012,Graph3_fehy3012);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#009900");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3375);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineStyle(7);
   grae->SetLineWidth(4);
   grae->SetMarkerStyle(20);
   grae->Draw("z");
   
   Double_t Graph4_fx1005[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph4_fy1005[5] = {
   1.058523,
   1.03161,
   1.163431,
   1.629723,
   2.418526};
   Double_t Graph4_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1005[5] = {
   0.05063138,
   0.0458644,
   0.06365602,
   0.1060383,
   0.2162779};
   TGraphErrors *gre = new TGraphErrors(5,Graph4_fx1005,Graph4_fy1005,Graph4_fex1005,Graph4_fey1005);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t gA1p_exp_statonly_1_fx1006[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t gA1p_exp_statonly_1_fy1006[5] = {
   1.058523,
   1.03161,
   1.163431,
   1.629723,
   2.418526};
   Double_t gA1p_exp_statonly_1_fex1006[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t gA1p_exp_statonly_1_fey1006[5] = {
   0.02967911,
   0.0298508,
   0.0372495,
   0.05830586,
   0.1105943};
   gre = new TGraphErrors(5,gA1p_exp_statonly_1_fx1006,gA1p_exp_statonly_1_fy1006,gA1p_exp_statonly_1_fex1006,gA1p_exp_statonly_1_fey1006);
   gre->SetName("gA1p_exp_statonly_1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gA1p_exp_statonly_11006 = new TH1F("Graph_gA1p_exp_statonly_11006","Graph",100,0.055,2.395);
   Graph_gA1p_exp_statonly_11006->SetMinimum(0.8490229);
   Graph_gA1p_exp_statonly_11006->SetMaximum(2.681857);
   Graph_gA1p_exp_statonly_11006->SetDirectory(0);
   Graph_gA1p_exp_statonly_11006->SetStats(0);
   Graph_gA1p_exp_statonly_11006->SetLineStyle(0);
   Graph_gA1p_exp_statonly_11006->SetMarkerStyle(20);
   Graph_gA1p_exp_statonly_11006->GetXaxis()->SetLabelFont(42);
   Graph_gA1p_exp_statonly_11006->GetXaxis()->SetLabelOffset(0.007);
   Graph_gA1p_exp_statonly_11006->GetXaxis()->SetLabelSize(0.05);
   Graph_gA1p_exp_statonly_11006->GetXaxis()->SetTitleSize(0.06);
   Graph_gA1p_exp_statonly_11006->GetXaxis()->SetTitleOffset(1.1);
   Graph_gA1p_exp_statonly_11006->GetXaxis()->SetTitleFont(42);
   Graph_gA1p_exp_statonly_11006->GetYaxis()->SetLabelFont(42);
   Graph_gA1p_exp_statonly_11006->GetYaxis()->SetLabelOffset(0.007);
   Graph_gA1p_exp_statonly_11006->GetYaxis()->SetLabelSize(0.05);
   Graph_gA1p_exp_statonly_11006->GetYaxis()->SetTitleSize(0.06);
   Graph_gA1p_exp_statonly_11006->GetYaxis()->SetTitleOffset(1.5);
   Graph_gA1p_exp_statonly_11006->GetYaxis()->SetTitleFont(42);
   Graph_gA1p_exp_statonly_11006->GetZaxis()->SetLabelFont(42);
   Graph_gA1p_exp_statonly_11006->GetZaxis()->SetLabelOffset(0.007);
   Graph_gA1p_exp_statonly_11006->GetZaxis()->SetLabelSize(0.05);
   Graph_gA1p_exp_statonly_11006->GetZaxis()->SetTitleSize(0.06);
   Graph_gA1p_exp_statonly_11006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gA1p_exp_statonly_11006);
   
   gre->Draw("pz");
   
   TLegend *leg = new TLegend(0.21,0.42,0.51,0.57,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph4","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","CT10","lf");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","CT10+EPS09","lf");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3375);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(7);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.8,0.5,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   TText *AText = pt->AddText("W^{+} #rightarrow #font[12]{l}^{+} + #nu");
   AText = pt->AddText("p_{T}^{#font[12]{l}} > 25 GeV/c");
   pt->Draw();
      tex = new TLatex(0.96,0.9424," #sqrt{s_{NN}} = 5.02 TeV");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.9424,"pPb 34.6 nb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.924,0.884,"CMS");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","Graph",100,0,2.5);
   Graph_copy->SetMinimum(0.8);
   Graph_copy->SetMaximum(3.2);
   Graph_copy->SetDirectory(0);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineStyle(0);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->GetXaxis()->SetTitle("#eta_{lab}");
   Graph_copy->GetXaxis()->SetNdivisions(505);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.007);
   Graph_copy->GetXaxis()->SetLabelSize(0.05);
   Graph_copy->GetXaxis()->SetTitleSize(0.05);
   Graph_copy->GetXaxis()->SetTitleOffset(1.1);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("N_{#font[12]{l}}^{+}(+#eta_{lab})/N_{#font[12]{l}}^{+}(#font[122]{-}#eta_{lab})");
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.007);
   Graph_copy->GetYaxis()->SetLabelSize(0.05);
   Graph_copy->GetYaxis()->SetTitleSize(0.05);
   Graph_copy->GetYaxis()->SetTitleOffset(1.5);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.007);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.06);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
