void brazilianFlag_WZ_VVnew_new_combined_13TeV()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Oct 13 17:13:46 2017) by ROOT version6.02/05
   TCanvas *c1 = new TCanvas("c1", "c1",66,78,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0.7857143,-4.905614,4.238095,2.641169);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.04);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.12);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *hframe1 = new TH1F("hframe1","",1000,1.2,4.1);
   hframe1->SetMinimum(0.0001);
   hframe1->SetMaximum(109);
   hframe1->SetDirectory(0);
   hframe1->SetStats(0);
   hframe1->SetLineStyle(0);
   hframe1->SetMarkerStyle(20);
   hframe1->GetXaxis()->SetTitle("M_{W'} (TeV)");
   hframe1->GetXaxis()->SetNdivisions(508);
   hframe1->GetXaxis()->SetLabelFont(42);
   hframe1->GetXaxis()->SetLabelOffset(0.007);
   hframe1->GetXaxis()->SetTitleSize(0.05);
   hframe1->GetXaxis()->SetTitleOffset(1.05);
   hframe1->GetXaxis()->SetTitleFont(42);
   hframe1->GetYaxis()->SetTitle("#sigma #times #bf{#it{#Beta}}(W' #rightarrow WZ) (pb)");
   hframe1->GetYaxis()->SetLabelFont(42);
   hframe1->GetYaxis()->SetLabelOffset(0.007);
   hframe1->GetYaxis()->SetTitleSize(0.05);
   hframe1->GetYaxis()->SetTitleOffset(1.15);
   hframe1->GetYaxis()->SetTitleFont(42);
   hframe1->GetZaxis()->SetLabelFont(42);
   hframe1->GetZaxis()->SetLabelOffset(0.007);
   hframe1->GetZaxis()->SetLabelSize(0.05);
   hframe1->GetZaxis()->SetTitleSize(0.06);
   hframe1->GetZaxis()->SetTitleFont(42);
   hframe1->Draw(" ");
   
   Double_t Graph0_fx1[60] = {
   1.2,
   1.3,
   1.4,
   1.5,
   1.6,
   1.7,
   1.8,
   1.9,
   2,
   2.1,
   2.2,
   2.3,
   2.4,
   2.5,
   2.6,
   2.7,
   2.8,
   2.9,
   3,
   3.1,
   3.2,
   3.3,
   3.4,
   3.5,
   3.6,
   3.7,
   3.8,
   3.9,
   4,
   4.1,
   4.1,
   4,
   3.9,
   3.8,
   3.7,
   3.6,
   3.5,
   3.4,
   3.3,
   3.2,
   3.1,
   3,
   2.9,
   2.8,
   2.7,
   2.6,
   2.5,
   2.4,
   2.3,
   2.2,
   2.1,
   2,
   1.9,
   1.8,
   1.7,
   1.6,
   1.5,
   1.4,
   1.3,
   1.2};
   Double_t Graph0_fy1[60] = {
   0.01753634,
   0.0125116,
   0.009520164,
   0.007292429,
   0.005688246,
   0.004510711,
   0.003605149,
   0.002953244,
   0.002467268,
   0.002098207,
   0.001792712,
   0.001576966,
   0.001396686,
   0.001231893,
   0.001105972,
   0.0009870634,
   0.000904579,
   0.0008070103,
   0.0007476316,
   0.0006833341,
   0.0006277139,
   0.0005741873,
   0.000532592,
   0.0004965713,
   0.0004565651,
   0.0004177696,
   0.0003979936,
   0.0003782175,
   0.0003584414,
   0.0003386653,
   0.002681963,
   0.002838457,
   0.002994939,
   0.003151537,
   0.003307999,
   0.003542741,
   0.003777464,
   0.004051477,
   0.004325312,
   0.004638457,
   0.005015425,
   0.005312141,
   0.005692677,
   0.006173078,
   0.006687748,
   0.007246229,
   0.007968119,
   0.008779309,
   0.0096957,
   0.01078685,
   0.01236197,
   0.01433302,
   0.01679836,
   0.02004096,
   0.02449504,
   0.03036509,
   0.03785383,
   0.04844352,
   0.06188349,
   0.08851722};
   TGraph *graph = new TGraph(60,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.91,4.39);
   Graph_Graph1->SetMinimum(0.0003047988);
   Graph_Graph1->SetMaximum(0.09733508);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("f");
   
   Double_t Graph1_fx2[60] = {
   1.2,
   1.3,
   1.4,
   1.5,
   1.6,
   1.7,
   1.8,
   1.9,
   2,
   2.1,
   2.2,
   2.3,
   2.4,
   2.5,
   2.6,
   2.7,
   2.8,
   2.9,
   3,
   3.1,
   3.2,
   3.3,
   3.4,
   3.5,
   3.6,
   3.7,
   3.8,
   3.9,
   4,
   4.1,
   4.1,
   4,
   3.9,
   3.8,
   3.7,
   3.6,
   3.5,
   3.4,
   3.3,
   3.2,
   3.1,
   3,
   2.9,
   2.8,
   2.7,
   2.6,
   2.5,
   2.4,
   2.3,
   2.2,
   2.1,
   2,
   1.9,
   1.8,
   1.7,
   1.6,
   1.5,
   1.4,
   1.3,
   1.2};
   Double_t Graph1_fy2[60] = {
   0.02426515,
   0.01720914,
   0.0131908,
   0.01017952,
   0.007926584,
   0.006313724,
   0.005068975,
   0.004171351,
   0.003486317,
   0.002971674,
   0.002556867,
   0.002254487,
   0.002011163,
   0.001786923,
   0.001596957,
   0.001455055,
   0.001314401,
   0.001202089,
   0.001097374,
   0.00101346,
   0.0009309688,
   0.0008607149,
   0.0008027225,
   0.0007484321,
   0.0006958337,
   0.0006387772,
   0.0006085393,
   0.0005783013,
   0.0005480633,
   0.0005178253,
   0.001639318,
   0.001720115,
   0.001799265,
   0.001893345,
   0.001970024,
   0.002091271,
   0.002210048,
   0.002370362,
   0.002507923,
   0.002689492,
   0.002901238,
   0.003114895,
   0.003331502,
   0.003631893,
   0.003963069,
   0.004319811,
   0.004744972,
   0.005308302,
   0.005858749,
   0.006567703,
   0.007587928,
   0.008798391,
   0.0103981,
   0.01246403,
   0.01531261,
   0.01915108,
   0.02416936,
   0.03098262,
   0.04018587,
   0.05661223};
   graph = new TGraph(60,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.91,4.39);
   Graph_Graph2->SetMinimum(0.0004660428);
   Graph_Graph2->SetMaximum(0.06222167);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("f");
   
   Double_t Graph2_fx1001[30] = {
   1.2,
   1.3,
   1.4,
   1.5,
   1.6,
   1.7,
   1.8,
   1.9,
   2,
   2.1,
   2.2,
   2.3,
   2.4,
   2.5,
   2.6,
   2.7,
   2.8,
   2.9,
   3,
   3.1,
   3.2,
   3.3,
   3.4,
   3.5,
   3.6,
   3.7,
   3.8,
   3.9,
   4,
   4.1};
   Double_t Graph2_fy1001[30] = {
   0.03605865,
   0.02572666,
   0.0197341,
   0.01523969,
   0.01198511,
   0.009582922,
   0.007723164,
   0.006380005,
   0.005398466,
   0.004610651,
   0.003990732,
   0.003525792,
   0.003164172,
   0.002828383,
   0.00255071,
   0.002318241,
   0.002124516,
   0.001930791,
   0.001788726,
   0.001666034,
   0.001530426,
   0.001427106,
   0.001336701,
   0.001246297,
   0.001168807,
   0.001091317,
   0.001039657,
   0.0009879967,
   0.0009363367,
   0.0008846768};
   Double_t Graph2_fex1001[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1001[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(30,Graph2_fx1001,Graph2_fy1001,Graph2_fex1001,Graph2_fey1001);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineStyle(3);
   gre->SetLineWidth(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.91,4.39);
   Graph_Graph1001->SetMinimum(0.0007962091);
   Graph_Graph1001->SetMaximum(0.03957605);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);
   Graph_Graph1001->SetLineStyle(0);
   Graph_Graph1001->SetMarkerStyle(20);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("l");
   
   Double_t Graph3_fx1002[30] = {
   1.2,
   1.3,
   1.4,
   1.5,
   1.6,
   1.7,
   1.8,
   1.9,
   2,
   2.1,
   2.2,
   2.3,
   2.4,
   2.5,
   2.6,
   2.7,
   2.8,
   2.9,
   3,
   3.1,
   3.2,
   3.3,
   3.4,
   3.5,
   3.6,
   3.7,
   3.8,
   3.9,
   4,
   4.1};
   Double_t Graph3_fy1002[30] = {
   0.02213663,
   0.0426928,
   0.04437452,
   0.01409535,
   0.006677005,
   0.008126887,
   0.006637083,
   0.0108612,
   0.01159132,
   0.01079083,
   0.007779609,
   0.003884651,
   0.00218758,
   0.002040596,
   0.002241172,
   0.002965499,
   0.003033875,
   0.002555558,
   0.002135973,
   0.00219642,
   0.002015269,
   0.001399587,
   0.0008475033,
   0.0006557871,
   0.0006511772,
   0.0006913231,
   0.000709137,
   0.0006915121,
   0.0006900538,
   0.000669045};
   Double_t Graph3_fex1002[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1002[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(30,Graph3_fx1002,Graph3_fy1002,Graph3_fex1002,Graph3_fey1002);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.91,4.39);
   Graph_Graph1002->SetMinimum(0.0005860594);
   Graph_Graph1002->SetMaximum(0.04874685);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);
   Graph_Graph1002->SetLineStyle(0);
   Graph_Graph1002->SetMarkerStyle(20);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("lp");
   
   Double_t WZ_gtheory_fx1003[11] = {
   1,
   1.2,
   1.4,
   1.6,
   1.8,
   2,
   2.5,
   3,
   3.5,
   4,
   4.5};
   Double_t WZ_gtheory_fy1003[11] = {
   0.4541593,
   0.2503529,
   0.1389695,
   0.07926706,
   0.04645925,
   0.02786481,
   0.008370229,
   0.002682795,
   0.0008880529,
   0.0002883071,
   8.880529e-05};
   Double_t WZ_gtheory_fex1003[11] = {
   0,
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
   Double_t WZ_gtheory_fey1003[11] = {
   0,
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
   gre = new TGraphErrors(11,WZ_gtheory_fx1003,WZ_gtheory_fy1003,WZ_gtheory_fex1003,WZ_gtheory_fey1003);
   gre->SetName("WZ_gtheory");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.65,4.85);
   Graph_Graph1003->SetMinimum(7.992476e-05);
   Graph_Graph1003->SetMaximum(0.4995664);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("l");
   
   Double_t WZ_grshade_fx3[22] = {
   1,
   1.2,
   1.4,
   1.6,
   1.8,
   2,
   2.5,
   3,
   3.5,
   4,
   4.5,
   4.5,
   4,
   3.5,
   3,
   2.5,
   2,
   1.8,
   1.6,
   1.4,
   1.2,
   1};
   Double_t WZ_grshade_fy3[22] = {
   0.5023773,
   0.2797617,
   0.15664,
   0.09033397,
   0.05350611,
   0.03241341,
   0.009972691,
   0.003314888,
   0.001136143,
   0.0003883699,
   0.0001311562,
   5.392078e-05,
   0.0002028547,
   0.0006704415,
   0.002117503,
   0.006907606,
   0.0236597,
   0.03990971,
   0.06892295,
   0.1223543,
   0.2225545,
   0.4082535};
   graph = new TGraph(22,WZ_grshade_fx3,WZ_grshade_fy3);
   graph->SetName("WZ_grshade");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3013);
   graph->SetLineColor(0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.65,4.85);
   Graph_Graph3->SetMinimum(4.85287e-05);
   Graph_Graph3->SetMaximum(0.5526097);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("f");
   
   TPaveText *pt = new TPaveText(0.52,0.2,0.8,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   TText *AText = pt->AddText("Narrow width approximation");
   pt->Draw();
      tex = new TLatex(0.96,0.936,"35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.892,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.82,"");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe_copy2 = new TH1F("hframe_copy2","",1000,1.2,4.1);
   hframe_copy2->SetMinimum(0.0001);
   hframe_copy2->SetMaximum(109);
   hframe_copy2->SetDirectory(0);
   hframe_copy2->SetStats(0);
   hframe_copy2->SetLineStyle(0);
   hframe_copy2->SetMarkerStyle(20);
   hframe_copy2->GetXaxis()->SetTitle("M_{W'} (TeV)");
   hframe_copy2->GetXaxis()->SetNdivisions(508);
   hframe_copy2->GetXaxis()->SetLabelFont(42);
   hframe_copy2->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy2->GetXaxis()->SetTitleSize(0.05);
   hframe_copy2->GetXaxis()->SetTitleOffset(1.05);
   hframe_copy2->GetXaxis()->SetTitleFont(42);
   hframe_copy2->GetYaxis()->SetTitle("#sigma #times #bf{#it{#Beta}}(W' #rightarrow WZ) (pb)");
   hframe_copy2->GetYaxis()->SetLabelFont(42);
   hframe_copy2->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy2->GetYaxis()->SetTitleSize(0.05);
   hframe_copy2->GetYaxis()->SetTitleOffset(1.15);
   hframe_copy2->GetYaxis()->SetTitleFont(42);
   hframe_copy2->GetZaxis()->SetLabelFont(42);
   hframe_copy2->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy2->GetZaxis()->SetLabelSize(0.05);
   hframe_copy2->GetZaxis()->SetTitleSize(0.06);
   hframe_copy2->GetZaxis()->SetTitleFont(42);
   hframe_copy2->Draw("sameaxis");
   
   TH1F *hframe_copy3 = new TH1F("hframe_copy3","",1000,1.2,4.1);
   hframe_copy3->SetMinimum(0.0001);
   hframe_copy3->SetMaximum(109);
   hframe_copy3->SetDirectory(0);
   hframe_copy3->SetStats(0);
   hframe_copy3->SetLineStyle(0);
   hframe_copy3->SetMarkerStyle(20);
   hframe_copy3->GetXaxis()->SetTitle("M_{W'} (TeV)");
   hframe_copy3->GetXaxis()->SetNdivisions(508);
   hframe_copy3->GetXaxis()->SetLabelFont(42);
   hframe_copy3->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy3->GetXaxis()->SetTitleSize(0.05);
   hframe_copy3->GetXaxis()->SetTitleOffset(1.05);
   hframe_copy3->GetXaxis()->SetTitleFont(42);
   hframe_copy3->GetYaxis()->SetTitle("#sigma #times #bf{#it{#Beta}}(W' #rightarrow WZ) (pb)");
   hframe_copy3->GetYaxis()->SetLabelFont(42);
   hframe_copy3->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy3->GetYaxis()->SetTitleSize(0.05);
   hframe_copy3->GetYaxis()->SetTitleOffset(1.15);
   hframe_copy3->GetYaxis()->SetTitleFont(42);
   hframe_copy3->GetZaxis()->SetLabelFont(42);
   hframe_copy3->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy3->GetZaxis()->SetLabelSize(0.05);
   hframe_copy3->GetZaxis()->SetTitleSize(0.06);
   hframe_copy3->GetZaxis()->SetTitleFont(42);
   hframe_copy3->Draw("sameaxig");
   
   TLegend *leg = new TLegend(0.52,0.6002591,0.806734,0.9011917,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph3","Observed","Lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","Expected #pm 1 std. deviation","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","Expected #pm 2 std. deviation","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("WZ_gtheory","#sigma_{TH}#times#bf{#it{#Beta}}(W'#rightarrowWZ) HVT_{B}","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.52,0.6002591,0.8046734,0.9011917,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph3"," ","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2"," ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2"," ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(3);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("WZ_grshade"," ","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
