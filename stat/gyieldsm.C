void gyieldsm()
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
   
   Double_t Graph0_fx3025[10] = {
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
   Double_t Graph0_fy3025[10] = {
   59.32539,
   64.47146,
   69.07048,
   72.39233,
   74.34135,
   75.07561,
   74.77608,
   73.3034,
   70.13963,
   64.15945};
   Double_t Graph0_felx3025[10] = {
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
   Double_t Graph0_fely3025[10] = {
   4.049307,
   4.291061,
   4.910586,
   5.11398,
   5.163876,
   5.085138,
   4.844703,
   4.758015,
   4.724943,
   4.441151};
   Double_t Graph0_fehx3025[10] = {
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
   Double_t Graph0_fehy3025[10] = {
   3.565033,
   3.783372,
   4.186292,
   4.760494,
   4.941513,
   4.68498,
   4.43467,
   4.34438,
   4.178857,
   3.863407};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph0_fx3025,Graph0_fy3025,Graph0_felx3025,Graph0_fehx3025,Graph0_fely3025,Graph0_fehy3025);
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
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","Graph",100,-2.5,2.5);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(140);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(505);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.07142857);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetTitle("d#sigma (W^{#font[122]{-}}#rightarrow#font[12]{l}^{#font[122]{-}}#nu) / d#eta_{lab} [nb]");
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.07142857);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.07142857);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("a2");
   
   Double_t Graph1_fx3026[10] = {
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
   Double_t Graph1_fy3026[10] = {
   59.32539,
   64.47146,
   69.07048,
   72.39233,
   74.34135,
   75.07561,
   74.77608,
   73.3034,
   70.13963,
   64.15945};
   Double_t Graph1_felx3026[10] = {
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
   Double_t Graph1_fely3026[10] = {
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
   Double_t Graph1_fehx3026[10] = {
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
   Double_t Graph1_fehy3026[10] = {
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
   grae = new TGraphAsymmErrors(10,Graph1_fx3026,Graph1_fy3026,Graph1_felx3026,Graph1_fehx3026,Graph1_fely3026,Graph1_fehy3026);
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
   
   Double_t Graph2_fx3027[10] = {
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
   Double_t Graph2_fy3027[10] = {
   53.40554,
   59.08411,
   64.79595,
   69.69657,
   73.55716,
   76.08652,
   76.94142,
   75.91387,
   72.39233,
   65.239};
   Double_t Graph2_felx3027[10] = {
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
   Double_t Graph2_fely3027[10] = {
   5.140825,
   4.71807,
   4.547615,
   5.191932,
   5.041559,
   5.889386,
   4.586493,
   5.352475,
   4.897154,
   4.423244};
   Double_t Graph2_fehx3027[10] = {
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
   Double_t Graph2_fehy3027[10] = {
   3.929002,
   4.292653,
   4.867301,
   4.621877,
   5.155056,
   4.347245,
   5.159445,
   4.182154,
   4.310984,
   4.059933};
   grae = new TGraphAsymmErrors(10,Graph2_fx3027,Graph2_fy3027,Graph2_felx3027,Graph2_fehx3027,Graph2_fely3027,Graph2_fehy3027);
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
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","Graph",100,-2.88,2.88);
   Graph_Graph3027->SetMinimum(44.8811);
   Graph_Graph3027->SetMaximum(85.48448);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2");
   
   Double_t Graph3_fx3028[10] = {
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
   Double_t Graph3_fy3028[10] = {
   53.40554,
   59.08411,
   64.79595,
   69.69657,
   73.55716,
   76.08652,
   76.94142,
   75.91387,
   72.39233,
   65.239};
   Double_t Graph3_felx3028[10] = {
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
   Double_t Graph3_fely3028[10] = {
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
   Double_t Graph3_fehx3028[10] = {
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
   Double_t Graph3_fehy3028[10] = {
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
   grae = new TGraphAsymmErrors(10,Graph3_fx3028,Graph3_fy3028,Graph3_felx3028,Graph3_fehx3028,Graph3_fely3028,Graph3_fehy3028);
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
   
   Double_t Graph4_fx1019[10] = {
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
   Double_t Graph4_fy1019[10] = {
   63.74558,
   59.82659,
   70.07637,
   76.50431,
   77.98414,
   80.81712,
   81.12042,
   85.37223,
   79.92838,
   72.14742};
   Double_t Graph4_fex1019[10] = {
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
   Double_t Graph4_fey1019[10] = {
   4.41973,
   3.063394,
   3.101657,
   2.970939,
   2.87593,
   2.923533,
   2.81929,
   3.393945,
   3.895989,
   4.302458};
   TGraphErrors *gre = new TGraphErrors(10,Graph4_fx1019,Graph4_fy1019,Graph4_fex1019,Graph4_fey1019);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t gyieldsm_exp_statonly_1_fx1020[10] = {
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
   Double_t gyieldsm_exp_statonly_1_fy1020[10] = {
   63.74558,
   59.82659,
   70.07637,
   76.50431,
   77.98414,
   80.81712,
   81.12042,
   85.37223,
   79.92838,
   72.14742};
   Double_t gyieldsm_exp_statonly_1_fex1020[10] = {
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
   Double_t gyieldsm_exp_statonly_1_fey1020[10] = {
   2.107652,
   1.678189,
   1.8231,
   1.766485,
   1.777864,
   1.898364,
   1.834872,
   2.005687,
   2.127309,
   2.244774};
   gre = new TGraphErrors(10,gyieldsm_exp_statonly_1_fx1020,gyieldsm_exp_statonly_1_fy1020,gyieldsm_exp_statonly_1_fex1020,gyieldsm_exp_statonly_1_fey1020);
   gre->SetName("gyieldsm_exp_statonly_1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_gyieldsm_exp_statonly_11020 = new TH1F("Graph_gyieldsm_exp_statonly_11020","Graph",100,-2.64,2.64);
   Graph_gyieldsm_exp_statonly_11020->SetMinimum(55.22545);
   Graph_gyieldsm_exp_statonly_11020->SetMaximum(90.30087);
   Graph_gyieldsm_exp_statonly_11020->SetDirectory(0);
   Graph_gyieldsm_exp_statonly_11020->SetStats(0);
   Graph_gyieldsm_exp_statonly_11020->SetLineStyle(0);
   Graph_gyieldsm_exp_statonly_11020->SetMarkerStyle(20);
   Graph_gyieldsm_exp_statonly_11020->GetXaxis()->SetLabelFont(42);
   Graph_gyieldsm_exp_statonly_11020->GetXaxis()->SetLabelOffset(0.007);
   Graph_gyieldsm_exp_statonly_11020->GetXaxis()->SetLabelSize(0.05);
   Graph_gyieldsm_exp_statonly_11020->GetXaxis()->SetTitleSize(0.06);
   Graph_gyieldsm_exp_statonly_11020->GetXaxis()->SetTitleOffset(1.1);
   Graph_gyieldsm_exp_statonly_11020->GetXaxis()->SetTitleFont(42);
   Graph_gyieldsm_exp_statonly_11020->GetYaxis()->SetLabelFont(42);
   Graph_gyieldsm_exp_statonly_11020->GetYaxis()->SetLabelOffset(0.007);
   Graph_gyieldsm_exp_statonly_11020->GetYaxis()->SetLabelSize(0.05);
   Graph_gyieldsm_exp_statonly_11020->GetYaxis()->SetTitleSize(0.06);
   Graph_gyieldsm_exp_statonly_11020->GetYaxis()->SetTitleOffset(1.5);
   Graph_gyieldsm_exp_statonly_11020->GetYaxis()->SetTitleFont(42);
   Graph_gyieldsm_exp_statonly_11020->GetZaxis()->SetLabelFont(42);
   Graph_gyieldsm_exp_statonly_11020->GetZaxis()->SetLabelOffset(0.007);
   Graph_gyieldsm_exp_statonly_11020->GetZaxis()->SetLabelSize(0.05);
   Graph_gyieldsm_exp_statonly_11020->GetZaxis()->SetTitleSize(0.06);
   Graph_gyieldsm_exp_statonly_11020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gyieldsm_exp_statonly_11020);
   
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
   AText = pt->AddText("W^{#font[122]{-}} #rightarrow #font[12]{l}^{#font[122]{-}} + #nu");
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
   Graph_copy->GetYaxis()->SetTitle("d#sigma (W^{#font[122]{-}}#rightarrow#font[12]{l}^{#font[122]{-}}#nu) / d#eta_{lab} [nb]");
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
   
   Double_t Graph0_fx1021[10] = {
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
   Double_t Graph0_fy1021[10] = {
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
   Double_t Graph0_fex1021[10] = {
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
   Double_t Graph0_fey1021[10] = {
   0.06430404,
   0.06274387,
   0.06606055,
   0.06824479,
   0.06798259,
   0.06512307,
   0.06210828,
   0.0621512,
   0.06359123,
   0.06487454};
   gre = new TGraphErrors(10,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","Graph",100,-2.88,2.88);
   Graph_Graph1021->SetMinimum(0.9181063);
   Graph_Graph1021->SetMaximum(1.081894);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);
   Graph_Graph1021->SetLineStyle(0);
   Graph_Graph1021->SetMarkerStyle(20);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   gre->Draw("2");
   
   Double_t Graph1_fx1022[10] = {
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
   Double_t Graph1_fy1022[10] = {
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
   Double_t Graph1_fex1022[10] = {
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
   Double_t Graph1_fey1022[10] = {
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
   gre = new TGraphErrors(10,Graph1_fx1022,Graph1_fy1022,Graph1_fex1022,Graph1_fey1022);
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
   
   Double_t Graph2_fx1023[10] = {
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
   Double_t Graph2_fy1023[10] = {
   0.9002139,
   0.9164381,
   0.9381136,
   0.9627618,
   0.9894516,
   1.013465,
   1.028958,
   1.035612,
   1.032117,
   1.016826};
   Double_t Graph2_fex1023[10] = {
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
   Double_t Graph2_fey1023[10] = {
   0.0471424,
   0.03664524,
   0.02816235,
   0.0181991,
   0.01827098,
   0.02294929,
   0.02169178,
   0.01684313,
   0.01389536,
   0.01602224};
   gre = new TGraphErrors(10,Graph2_fx1023,Graph2_fy1023,Graph2_fex1023,Graph2_fey1023);
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
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","Graph",100,-2.88,2.88);
   Graph_Graph1023->SetMinimum(0.8331331);
   Graph_Graph1023->SetMaximum(1.072393);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);
   Graph_Graph1023->SetLineStyle(0);
   Graph_Graph1023->SetMarkerStyle(20);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   gre->Draw("2");
   
   Double_t Graph3_fx1024[10] = {
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
   Double_t Graph3_fy1024[10] = {
   0.9002139,
   0.9164381,
   0.9381136,
   0.9627618,
   0.9894516,
   1.013465,
   1.028958,
   1.035612,
   1.032117,
   1.016826};
   Double_t Graph3_fex1024[10] = {
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
   Double_t Graph3_fey1024[10] = {
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
   gre = new TGraphErrors(10,Graph3_fx1024,Graph3_fy1024,Graph3_fex1024,Graph3_fey1024);
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
   
   Double_t Graph4_fx1025[10] = {
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
   Double_t Graph4_fy1025[10] = {
   1.074507,
   0.9279546,
   1.014563,
   1.056801,
   1.049001,
   1.076476,
   1.084845,
   1.164642,
   1.139561,
   1.124502};
   Double_t Graph4_fex1025[10] = {
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
   Double_t Graph4_fey1025[10] = {
   0.0744998,
   0.04751551,
   0.04490569,
   0.04103942,
   0.03868547,
   0.03894119,
   0.0377031,
   0.04629996,
   0.05554619,
   0.06705883};
   gre = new TGraphErrors(10,Graph4_fx1025,Graph4_fy1025,Graph4_fex1025,Graph4_fey1025);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(0);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->Draw("||");
   
   Double_t Graph5_fx1026[10] = {
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
   Double_t Graph5_fy1026[10] = {
   1.074507,
   0.9279546,
   1.014563,
   1.056801,
   1.049001,
   1.076476,
   1.084845,
   1.164642,
   1.139561,
   1.124502};
   Double_t Graph5_fex1026[10] = {
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
   Double_t Graph5_fey1026[10] = {
   0.03552698,
   0.02602995,
   0.02639478,
   0.02440155,
   0.02391488,
   0.02528603,
   0.02453822,
   0.02736145,
   0.03032963,
   0.03498743};
   gre = new TGraphErrors(10,Graph5_fx1026,Graph5_fy1026,Graph5_fex1026,Graph5_fey1026);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","Graph",100,-2.64,2.64);
   Graph_Graph1026->SetMinimum(0.8729167);
   Graph_Graph1026->SetMaximum(1.221012);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);
   Graph_Graph1026->SetLineStyle(0);
   Graph_Graph1026->SetMarkerStyle(20);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1026->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
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
