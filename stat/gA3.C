void gA3()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 31 19:31:42 2015) by ROOT version6.05/01
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.5,0.65,2.625,1.9);
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
   
   Double_t Graph0_fx3001[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph0_fy3001[5] = {
   1.01143,
   1.04282,
   1.1075,
   1.25194,
   1.51393};
   Double_t Graph0_felx3001[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fely3001[5] = {
   0.006224436,
   0.0169939,
   0.02518055,
   0.0265282,
   0.03276547};
   Double_t Graph0_fehx3001[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fehy3001[5] = {
   0.006999013,
   0.02247715,
   0.0292036,
   0.02983749,
   0.03201791};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
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
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","Graph",100,0,2.5);
   Graph_Graph3001->SetMinimum(0.8);
   Graph_Graph3001->SetMaximum(1.8);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetTitle("#eta_{lab}");
   Graph_Graph3001->GetXaxis()->SetNdivisions(505);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("N_{#font[12]{l}}(+#eta_{lab})/N_{#font[12]{l}}(#font[122]{-}#eta_{lab})");
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("a2");
   
   Double_t Graph1_fx3002[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph1_fy3002[5] = {
   1.01143,
   1.04282,
   1.1075,
   1.25194,
   1.51393};
   Double_t Graph1_felx3002[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fely3002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehx3002[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fehy3002[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph1_fx3002,Graph1_fy3002,Graph1_felx3002,Graph1_fehx3002,Graph1_fely3002,Graph1_fehy3002);
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
   
   Double_t Graph2_fx3003[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph2_fy3003[5] = {
   0.984845,
   0.969881,
   0.999806,
   1.11566,
   1.35065};
   Double_t Graph2_felx3003[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fely3003[5] = {
   0.01046827,
   0.03265932,
   0.04783582,
   0.05863401,
   0.09302637};
   Double_t Graph2_fehx3003[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fehy3003[5] = {
   0.01900922,
   0.0301372,
   0.05099861,
   0.06801711,
   0.08531239};
   grae = new TGraphAsymmErrors(5,Graph2_fx3003,Graph2_fy3003,Graph2_felx3003,Graph2_fehx3003,Graph2_fely3003,Graph2_fehy3003);
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
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","Graph",100,0,2.64);
   Graph_Graph3003->SetMinimum(0.8873476);
   Graph_Graph3003->SetMaximum(1.485836);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2");
   
   Double_t Graph3_fx3004[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph3_fy3004[5] = {
   0.984845,
   0.969881,
   0.999806,
   1.11566,
   1.35065};
   Double_t Graph3_felx3004[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fely3004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehx3004[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fehy3004[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph3_fx3004,Graph3_fy3004,Graph3_felx3004,Graph3_fehx3004,Graph3_fely3004,Graph3_fehy3004);
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
   
   Double_t Graph4_fx1001[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph4_fy1001[5] = {
   1.01792,
   0.9940261,
   0.9881206,
   1.13314,
   1.468064};
   Double_t Graph4_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1001[5] = {
   0.03590062,
   0.03377016,
   0.03968341,
   0.05526921,
   0.09468195};
   TGraphErrors *gre = new TGraphErrors(5,Graph4_fx1001,Graph4_fy1001,Graph4_fex1001,Graph4_fey1001);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t gA3_exp_statonly_1_fx1002[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t gA3_exp_statonly_1_fy1002[5] = {
   1.01792,
   0.9940261,
   0.9881206,
   1.13314,
   1.468064};
   Double_t gA3_exp_statonly_1_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t gA3_exp_statonly_1_fey1002[5] = {
   0.02157377,
   0.02129124,
   0.02331959,
   0.02951123,
   0.04607204};
   gre = new TGraphErrors(5,gA3_exp_statonly_1_fx1002,gA3_exp_statonly_1_fy1002,gA3_exp_statonly_1_fex1002,gA3_exp_statonly_1_fey1002);
   gre->SetName("gA3_exp_statonly_1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gA3_exp_statonly_11002 = new TH1F("Graph_gA3_exp_statonly_11002","Graph",100,0.055,2.395);
   Graph_gA3_exp_statonly_11002->SetMinimum(0.9098674);
   Graph_gA3_exp_statonly_11002->SetMaximum(1.56907);
   Graph_gA3_exp_statonly_11002->SetDirectory(0);
   Graph_gA3_exp_statonly_11002->SetStats(0);
   Graph_gA3_exp_statonly_11002->SetLineStyle(0);
   Graph_gA3_exp_statonly_11002->SetMarkerStyle(20);
   Graph_gA3_exp_statonly_11002->GetXaxis()->SetLabelFont(42);
   Graph_gA3_exp_statonly_11002->GetXaxis()->SetLabelOffset(0.007);
   Graph_gA3_exp_statonly_11002->GetXaxis()->SetLabelSize(0.05);
   Graph_gA3_exp_statonly_11002->GetXaxis()->SetTitleSize(0.06);
   Graph_gA3_exp_statonly_11002->GetXaxis()->SetTitleOffset(1.1);
   Graph_gA3_exp_statonly_11002->GetXaxis()->SetTitleFont(42);
   Graph_gA3_exp_statonly_11002->GetYaxis()->SetLabelFont(42);
   Graph_gA3_exp_statonly_11002->GetYaxis()->SetLabelOffset(0.007);
   Graph_gA3_exp_statonly_11002->GetYaxis()->SetLabelSize(0.05);
   Graph_gA3_exp_statonly_11002->GetYaxis()->SetTitleSize(0.06);
   Graph_gA3_exp_statonly_11002->GetYaxis()->SetTitleOffset(1.5);
   Graph_gA3_exp_statonly_11002->GetYaxis()->SetTitleFont(42);
   Graph_gA3_exp_statonly_11002->GetZaxis()->SetLabelFont(42);
   Graph_gA3_exp_statonly_11002->GetZaxis()->SetLabelOffset(0.007);
   Graph_gA3_exp_statonly_11002->GetZaxis()->SetLabelSize(0.05);
   Graph_gA3_exp_statonly_11002->GetZaxis()->SetTitleSize(0.06);
   Graph_gA3_exp_statonly_11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gA3_exp_statonly_11002);
   
   gre->Draw("pz");
   
   TLegend *leg = new TLegend(0.21,0.45,0.51,0.6,NULL,"brNDC");
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
   TText *AText = pt->AddText("W #rightarrow #font[12]{l} + #nu");
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
   Graph_copy->SetMaximum(1.8);
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
   Graph_copy->GetYaxis()->SetTitle("N_{#font[12]{l}}(+#eta_{lab})/N_{#font[12]{l}}(#font[122]{-}#eta_{lab})");
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
