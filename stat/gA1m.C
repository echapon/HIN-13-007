void gA1m()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 31 19:31:42 2015) by ROOT version6.05/01
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.5,0.48,2.625,1.48);
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
   
   Double_t Graph0_fx3013[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph0_fy3013[5] = {
   0.99022,
   0.968122,
   0.942255,
   0.919187,
   0.924656};
   Double_t Graph0_felx3013[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fely3013[5] = {
   0.00855494,
   0.02487038,
   0.03707417,
   0.02794373,
   0.02711127};
   Double_t Graph0_fehx3013[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fehy3013[5] = {
   0.01078848,
   0.02671408,
   0.03485948,
   0.03604308,
   0.03571177};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph0_fx3013,Graph0_fy3013,Graph0_felx3013,Graph0_fehx3013,Graph0_fely3013,Graph0_fehy3013);
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
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","Graph",100,0,2.5);
   Graph_Graph3013->SetMinimum(0.6);
   Graph_Graph3013->SetMaximum(1.4);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetTitle("#eta_{lab}");
   Graph_Graph3013->GetXaxis()->SetNdivisions(505);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetTitle("N_{#font[12]{l}}^{#font[122]{-}}(+#eta_{lab})/N_{#font[12]{l}}^{#font[122]{-}}(#font[122]{-}#eta_{lab})");
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("a2");
   
   Double_t Graph1_fx3014[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph1_fy3014[5] = {
   0.99022,
   0.968122,
   0.942255,
   0.919187,
   0.924656};
   Double_t Graph1_felx3014[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fely3014[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehx3014[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fehy3014[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph1_fx3014,Graph1_fy3014,Graph1_felx3014,Graph1_fehx3014,Graph1_fely3014,Graph1_fehy3014);
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
   
   Double_t Graph2_fx3015[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph2_fy3015[5] = {
   0.966757,
   0.905839,
   0.853546,
   0.816165,
   0.818614};
   Double_t Graph2_felx3015[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fely3015[5] = {
   0.005145657,
   0.04315267,
   0.03266271,
   0.04540118,
   0.06330477};
   Double_t Graph2_fehx3015[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fehy3015[5] = {
   0.03400955,
   0.02171564,
   0.06256162,
   0.05069517,
   0.0489398};
   grae = new TGraphAsymmErrors(5,Graph2_fx3015,Graph2_fy3015,Graph2_felx3015,Graph2_fehx3015,Graph2_fely3015,Graph2_fehy3015);
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
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","Graph",100,0,2.64);
   Graph_Graph3015->SetMinimum(0.7307635);
   Graph_Graph3015->SetMaximum(1.025312);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2");
   
   Double_t Graph3_fx3016[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph3_fy3016[5] = {
   0.966757,
   0.905839,
   0.853546,
   0.816165,
   0.818614};
   Double_t Graph3_felx3016[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fely3016[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehx3016[5] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fehy3016[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph3_fx3016,Graph3_fy3016,Graph3_felx3016,Graph3_fehx3016,Graph3_fely3016,Graph3_fehy3016);
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
   
   Double_t Graph4_fx1007[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t Graph4_fy1007[5] = {
   0.9653543,
   0.9455861,
   0.8116163,
   0.7434323,
   0.8785267};
   Double_t Graph4_fex1007[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1007[5] = {
   0.04992724,
   0.04939567,
   0.04834868,
   0.05252904,
   0.08069721};
   TGraphErrors *gre = new TGraphErrors(5,Graph4_fx1007,Graph4_fy1007,Graph4_fex1007,Graph4_fey1007);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t gA1m_exp_statonly_1_fx1008[5] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.2};
   Double_t gA1m_exp_statonly_1_fy1008[5] = {
   0.9653543,
   0.9455861,
   0.8116163,
   0.7434323,
   0.8785267};
   Double_t gA1m_exp_statonly_1_fex1008[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t gA1m_exp_statonly_1_fey1008[5] = {
   0.03137784,
   0.03044051,
   0.02861161,
   0.02860939,
   0.03957543};
   gre = new TGraphErrors(5,gA1m_exp_statonly_1_fx1008,gA1m_exp_statonly_1_fy1008,gA1m_exp_statonly_1_fex1008,gA1m_exp_statonly_1_fey1008);
   gre->SetName("gA1m_exp_statonly_1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gA1m_exp_statonly_11008 = new TH1F("Graph_gA1m_exp_statonly_11008","Graph",100,0.055,2.395);
   Graph_gA1m_exp_statonly_11008->SetMinimum(0.686632);
   Graph_gA1m_exp_statonly_11008->SetMaximum(1.024923);
   Graph_gA1m_exp_statonly_11008->SetDirectory(0);
   Graph_gA1m_exp_statonly_11008->SetStats(0);
   Graph_gA1m_exp_statonly_11008->SetLineStyle(0);
   Graph_gA1m_exp_statonly_11008->SetMarkerStyle(20);
   Graph_gA1m_exp_statonly_11008->GetXaxis()->SetLabelFont(42);
   Graph_gA1m_exp_statonly_11008->GetXaxis()->SetLabelOffset(0.007);
   Graph_gA1m_exp_statonly_11008->GetXaxis()->SetLabelSize(0.05);
   Graph_gA1m_exp_statonly_11008->GetXaxis()->SetTitleSize(0.06);
   Graph_gA1m_exp_statonly_11008->GetXaxis()->SetTitleOffset(1.1);
   Graph_gA1m_exp_statonly_11008->GetXaxis()->SetTitleFont(42);
   Graph_gA1m_exp_statonly_11008->GetYaxis()->SetLabelFont(42);
   Graph_gA1m_exp_statonly_11008->GetYaxis()->SetLabelOffset(0.007);
   Graph_gA1m_exp_statonly_11008->GetYaxis()->SetLabelSize(0.05);
   Graph_gA1m_exp_statonly_11008->GetYaxis()->SetTitleSize(0.06);
   Graph_gA1m_exp_statonly_11008->GetYaxis()->SetTitleOffset(1.5);
   Graph_gA1m_exp_statonly_11008->GetYaxis()->SetTitleFont(42);
   Graph_gA1m_exp_statonly_11008->GetZaxis()->SetLabelFont(42);
   Graph_gA1m_exp_statonly_11008->GetZaxis()->SetLabelOffset(0.007);
   Graph_gA1m_exp_statonly_11008->GetZaxis()->SetLabelSize(0.05);
   Graph_gA1m_exp_statonly_11008->GetZaxis()->SetTitleSize(0.06);
   Graph_gA1m_exp_statonly_11008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gA1m_exp_statonly_11008);
   
   gre->Draw("pz");
   
   TLegend *leg = new TLegend(0.21,0.15,0.51,0.3,NULL,"brNDC");
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
   TText *AText = pt->AddText("W^{#font[122]{-}} #rightarrow #font[12]{l}^{#font[122]{-}} + #nu");
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
   Graph_copy->SetMinimum(0.6);
   Graph_copy->SetMaximum(1.4);
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
   Graph_copy->GetYaxis()->SetTitle("N_{#font[12]{l}}^{#font[122]{-}}(+#eta_{lab})/N_{#font[12]{l}}^{#font[122]{-}}(#font[122]{-}#eta_{lab})");
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
