void gyieldsp()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 31 19:31:43 2015) by ROOT version6.05/01
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
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
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.26,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.5,-6.621622,2.75,158.9189);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.16);
   pad1->SetRightMargin(0.04);
   pad1->SetTopMargin(0.1142857);
   pad1->SetBottomMargin(0.04);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3021[10] = {
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
   Double_t Graph0_fy3021[10] = {
   103.56,
   105.744,
   103.4081,
   100.0093,
   97.03688,
   94.36609,
   90.5471,
   82.43278,
   65.82142,
   43.43165};
   Double_t Graph0_felx3021[10] = {
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
   Double_t Graph0_fely3021[10] = {
   7.299733,
   7.206486,
   6.824632,
   6.594841,
   6.406375,
   6.079494,
   5.746822,
   5.225105,
   4.165823,
   2.787035};
   Double_t Graph0_fehx3021[10] = {
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
   Double_t Graph0_fehy3021[10] = {
   5.988963,
   6.218694,
   6.307709,
   6.368316,
   5.847823,
   5.655323,
   5.083818,
   4.561256,
   3.722445,
   2.542957};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph0_fx3021,Graph0_fy3021,Graph0_felx3021,Graph0_fehx3021,Graph0_fely3021,Graph0_fehy3021);
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
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","Graph",100,-2.5,2.5);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(140);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(505);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.07142857);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetTitle("d#sigma (W^{+}#rightarrow#font[12]{l}^{+}#nu) / d#eta_{lab} [nb]");
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.07142857);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.07142857);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("a2");
   
   Double_t Graph1_fx3022[10] = {
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
   Double_t Graph1_fy3022[10] = {
   103.56,
   105.744,
   103.4081,
   100.0093,
   97.03688,
   94.36609,
   90.5471,
   82.43278,
   65.82142,
   43.43165};
   Double_t Graph1_felx3022[10] = {
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
   Double_t Graph1_fely3022[10] = {
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
   Double_t Graph1_fehx3022[10] = {
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
   Double_t Graph1_fehy3022[10] = {
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
   grae = new TGraphAsymmErrors(10,Graph1_fx3022,Graph1_fy3022,Graph1_felx3022,Graph1_fehx3022,Graph1_fely3022,Graph1_fehy3022);
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
   
   Double_t Graph2_fx3023[10] = {
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
   Double_t Graph2_fy3023[10] = {
   91.59545,
   95.26883,
   95.65156,
   95.47892,
   95.94693,
   96.02597,
   93.3635,
   84.56484,
   65.95871,
   42.11706};
   Double_t Graph2_felx3023[10] = {
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
   Double_t Graph2_fely3023[10] = {
   8.336985,
   8.261181,
   7.634488,
   6.438496,
   6.661149,
   6.164321,
   6.1019,
   4.954787,
   4.773841,
   2.599375};
   Double_t Graph2_fehx3023[10] = {
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
   Double_t Graph2_fehy3023[10] = {
   8.262572,
   7.14746,
   6.62492,
   6.725295,
   5.946212,
   5.838684,
   5.077774,
   5.257491,
   3.443198,
   2.602454};
   grae = new TGraphAsymmErrors(10,Graph2_fx3023,Graph2_fy3023,Graph2_felx3023,Graph2_fehx3023,Graph2_fely3023,Graph2_fehy3023);
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
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","Graph",100,-2.88,2.88);
   Graph_Graph3023->SetMinimum(33.22782);
   Graph_Graph3023->SetMaximum(108.7062);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t Graph3_fx3024[10] = {
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
   Double_t Graph3_fy3024[10] = {
   91.59545,
   95.26883,
   95.65156,
   95.47892,
   95.94693,
   96.02597,
   93.3635,
   84.56484,
   65.95871,
   42.11706};
   Double_t Graph3_felx3024[10] = {
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
   Double_t Graph3_fely3024[10] = {
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
   Double_t Graph3_fehx3024[10] = {
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
   Double_t Graph3_fehy3024[10] = {
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
   grae = new TGraphAsymmErrors(10,Graph3_fx3024,Graph3_fy3024,Graph3_felx3024,Graph3_fehx3024,Graph3_fely3024,Graph3_fehy3024);
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
   
   Double_t Graph4_fx1011[10] = {
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
   Double_t Graph4_fy1011[10] = {
   108.0732,
   102.2597,
   100.2246,
   101.796,
   105.3416,
   99.73788,
   98.62062,
   85.94448,
   62.90271,
   44.47931};
   Double_t Graph4_fex1011[10] = {
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
   Double_t Graph4_fey1011[10] = {
   6.667786,
   4.792637,
   3.765295,
   3.224798,
   3.479167,
   3.377478,
   3.07273,
   3.40604,
   2.800731,
   2.87761};
   TGraphErrors *gre = new TGraphErrors(10,Graph4_fx1011,Graph4_fy1011,Graph4_fex1011,Graph4_fey1011);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t gyieldsp_exp_statonly_1_fx1012[10] = {
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
   Double_t gyieldsp_exp_statonly_1_fy1012[10] = {
   108.0732,
   102.2597,
   100.2246,
   101.796,
   105.3416,
   99.73788,
   98.62062,
   85.94448,
   62.90271,
   44.47931};
   Double_t gyieldsp_exp_statonly_1_fex1012[10] = {
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
   Double_t gyieldsp_exp_statonly_1_fey1012[10] = {
   2.814265,
   2.293805,
   2.181326,
   2.056934,
   2.054972,
   2.059018,
   2.050204,
   2.01317,
   1.754638,
   1.667829};
   gre = new TGraphErrors(10,gyieldsp_exp_statonly_1_fx1012,gyieldsp_exp_statonly_1_fy1012,gyieldsp_exp_statonly_1_fex1012,gyieldsp_exp_statonly_1_fey1012);
   gre->SetName("gyieldsp_exp_statonly_1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gyieldsp_exp_statonly_11012 = new TH1F("Graph_gyieldsp_exp_statonly_11012","Graph",100,-2.64,2.64);
   Graph_gyieldsp_exp_statonly_11012->SetMinimum(36.00388);
   Graph_gyieldsp_exp_statonly_11012->SetMaximum(117.6951);
   Graph_gyieldsp_exp_statonly_11012->SetDirectory(0);
   Graph_gyieldsp_exp_statonly_11012->SetStats(0);
   Graph_gyieldsp_exp_statonly_11012->SetLineStyle(0);
   Graph_gyieldsp_exp_statonly_11012->SetMarkerStyle(20);
   Graph_gyieldsp_exp_statonly_11012->GetXaxis()->SetLabelFont(42);
   Graph_gyieldsp_exp_statonly_11012->GetXaxis()->SetLabelOffset(0.007);
   Graph_gyieldsp_exp_statonly_11012->GetXaxis()->SetLabelSize(0.05);
   Graph_gyieldsp_exp_statonly_11012->GetXaxis()->SetTitleSize(0.06);
   Graph_gyieldsp_exp_statonly_11012->GetXaxis()->SetTitleOffset(1.1);
   Graph_gyieldsp_exp_statonly_11012->GetXaxis()->SetTitleFont(42);
   Graph_gyieldsp_exp_statonly_11012->GetYaxis()->SetLabelFont(42);
   Graph_gyieldsp_exp_statonly_11012->GetYaxis()->SetLabelOffset(0.007);
   Graph_gyieldsp_exp_statonly_11012->GetYaxis()->SetLabelSize(0.05);
   Graph_gyieldsp_exp_statonly_11012->GetYaxis()->SetTitleSize(0.06);
   Graph_gyieldsp_exp_statonly_11012->GetYaxis()->SetTitleOffset(1.5);
   Graph_gyieldsp_exp_statonly_11012->GetYaxis()->SetTitleFont(42);
   Graph_gyieldsp_exp_statonly_11012->GetZaxis()->SetLabelFont(42);
   Graph_gyieldsp_exp_statonly_11012->GetZaxis()->SetLabelOffset(0.007);
   Graph_gyieldsp_exp_statonly_11012->GetZaxis()->SetLabelSize(0.05);
   Graph_gyieldsp_exp_statonly_11012->GetZaxis()->SetTitleSize(0.06);
   Graph_gyieldsp_exp_statonly_11012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gyieldsp_exp_statonly_11012);
   
   gre->Draw("pz");
   
   TLegend *leg = new TLegend(0.6,0.1,0.9,0.3142857,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05714286);
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
   
   TPaveText *pt = new TPaveText(-2.35,125,-0.35,140,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05714286);
   TText *AText = pt->AddText("Luminosity uncertainty: 3.5%");
   pt->Draw();
   
   pt = new TPaveText(0.27,0.2,0.5,0.3428571,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05714286);
   AText = pt->AddText("W^{+} #rightarrow #font[12]{l}^{+} + #nu");
   AText = pt->AddText("p_{T}^{#font[12]{l}} > 25 GeV/c");
   pt->Draw();
      tex = new TLatex(0.96,0.9177143," #sqrt{s_{NN}} = 5.02 TeV");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05714286);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.9177143,"pPb 34.6 nb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.05714286);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.924,0.8476571,"CMS");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06857143);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","Graph",100,-2.5,2.5);
   Graph_copy->SetMinimum(0);
   Graph_copy->SetMaximum(140);
   Graph_copy->SetDirectory(0);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineStyle(0);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->GetXaxis()->SetNdivisions(505);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.007);
   Graph_copy->GetXaxis()->SetLabelSize(0);
   Graph_copy->GetXaxis()->SetTitleSize(0.07142857);
   Graph_copy->GetXaxis()->SetTitleOffset(1.1);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("d#sigma (W^{+}#rightarrow#font[12]{l}^{+}#nu) / d#eta_{lab} [nb]");
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.007);
   Graph_copy->GetYaxis()->SetLabelSize(0.07142857);
   Graph_copy->GetYaxis()->SetTitleSize(0.07142857);
   Graph_copy->GetYaxis()->SetTitleOffset(1.05);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.007);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.06);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0,1,0.288);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-3.5,0.35,2.75,1.35);
   pad2->SetFillColor(0);
   pad2->SetFillStyle(4000);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.16);
   pad2->SetRightMargin(0.04);
   pad2->SetTopMargin(0);
   pad2->SetBottomMargin(0.4);
   pad2->SetFrameFillStyle(4000);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameFillStyle(4000);
   pad2->SetFrameBorderMode(0);
   
   TH1F *Graph = new TH1F("Graph","Graph",100,-2.5,2.5);
   Graph->SetMinimum(0.75);
   Graph->SetMaximum(1.35);
   Graph->SetDirectory(0);
   Graph->SetStats(0);
   Graph->SetLineStyle(0);
   Graph->SetMarkerStyle(20);
   Graph->GetXaxis()->SetTitle("#eta_{lab}");
   Graph->GetXaxis()->SetNdivisions(505);
   Graph->GetXaxis()->SetLabelFont(42);
   Graph->GetXaxis()->SetLabelOffset(0.007);
   Graph->GetXaxis()->SetLabelSize(0.1666667);
   Graph->GetXaxis()->SetTitleSize(0.1666667);
   Graph->GetXaxis()->SetTitleOffset(1.1);
   Graph->GetXaxis()->SetTitleFont(42);
   Graph->GetYaxis()->SetTitle("Ratio ");
   Graph->GetYaxis()->SetNdivisions(503);
   Graph->GetYaxis()->SetLabelFont(42);
   Graph->GetYaxis()->SetLabelOffset(0.007);
   Graph->GetYaxis()->SetLabelSize(0.1666667);
   Graph->GetYaxis()->SetTitleSize(0.1666667);
   Graph->GetYaxis()->SetTitleOffset(0.45);
   Graph->GetYaxis()->SetTitleFont(42);
   Graph->GetZaxis()->SetLabelFont(42);
   Graph->GetZaxis()->SetLabelOffset(0.007);
   Graph->GetZaxis()->SetLabelSize(0.05);
   Graph->GetZaxis()->SetTitleSize(0.06);
   Graph->GetZaxis()->SetTitleFont(42);
   Graph->Draw("");
   
   Double_t Graph0_fx1013[10] = {
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
   Double_t Graph0_fy1013[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fex1013[10] = {
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
   Double_t Graph0_fey1013[10] = {
   0.0644708,
   0.06365122,
   0.06354681,
   0.06481966,
   0.06320752,
   0.0622177,
   0.05991862,
   0.05949606,
   0.06001632,
   0.06142499};
   gre = new TGraphErrors(10,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","Graph",100,-2.88,2.88);
   Graph_Graph1013->SetMinimum(0.9222164);
   Graph_Graph1013->SetMaximum(1.077784);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);
   Graph_Graph1013->SetLineStyle(0);
   Graph_Graph1013->SetMarkerStyle(20);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   gre->Draw("2");
   
   Double_t Graph1_fx1014[10] = {
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
   Double_t Graph1_fy1014[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph1_fex1014[10] = {
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
   Double_t Graph1_fey1014[10] = {
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
   gre = new TGraphErrors(10,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   gre->Draw("z");
   
   Double_t Graph2_fx1015[10] = {
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
   Double_t Graph2_fy1015[10] = {
   0.8844678,
   0.9009383,
   0.9249909,
   0.9547005,
   0.9887677,
   1.01759,
   1.031104,
   1.025864,
   1.002086,
   0.9697318};
   Double_t Graph2_fex1015[10] = {
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
   Double_t Graph2_fey1015[10] = {
   0.05296218,
   0.042007,
   0.03326947,
   0.02116912,
   0.0170915,
   0.01890429,
   0.01672622,
   0.01681633,
   0.01541551,
   0.01597539};
   gre = new TGraphErrors(10,Graph2_fx1015,Graph2_fy1015,Graph2_fex1015,Graph2_fey1015);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#009900");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3375);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineStyle(7);
   gre->SetLineWidth(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Graph",100,-2.88,2.88);
   Graph_Graph1015->SetMinimum(0.8098732);
   Graph_Graph1015->SetMaximum(1.069463);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);
   Graph_Graph1015->SetLineStyle(0);
   Graph_Graph1015->SetMarkerStyle(20);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   gre->Draw("2");
   
   Double_t Graph3_fx1016[10] = {
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
   Double_t Graph3_fy1016[10] = {
   0.8844678,
   0.9009383,
   0.9249909,
   0.9547005,
   0.9887677,
   1.01759,
   1.031104,
   1.025864,
   1.002086,
   0.9697318};
   Double_t Graph3_fex1016[10] = {
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
   Double_t Graph3_fey1016[10] = {
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
   gre = new TGraphErrors(10,Graph3_fx1016,Graph3_fy1016,Graph3_fex1016,Graph3_fey1016);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#009900");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3375);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineStyle(7);
   gre->SetLineWidth(4);
   gre->SetMarkerStyle(20);
   gre->Draw("z");
   
   Double_t Graph4_fx1017[10] = {
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
   Double_t Graph4_fy1017[10] = {
   1.043581,
   0.9670498,
   0.9692137,
   1.017865,
   1.085583,
   1.056925,
   1.089164,
   1.042601,
   0.9556571,
   1.024122};
   Double_t Graph4_fex1017[10] = {
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
   Double_t Graph4_fey1017[10] = {
   0.06438575,
   0.04532301,
   0.03641199,
   0.03224499,
   0.03585407,
   0.03579123,
   0.03393516,
   0.041319,
   0.04255045,
   0.06625605};
   gre = new TGraphErrors(10,Graph4_fx1017,Graph4_fy1017,Graph4_fex1017,Graph4_fey1017);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t Graph5_fx1018[10] = {
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
   Double_t Graph5_fy1018[10] = {
   1.043581,
   0.9670498,
   0.9692137,
   1.017865,
   1.085583,
   1.056925,
   1.089164,
   1.042601,
   0.9556571,
   1.024122};
   Double_t Graph5_fex1018[10] = {
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
   Double_t Graph5_fey1018[10] = {
   0.02717523,
   0.02169205,
   0.02109434,
   0.02056743,
   0.02117723,
   0.02181947,
   0.02264241,
   0.02442196,
   0.02665755,
   0.03840124};
   gre = new TGraphErrors(10,Graph5_fx1018,Graph5_fy1018,Graph5_fex1018,Graph5_fey1018);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,-2.64,2.64);
   Graph_Graph1018->SetMinimum(0.9107189);
   Graph_Graph1018->SetMaximum(1.130087);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);
   Graph_Graph1018->SetLineStyle(0);
   Graph_Graph1018->SetMarkerStyle(20);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("pz");
   
   TH1F *Graph_copy = new TH1F("Graph_copy","Graph",100,-2.5,2.5);
   Graph_copy->SetMinimum(0.75);
   Graph_copy->SetMaximum(1.35);
   Graph_copy->SetDirectory(0);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineStyle(0);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->GetXaxis()->SetTitle("#eta_{lab}");
   Graph_copy->GetXaxis()->SetNdivisions(505);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.007);
   Graph_copy->GetXaxis()->SetLabelSize(0.1666667);
   Graph_copy->GetXaxis()->SetTitleSize(0.1666667);
   Graph_copy->GetXaxis()->SetTitleOffset(1.1);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("Ratio ");
   Graph_copy->GetYaxis()->SetNdivisions(503);
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.007);
   Graph_copy->GetYaxis()->SetLabelSize(0.1666667);
   Graph_copy->GetYaxis()->SetTitleSize(0.1666667);
   Graph_copy->GetYaxis()->SetTitleOffset(0.45);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.007);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.06);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
