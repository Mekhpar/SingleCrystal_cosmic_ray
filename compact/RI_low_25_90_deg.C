#ifdef __CLING__
#pragma cling optimize(0)
#endif
void RI_low_25_90_deg()
{
//=========Macro generated from canvas: c1/Graph Draw Options
//=========  (Tue Mar  5 02:42:20 2024) by ROOT version 6.26/08
   //TCanvas *c1 = new TCanvas("c1", "Graph Draw Options",200,31,600,400);
   TCanvas *c1 = new TCanvas("c1", "Graph Draw Options",0,0,1200,1200);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   //TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.51,0.49,0.99);
   TPad *c1_1 = new TPad("c1_1", "c1_1", 0.05, 0.05, 0.99, 0.99);
   c1_1->SetBottomMargin(0.08);
   c1_1->SetLeftMargin(0.1);
   c1_1->SetRightMargin(0.05);
   c1_1->SetTopMargin(0.1);
   gPad->SetBottomMargin(0.15);
   c1_1->Draw();
   c1->cd();  
   c1_1->cd();
   
   TH1F *Cut_LHS_1 = new TH1F("Cut_LHS_1","",90,0,90);
   int start_bin_1 = 1;
   std::vector<float> lhs_1 = {0.001918641,0.003601389,0.008194476,0.01056397,0.0133511,0.01453118,0.01736483,0.02049541,0.02543986,0.02465815,0.03033238,0.03173957,
   0.03386755,0.0349968,0.04178007,0.04147818,0.04333139,0.04088815,0.04747306,0.04922953,0.05270347,0.05202551,0.05342464,0.05497116,0.05725212,0.05897328,0.06129684,
   0.06307297,0.06392575,0.06700049,0.0644642,0.06449477,0.0687554,0.06467982,0.07227511,0.0703581,0.06926642,0.07268301,0.07516517,0.07729111,0.07346768,0.07564367,
   0.07921083,0.0797362,0.08599598,0.08561593,0.07998532,0.08698346,0.08819279,0.08883123,0.09025978,0.09831118,0.1080332,0.1074823,0.7060692,2.49979,1.449299,1.203839,
   0.8249567,0.1076641,0.08897736,0.08869353,0.07997701,0.07252666,0.0679189,0.06485272,0.06554586,0.06054933,0.0584964,0.05165541,0.05431472,0.05072995,0.04659689,
   0.04193214,0.04322856,0.03894288,0.03344719,0.03349152,0.03304459,0.02855944,0.02424521,0.02501631,0.02015862,0.01653716,0.01426881,0.01228482,0.009861072,0.007692145,
   0.004479294,0.001014155};

   for (int i=0; i<lhs_1.size(); i++)
   {
    Cut_LHS_1->SetBinContent(start_bin_1+i,lhs_1.at(i));
   }

   //Cut_LHS_1->SetBinContent(361,24);
   Cut_LHS_1->SetEntries(316095);
   Cut_LHS_1->SetDirectory(0);
   Cut_LHS_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#ff0000");
   Cut_LHS_1->SetLineColor(ci);
   Cut_LHS_1->GetXaxis()->SetLabelFont(42);
   Cut_LHS_1->GetXaxis()->SetTitle("Photon incident angle wrt z axis (in deg)");
   Cut_LHS_1->GetYaxis()->SetTitle("Number of photons (normalized)");
   Cut_LHS_1->GetXaxis()->SetTitleOffset(1);
   Cut_LHS_1->GetXaxis()->SetTitleFont(42);
   Cut_LHS_1->GetYaxis()->SetLabelFont(42);
   Cut_LHS_1->GetYaxis()->SetTitleFont(42);
   Cut_LHS_1->GetZaxis()->SetLabelFont(42);
   Cut_LHS_1->GetZaxis()->SetTitleOffset(1);
   Cut_LHS_1->GetZaxis()->SetTitleFont(42);
   Cut_LHS_1->SetLineWidth(4);
   Cut_LHS_1->Draw("hist");
   
   //TLegend *leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   //TLegend *leg = new TLegend(0.625,0.7,0.825,0.8,NULL,"brNDC");
   //TLegend *leg = new TLegend(0.63,0.7,0.83,0.8,NULL,"brNDC");
   TLegend *leg = new TLegend(0.63,0.625,0.83,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   leg->SetBorderSize(0);
   //leg->SetTextSize(0.04);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   //TLegendEntry *entry=leg->AddEntry("Cut 1 LHS","Mean = 12283.799805","");
   TLegendEntry *entry=leg->AddEntry("Cut 1 LHS","Upstream","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   entry->SetTextFont(2);

   entry=leg->AddEntry("Cut 1 LHS","Mean = 12283.80","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 1 LHS","Median = 3933","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   /*
   TPaveText *pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   //TText *pt_LaTex = pt->AddText("Angular distribution for photons hitting the downstream surface of the crystal (z = -30 mm) wrt the negative z normal");
   pt->Draw();
   */
   c1_1->Modified();
   //c1->cd();
  
   /*
   string image_path_cut_1_lhs = "0708_90_cut_1_lhs_deg_comp.png";
   c1->Print(image_path_cut_1_lhs.c_str());
   c1->Close();

   TCanvas *c2 = new TCanvas("c2", "Graph Draw Options",0,0,1200,1200);
   c2->Range(0,0,1,1);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   */

// ------------>Primitives in pad: c1_2

   /*
   TPad *c1_2 = new TPad("c1_2", "c1_2", 0.05, 0.05, 0.99, 0.99);
   c1_2->SetBottomMargin(0.08);
   c1_2->SetLeftMargin(0.1);
   c1_2->SetRightMargin(0.05);
   c1_2->SetTopMargin(0.1);
   gPad->SetBottomMargin(0.15);
   c1_2->Draw();
   //c2->cd();  
   c1->cd();  
   c1_2->cd();
   */
   
   TH1F *Cut_RHS_2 = new TH1F("Cut_RHS_2","",90,0,90);
   int start_bin_2 = 1;
   std::vector<float> rhs_2 = {0.002277818,0.006938364,0.01238518,0.01847103,0.01987652,0.02510986,0.02938364,0.03165237,0.04029676,0.04195105,0.04732043,
   0.04726465,0.05181004,0.05316396,0.06175787,0.06293272,0.06292854,0.0677544,0.07037759,0.07458713,0.07739966,0.07852858,0.0810424,0.08532666,0.08735096,
   0.08701336,0.08486471,0.09000035,0.09046251,0.09119786,0.09047257,0.09346724,0.09271613,0.09095519,0.09819479,0.0970232,0.095615,0.09485884,0.09283051,
   0.09996665,0.09709617,0.09194207,0.09628533,0.08740323,0.09251165,0.09226906,0.09319219,0.08624453,0.09240938,0.08625483,0.09261655,0.08918276,0.0883765,
   0.08801364,0.1602763,0.5191025,0.3001717,0.22237,0.1316329,0.07669483,0.07692139,0.07020942,0.06335004,0.0632272,0.06515457,0.0549778,0.05439832,0.04902666,
   0.04821309,0.04414899,0.04084506,0.03900862,0.03617908,0.03324009,0.03004815,0.02618838,0.02326733,0.01857295,0.01881076,0.01864601,0.01408222,0.01107487,
   0.01199504,0.009298509,0.009382195,0.005635006,0.004078874,0.003220524,0.001717662,0.0005778763};
   //Cut_RHS_2->SetBinContent(361,5);

   for (int i=0; i<rhs_2.size(); i++)
   {
    Cut_RHS_2->SetBinContent(start_bin_2+i,rhs_2.at(i));
   }

   Cut_RHS_2->SetEntries(171502);
   Cut_RHS_2->SetDirectory(0);
   Cut_RHS_2->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#0000ff");
   Cut_RHS_2->SetLineColor(ci);
   Cut_RHS_2->GetXaxis()->SetTitle("Photon incident angle wrt z axis (in deg)");
   Cut_RHS_2->GetYaxis()->SetTitle("Number of photons (normalized)");
   Cut_RHS_2->GetXaxis()->SetLabelFont(42);
   Cut_RHS_2->GetXaxis()->SetTitleOffset(1);
   Cut_RHS_2->GetXaxis()->SetTitleFont(42);
   Cut_RHS_2->GetYaxis()->SetLabelFont(42);
   Cut_RHS_2->GetYaxis()->SetTitleFont(42);
   Cut_RHS_2->GetZaxis()->SetLabelFont(42);
   Cut_RHS_2->GetZaxis()->SetTitleOffset(1);
   Cut_RHS_2->GetZaxis()->SetTitleFont(42);
   Cut_RHS_2->SetLineWidth(4);   
   //Cut_RHS_2->Draw("");
   Cut_RHS_2->Draw("hist same");
   
   //leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   //leg = new TLegend(0.63,0.7,0.83,0.8,NULL,"brNDC");
   /*
   leg = new TLegend(0.63,0.6,0.83,0.7,NULL,"brNDC");
   leg->SetBorderSize(0);
   //leg->SetTextSize(0.04);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   */

   entry=leg->AddEntry("Cut 1 RHS","Downstream","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   entry->SetTextFont(2);

   //entry=leg->AddEntry("Cut 1 RHS","Mean = 6500.080078","");
   entry=leg->AddEntry("Cut 1 RHS","Mean = 6500.08","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Cut 1 RHS","Median = 2296","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   /*
   pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   //pt_LaTex = pt->AddText("Angular distribution for photons hitting the upstream surface of the crystal (z = 30 mm) wrt the positive z normal");
   pt->Draw();
   */
   //c1_2->Modified();
   c1_1->Modified();
  
   //string image_path_cut_1_rhs = "0708_90_cut_1_rhs_deg_comp.png";
   string image_path_cut_1_rhs = "0708_90_cut_1_lhs_rhs_overlap.png";
   /*
   c2->Print(image_path_cut_1_rhs.c_str());
   c2->Close();
   */
   c1->Print(image_path_cut_1_rhs.c_str());
   c1->Close();


   TCanvas *c3 = new TCanvas("c3", "Graph Draw Options",0,0,1200,1200);
   c3->Range(0,0,1,1);
   c3->SetFillColor(0);
   c3->SetBorderMode(0);
   c3->SetBorderSize(2);
   c3->SetFrameBorderMode(0);

// ------------>Primitives in pad: c1_3
   TPad *c1_3 = new TPad("c1_3", "c1_3", 0.05, 0.05, 0.99, 0.99);
   c1_3->SetBottomMargin(0.08);
   //c1_3->SetLeftMargin(0.1);
   c1_3->SetLeftMargin(0.11);
   c1_3->SetRightMargin(0.05);
   c1_3->SetTopMargin(0.1);
   gPad->SetBottomMargin(0.15);
   c1_3->Draw();
   c3->cd();  
   c1_3->cd();
   
   TH1F *Cut_LHS_3 = new TH1F("Cut_LHS_3","",90,0,90);
   int start_bin_3 = 1;
   std::vector<float> lhs_3 = {0.001179722,0.003828834,0.009636763,0.01575291,0.01781303,0.02158703,0.02473465,0.02574977,0.03385337,0.03747095,0.04016944,
   0.04403633,0.04725304,0.04630706,0.05745102,0.05676997,0.06367015,0.05865516,0.06725436,0.07129908,0.0693218,0.07236059,0.0756145,0.07244932,0.07742406,
   0.08335525,0.08438363,0.08510198,0.08629456,0.08961435,0.08716412,0.08887895,0.0932593,0.08994966,0.09840596,0.08982792,0.09507356,0.09649779,0.09492308,
   0.09339412,0.0940892,0.09232536,0.09625342,0.09572408,0.09537594,0.0941531,0.08984571,0.09231009,0.08603947,0.07399494,0.06385752,0.05651266,0.04118757,
   0.02800168,0.1129296,0.001861487};
   //Cut_LHS_3->SetBinContent(361,7996);

   for (int i=0; i<lhs_3.size(); i++)
   {
    Cut_LHS_3->SetBinContent(start_bin_3+i,lhs_3.at(i));
   }

   Cut_LHS_3->SetEntries(139830);
   Cut_LHS_3->SetDirectory(0);
   Cut_LHS_3->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#ff0000");
   Cut_LHS_3->SetLineColor(ci);
   Cut_LHS_3->GetXaxis()->SetTitle("Photon incident angle wrt z axis (in deg)");
   Cut_LHS_3->GetYaxis()->SetTitle("Number of photons (normalized)");
   Cut_LHS_3->GetXaxis()->SetLabelFont(42);
   Cut_LHS_3->GetXaxis()->SetTitleOffset(1);
   Cut_LHS_3->GetXaxis()->SetTitleFont(42);
   Cut_LHS_3->GetYaxis()->SetLabelFont(42);
   Cut_LHS_3->GetYaxis()->SetTitleFont(42);
   Cut_LHS_3->GetZaxis()->SetLabelFont(42);
   Cut_LHS_3->GetZaxis()->SetTitleOffset(1);
   Cut_LHS_3->GetZaxis()->SetTitleFont(42);
   Cut_LHS_3->SetLineWidth(4);   
   Cut_LHS_3->Draw("hist");
   
   //leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   //leg = new TLegend(0.625,0.7,0.825,0.8,NULL,"brNDC");
   leg = new TLegend(0.625,0.625,0.825,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   entry=leg->AddEntry("Cut 2 LHS","Upstream","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   entry->SetTextFont(2);

   //entry=leg->AddEntry("Cut 2 LHS","Mean = 5233.200195","");
   entry=leg->AddEntry("Cut 2 LHS","Mean = 5233.20","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Cut 2 LHS","Median = 1366","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   /*
   pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   //pt_LaTex = pt->AddText("Angular distribution for photons passing into the cookie, at the downstream crystal-cookie interface (z = -30 mm) wrt the negative z normal");
   pt->Draw();
   */
   c1_3->Modified();

   /*
   string image_path_cut_2_lhs = "0708_90_cut_2_lhs_deg_comp.png";
   c3->Print(image_path_cut_2_lhs.c_str());
   c3->Close();   
  
   TCanvas *c4 = new TCanvas("c4", "Graph Draw Options",0,0,1200,1200);
   c4->Range(0,0,1,1);
   c4->SetFillColor(0);
   c4->SetBorderMode(0);
   c4->SetBorderSize(2);
   c4->SetFrameBorderMode(0);
   */

// ------------>Primitives in pad: c1_4
   /*
   TPad *c1_4 = new TPad("c1_4", "c1_4", 0.05, 0.05, 0.99, 0.99);
   c1_4->SetBottomMargin(0.08);
   //c1_4->SetLeftMargin(0.1);
   c1_4->SetLeftMargin(0.11);
   c1_4->SetRightMargin(0.05);
   c1_4->SetTopMargin(0.1);
   gPad->SetBottomMargin(0.15);
   c1_4->Draw();
   //c4->cd();  
   c3->cd();  
   c1_4->cd();
   */
   
   TH1F *Cut_RHS_4 = new TH1F("Cut_RHS_4","",90,0,90);
   int start_bin_4 = 1;
   std::vector<float> rhs_4 = {0.0007281997,0.004335998,0.009145435,0.01378665,0.01722933,0.02209519,0.02596873,0.03033973,0.03680079,0.03817413,0.04178259,
   0.04572847,0.04823135,0.05135862,0.05794083,0.060624,0.0607054,0.06390823,0.06683998,0.07195416,0.07253966,0.07438516,0.07274924,0.07692273,0.08048572,0.07718985,
   0.0779126,0.0822921,0.0827338,0.08207668,0.08259828,0.08406513,0.08261194,0.0835712,0.08613752,0.08632514,0.0844472,0.08633819,0.08788798,0.08856609,0.08737317,
   0.07748608,0.07702453,0.07574952,0.07603751,0.07633507,0.07542741,0.06259916,0.06586017,0.05458908,0.04642335,0.03490095,0.02325415,0.017152,0.01821993,
   0.0003341888};
   //Cut_RHS_4->SetBinContent(361,4402);
   for (int i=0; i<rhs_4.size(); i++)
   {
    Cut_RHS_4->SetBinContent(start_bin_4+i,rhs_4.at(i));
   }

   Cut_RHS_4->SetEntries(102135);
   Cut_RHS_4->SetDirectory(0);
   Cut_RHS_4->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#0000ff");
   Cut_RHS_4->SetLineColor(ci);
   Cut_RHS_4->GetXaxis()->SetTitle("Photon incident angle wrt z axis (in deg)");
   Cut_RHS_4->GetYaxis()->SetTitle("Number of photons (normalized)");
   Cut_RHS_4->GetXaxis()->SetLabelFont(42);
   Cut_RHS_4->GetXaxis()->SetTitleOffset(1);
   Cut_RHS_4->GetXaxis()->SetTitleFont(42);
   Cut_RHS_4->GetYaxis()->SetLabelFont(42);
   Cut_RHS_4->GetYaxis()->SetTitleFont(42);
   Cut_RHS_4->GetZaxis()->SetLabelFont(42);
   Cut_RHS_4->GetZaxis()->SetTitleOffset(1);
   Cut_RHS_4->GetZaxis()->SetTitleFont(42);
   Cut_RHS_4->SetLineWidth(4);   
   //Cut_RHS_4->Draw("");
   Cut_RHS_4->Draw("hist same");
   
   //leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   //leg = new TLegend(0.625,0.7,0.825,0.8,NULL,"brNDC");
   /*
   leg = new TLegend(0.625,0.6,0.825,0.7,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   */
   entry=leg->AddEntry("Cut 2 RHS","Downstream","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   entry->SetTextFont(2);

   //entry=leg->AddEntry("Cut 2 RHS","Mean = 3725.399902","");
   entry=leg->AddEntry("Cut 2 RHS","Mean = 3725.40","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Cut 2 RHS","Median = 1246","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   /*
   pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   //pt_LaTex = pt->AddText("Angular distribution for photons passing into the cookie, at the upstream crystal-cookie interface (z = 30 mm) wrt the positive z normal");
   pt->Draw();
   */
   //c1_4->Modified();
   c1_3->Modified();

   //string image_path_cut_2_rhs = "0708_90_cut_2_rhs_deg_comp.png";
   string image_path_cut_2_rhs = "0708_90_cut_2_lhs_rhs_overlap.png";
   /*
   c4->Print(image_path_cut_2_rhs.c_str());
   c4->Close();   
   */

   c3->Print(image_path_cut_2_rhs.c_str());
   c3->Close();   
   
   gApplication->Terminate();
   //*/

}
