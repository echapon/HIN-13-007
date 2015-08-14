void gA4()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 31 19:31:42 2015) by ROOT version6.05/01
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.5,-0.019,2.625,0.056);
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
   
   Double_t Graph0_fx3017[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph0_fy3017[5] = {
   0.00122301,
   0.00447037,
   0.0105736,
   0.0216333,
   0.0349209};
   Double_t Graph0_felx3017[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fely3017[5] = {
   0.0006756227,
   0.001788515,
   0.002406357,
   0.001954734,
   0.00166497};
   Double_t Graph0_fehx3017[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fehy3017[5] = {
   0.0007680071,
   0.002344638,
   0.002716315,
   0.002083388,
   0.001340596};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph0_fx3017,Graph0_fy3017,Graph0_felx3017,Graph0_fehx3017,Graph0_fely3017,Graph0_fehy3017);
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
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","Graph",100,0,2.5);
   Graph_Graph3017->SetMinimum(-0.01);
   Graph_Graph3017->SetMaximum(0.05);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetTitle("#eta_{lab}");
   Graph_Graph3017->GetXaxis()->SetNdivisions(505);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetTitle("A_{4}");
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("a2");
   
   Double_t Graph1_fx3018[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph1_fy3018[5] = {
   0.00122301,
   0.00447037,
   0.0105736,
   0.0216333,
   0.0349209};
   Double_t Graph1_felx3018[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fely3018[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehx3018[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fehy3018[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph1_fx3018,Graph1_fy3018,Graph1_felx3018,Graph1_fehx3018,Graph1_fely3018,Graph1_fehy3018);
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
   
   Double_t Graph2_fx3019[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph2_fy3019[5] = {
   -0.00169038,
   -0.00332414,
   -2.02198e-05,
   0.0103701,
   0.0243959};
   Double_t Graph2_felx3019[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fely3019[5] = {
   0.001196115,
   0.003711201,
   0.005027413,
   0.005095623,
   0.005936856};
   Double_t Graph2_fehx3019[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fehy3019[5] = {
   0.002129226,
   0.003349068,
   0.005259351,
   0.005716968,
   0.005401128};
   grae = new TGraphAsymmErrors(5,Graph2_fx3019,Graph2_fy3019,Graph2_felx3019,Graph2_fehx3019,Graph2_fely3019,Graph2_fehy3019);
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
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","Graph",100,0,2.64);
   Graph_Graph3019->SetMinimum(-0.01071858);
   Graph_Graph3019->SetMaximum(0.03348027);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t Graph3_fx3020[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph3_fy3020[5] = {
   -0.00169038,
   -0.00332414,
   -2.02198e-05,
   0.0103701,
   0.0243959};
   Double_t Graph3_felx3020[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fely3020[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehx3020[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fehy3020[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph3_fx3020,Graph3_fy3020,Graph3_felx3020,Graph3_fehx3020,Graph3_fely3020,Graph3_fehy3020);
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
   
   Double_t Graph4_fx1009[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph4_fy1009[5] = {
   0.002889992,
   -0.0006235651,
   -0.001209151,
   0.01195757,
   0.02738451};
   Double_t Graph4_fex1009[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1009[5] = {
   0.004041834,
   0.003793377,
   0.004273361,
   0.004676295,
   0.004791528};
   TGraphErrors *gre = new TGraphErrors(5,Graph4_fx1009,Graph4_fy1009,Graph4_fex1009,Graph4_fey1009);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t gA4_exp_statonly_1_fx1010[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t gA4_exp_statonly_1_fy1010[5] = {
   0.002889992,
   -0.0006235651,
   -0.001209151,
   0.01195757,
   0.02738451};
   Double_t gA4_exp_statonly_1_fex1010[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t gA4_exp_statonly_1_fey1010[5] = {
   0.002436365,
   0.002403322,
   0.002503679,
   0.002476495,
   0.002245474};
   gre = new TGraphErrors(5,gA4_exp_statonly_1_fx1010,gA4_exp_statonly_1_fy1010,gA4_exp_statonly_1_fex1010,gA4_exp_statonly_1_fey1010);
   gre->SetName("gA4_exp_statonly_1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gA4_exp_statonly_11010 = new TH1F("Graph_gA4_exp_statonly_11010","Graph",100,0.055,2.395);
   Graph_gA4_exp_statonly_11010->SetMinimum(-0.007047111);
   Graph_gA4_exp_statonly_11010->SetMaximum(0.03296426);
   Graph_gA4_exp_statonly_11010->SetDirectory(0);
   Graph_gA4_exp_statonly_11010->SetStats(0);
   Graph_gA4_exp_statonly_11010->SetLineStyle(0);
   Graph_gA4_exp_statonly_11010->SetMarkerStyle(20);
   Graph_gA4_exp_statonly_11010->GetXaxis()->SetLabelFont(42);
   Graph_gA4_exp_statonly_11010->GetXaxis()->SetLabelOffset(0.007);
   Graph_gA4_exp_statonly_11010->GetXaxis()->SetLabelSize(0.05);
   Graph_gA4_exp_statonly_11010->GetXaxis()->SetTitleSize(0.06);
   Graph_gA4_exp_statonly_11010->GetXaxis()->SetTitleOffset(1.1);
   Graph_gA4_exp_statonly_11010->GetXaxis()->SetTitleFont(42);
   Graph_gA4_exp_statonly_11010->GetYaxis()->SetLabelFont(42);
   Graph_gA4_exp_statonly_11010->GetYaxis()->SetLabelOffset(0.007);
   Graph_gA4_exp_statonly_11010->GetYaxis()->SetLabelSize(0.05);
   Graph_gA4_exp_statonly_11010->GetYaxis()->SetTitleSize(0.06);
   Graph_gA4_exp_statonly_11010->GetYaxis()->SetTitleOffset(1.5);
   Graph_gA4_exp_statonly_11010->GetYaxis()->SetTitleFont(42);
   Graph_gA4_exp_statonly_11010->GetZaxis()->SetLabelFont(42);
   Graph_gA4_exp_statonly_11010->GetZaxis()->SetLabelOffset(0.007);
   Graph_gA4_exp_statonly_11010->GetZaxis()->SetLabelSize(0.05);
   Graph_gA4_exp_statonly_11010->GetZaxis()->SetTitleSize(0.06);
   Graph_gA4_exp_statonly_11010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gA4_exp_statonly_11010);
   
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
   Graph_copy->SetMinimum(-0.01);
   Graph_copy->SetMaximum(0.05);
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
   Graph_copy->GetYaxis()->SetTitle("A_{4}");
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
