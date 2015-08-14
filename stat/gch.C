void gch()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 31 19:31:42 2015) by ROOT version6.05/01
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-3.5,-0.52,2.75,0.48);
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
   
   Double_t Graph0_fx3005[10] = {
   2.2,
   1.75,
   1.25,
   0.75,
   0.25,
   -0.25,
   -0.75,
   -1.25,
   -1.75,
   -2.2};
   Double_t Graph0_fy3005[10] = {
   0.271569,
   0.242472,
   0.199083,
   0.16019,
   0.13243,
   0.113847,
   0.0953951,
   0.0586208,
   -0.0317606,
   -0.192653};
   Double_t Graph0_felx3005[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fely3005[10] = {
   0.01715884,
   0.01580552,
   0.01320277,
   0.01146985,
   0.01194889,
   0.007802394,
   0.006606392,
   0.008837154,
   0.01163919,
   0.01254774};
   Double_t Graph0_fehx3005[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph0_fehy3005[10] = {
   0.01245998,
   0.01281843,
   0.01611579,
   0.0123205,
   0.009866819,
   0.007816985,
   0.006595391,
   0.007312196,
   0.009927339,
   0.01381436};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph0_fx3005,Graph0_fy3005,Graph0_felx3005,Graph0_fehx3005,Graph0_fely3005,Graph0_fehy3005);
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
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","Graph",100,-2.5,2.5);
   Graph_Graph3005->SetMinimum(-0.4);
   Graph_Graph3005->SetMaximum(0.4);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetTitle("#eta_{lab}");
   Graph_Graph3005->GetXaxis()->SetNdivisions(505);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetTitle("(N_{#font[12]{l}}^{+}#font[122]{-}N_{#font[12]{l}}^{#font[122]{-}})/(N_{#font[12]{l}}^{+}+N_{#font[12]{l}}^{#font[122]{-}})");
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("a2");
   
   Double_t Graph1_fx3006[10] = {
   2.2,
   1.75,
   1.25,
   0.75,
   0.25,
   -0.25,
   -0.75,
   -1.25,
   -1.75,
   -2.2};
   Double_t Graph1_fy3006[10] = {
   0.271569,
   0.242472,
   0.199083,
   0.16019,
   0.13243,
   0.113847,
   0.0953951,
   0.0586208,
   -0.0317606,
   -0.192653};
   Double_t Graph1_felx3006[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fely3006[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehx3006[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph1_fehy3006[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(10,Graph1_fx3006,Graph1_fy3006,Graph1_felx3006,Graph1_fehx3006,Graph1_fely3006,Graph1_fehy3006);
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
   
   Double_t Graph2_fx3007[10] = {
   2.2,
   1.75,
   1.25,
   0.75,
   0.25,
   -0.25,
   -0.75,
   -1.25,
   -1.75,
   -2.2};
   Double_t Graph2_fy3007[10] = {
   0.263377,
   0.234428,
   0.19231,
   0.156091,
   0.13209,
   0.115851,
   0.0964275,
   0.0539073,
   -0.0465022,
   -0.215376};
   Double_t Graph2_felx3007[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fely3007[10] = {
   0.01234885,
   0.01640988,
   0.0211319,
   0.009310187,
   0.01446852,
   0.00468004,
   0.01648233,
   0.005510343,
   0.01817494,
   0.0125977};
   Double_t Graph2_fehx3007[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph2_fehy3007[10] = {
   0.02248654,
   0.01201416,
   0.008815135,
   0.01600505,
   0.008127195,
   0.01693463,
   0.00469466,
   0.01880119,
   0.008619524,
   0.01691905};
   grae = new TGraphAsymmErrors(10,Graph2_fx3007,Graph2_fy3007,Graph2_felx3007,Graph2_fehx3007,Graph2_fely3007,Graph2_fehy3007);
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
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","Graph",100,-2.88,2.88);
   Graph_Graph3007->SetMinimum(-0.2793574);
   Graph_Graph3007->SetMaximum(0.3372473);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t Graph3_fx3008[10] = {
   2.2,
   1.75,
   1.25,
   0.75,
   0.25,
   -0.25,
   -0.75,
   -1.25,
   -1.75,
   -2.2};
   Double_t Graph3_fy3008[10] = {
   0.263377,
   0.234428,
   0.19231,
   0.156091,
   0.13209,
   0.115851,
   0.0964275,
   0.0539073,
   -0.0465022,
   -0.215376};
   Double_t Graph3_felx3008[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fely3008[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehx3008[10] = {
   0.2,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.2};
   Double_t Graph3_fehy3008[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(10,Graph3_fx3008,Graph3_fy3008,Graph3_felx3008,Graph3_fehx3008,Graph3_fely3008,Graph3_fehy3008);
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
   
   Double_t Graph4_fx1003[10] = {
   2.2,
   1.75,
   1.25,
   0.75,
   0.25,
   -0.25,
   -0.75,
   -1.25,
   -1.75,
   -2.2};
   Double_t Graph4_fy1003[10] = {
   0.257652,
   0.265253,
   0.1771034,
   0.1405682,
   0.1581285,
   0.1047664,
   0.09752007,
   0.0006272976,
   -0.1246472,
   -0.2374407};
   Double_t Graph4_fex1003[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1003[10] = {
   0.04329624,
   0.03217318,
   0.02801475,
   0.02449562,
   0.0241582,
   0.02436489,
   0.02298849,
   0.02790282,
   0.03243437,
   0.04142841};
   TGraphErrors *gre = new TGraphErrors(10,Graph4_fx1003,Graph4_fy1003,Graph4_fex1003,Graph4_fey1003);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t gch_exp_statonly_1_fx1004[10] = {
   2.2,
   1.75,
   1.25,
   0.75,
   0.25,
   -0.25,
   -0.75,
   -1.25,
   -1.75,
   -2.2};
   Double_t gch_exp_statonly_1_fy1004[10] = {
   0.257652,
   0.265253,
   0.1771034,
   0.1405682,
   0.1581285,
   0.1047664,
   0.09752007,
   0.0006272976,
   -0.1246472,
   -0.2374407};
   Double_t gch_exp_statonly_1_fex1004[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t gch_exp_statonly_1_fey1004[10] = {
   0.01963104,
   0.01666601,
   0.0164871,
   0.01492413,
   0.01459851,
   0.01543096,
   0.01519633,
   0.01658993,
   0.01884317,
   0.02283962};
   gre = new TGraphErrors(10,gch_exp_statonly_1_fx1004,gch_exp_statonly_1_fy1004,gch_exp_statonly_1_fex1004,gch_exp_statonly_1_fey1004);
   gre->SetName("gch_exp_statonly_1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gch_exp_statonly_11004 = new TH1F("Graph_gch_exp_statonly_11004","Graph",100,-2.64,2.64);
   Graph_gch_exp_statonly_11004->SetMinimum(-0.3145003);
   Graph_gch_exp_statonly_11004->SetMaximum(0.3361389);
   Graph_gch_exp_statonly_11004->SetDirectory(0);
   Graph_gch_exp_statonly_11004->SetStats(0);
   Graph_gch_exp_statonly_11004->SetLineStyle(0);
   Graph_gch_exp_statonly_11004->SetMarkerStyle(20);
   Graph_gch_exp_statonly_11004->GetXaxis()->SetLabelFont(42);
   Graph_gch_exp_statonly_11004->GetXaxis()->SetLabelOffset(0.007);
   Graph_gch_exp_statonly_11004->GetXaxis()->SetLabelSize(0.05);
   Graph_gch_exp_statonly_11004->GetXaxis()->SetTitleSize(0.06);
   Graph_gch_exp_statonly_11004->GetXaxis()->SetTitleOffset(1.1);
   Graph_gch_exp_statonly_11004->GetXaxis()->SetTitleFont(42);
   Graph_gch_exp_statonly_11004->GetYaxis()->SetLabelFont(42);
   Graph_gch_exp_statonly_11004->GetYaxis()->SetLabelOffset(0.007);
   Graph_gch_exp_statonly_11004->GetYaxis()->SetLabelSize(0.05);
   Graph_gch_exp_statonly_11004->GetYaxis()->SetTitleSize(0.06);
   Graph_gch_exp_statonly_11004->GetYaxis()->SetTitleOffset(1.5);
   Graph_gch_exp_statonly_11004->GetYaxis()->SetTitleFont(42);
   Graph_gch_exp_statonly_11004->GetZaxis()->SetLabelFont(42);
   Graph_gch_exp_statonly_11004->GetZaxis()->SetLabelOffset(0.007);
   Graph_gch_exp_statonly_11004->GetZaxis()->SetLabelSize(0.05);
   Graph_gch_exp_statonly_11004->GetZaxis()->SetTitleSize(0.06);
   Graph_gch_exp_statonly_11004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gch_exp_statonly_11004);
   
   gre->Draw("pz");
   
   TLegend *leg = new TLegend(0.6,0.15,0.9,0.3,NULL,"brNDC");
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
   
   TPaveText *pt = new TPaveText(0.6,0.4,0.9,0.5,"brNDC");
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
      tex = new TLatex(0.196,0.884,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","Graph",100,-2.5,2.5);
   Graph_copy->SetMinimum(-0.4);
   Graph_copy->SetMaximum(0.4);
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
   Graph_copy->GetYaxis()->SetTitle("(N_{#font[12]{l}}^{+}#font[122]{-}N_{#font[12]{l}}^{#font[122]{-}})/(N_{#font[12]{l}}^{+}+N_{#font[12]{l}}^{#font[122]{-}})");
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
