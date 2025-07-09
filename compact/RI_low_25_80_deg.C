#ifdef __CLING__
#pragma cling optimize(0)
#endif
void RI_low_25_80_deg()
{
//=========Macro generated from canvas: c1/Graph Draw Options
//=========  (Tue Mar  5 03:42:16 2024) by ROOT version 6.26/08
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

   //TH1F *Cut_LHS_1 = new TH1F("Cut_LHS_1","Angular distribution for photons hitting the downstream surface of the crystal (z = -30 mm) wrt the negative z normal",360,-180,180);
   TH1F *Cut_LHS_1 = new TH1F("Cut_LHS_1","",90,0,90);
   int start_bin_1 = 1;
   std::vector<float> lhs_1 = {0.002707459,0.005539052,0.009056792,0.01363747,0.01517706,0.01981909,0.02751821,0.02701966,0.03174356,0.03309698,0.03679385,0.03863886,
    0.04139191,0.04578291,0.04770703,0.0523886,0.05072187,0.05422645,0.05833407,0.06028732,0.05832279,0.06220934,0.06296337,0.07013623,0.06898235,0.07607083,0.06720424,
    0.07070753,0.07987386,0.0796871,0.07607314,0.0823888,0.08434675,0.07902453,0.0867398,0.0845414,0.0784109,0.09016763,0.08909643,0.09205792,0.0953935,0.09228885,
    0.09752858,0.098057,0.1364563,0.5359306,0.5914174,0.5953444,0.6380742,0.4616377,0.4243406,0.3976391,0.3879383,0.3782094,0.3707392,0.3744322,0.3670215,0.3447457,
    0.3283849,0.3300674,0.3264751,0.3251355,0.3318509,0.3726844,0.4924465,0.4844953,0.337702,0.2456551,0.103752,0.06618886,0.06426718,0.05995597,0.05707401,0.05119935,
    0.048285,0.04740435,0.04442736,0.04302692,0.03403547,0.03427215,0.03045818,0.02668624,0.02336298,0.02120308,0.01888825,0.01471442,0.01162607,0.009511068,0.004007152,
    0.001381587};

   for (int i=0; i<lhs_1.size(); i++)
   {
    Cut_LHS_1->SetBinContent(start_bin_1+i,lhs_1.at(i));
   }

   //Cut_LHS_1->SetBinContent(361,25);
   Cut_LHS_1->SetEntries(271590);
   Cut_LHS_1->SetDirectory(0);
   Cut_LHS_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#ff0000");
   Cut_LHS_1->SetLineColor(ci);
   Cut_LHS_1->GetXaxis()->SetLabelFont(42);
   //Cut_LHS_1->GetXaxis()->SetTitle("Photon incident Angle wrt -z (in deg)");
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
   //Cut_LHS_1->Draw("");
   Cut_LHS_1->Draw("hist");
   
   //TLegend *leg = new TLegend(0.7,0.8,0.9,0.9,NULL,"brNDC");
   //TLegend *leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   //TLegend *leg = new TLegend(0.63,0.625,0.83,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   TLegend *leg = new TLegend(0.63,0.69,0.83,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   //leg->SetBorderSize(1);
   leg->SetBorderSize(0);
   //leg->SetTextSize(0.02);
   //leg->SetTextSize(0.04);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

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

   entry=leg->AddEntry("Cut 1 LHS","Mean = 8693.0","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 1 LHS","Median = 4064","");
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
   /*
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0.51,0.51,0.99,0.99);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-225,-0.02287218,225,0.2058496);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   */
   
   //TH1F *Cut_RHS_2 = new TH1F("Cut_RHS_2","Angular distribution for photons hitting the upstream surface of the crystal (z = 30 mm) wrt the positive z normal",360,-180,180);
   TH1F *Cut_RHS_2 = new TH1F("Cut_RHS_2","",90,0,90);
   int start_bin_2 = 1;
   std::vector<float> rhs_2 = {0.003679734,0.009252043,0.01480353,0.01862852,0.02372861,0.03066237,0.03637249,0.03699868,0.04161546,0.04754647,0.05122866,0.05908576,
    0.05786989,0.06490351,0.06833248,0.07528447,0.07613137,0.07352726,0.08377796,0.08035242,0.08549514,0.08503076,0.09009174,0.08814996,0.093765,0.09133253,0.09533782,
    0.09641416,0.100483,0.09963355,0.1047731,0.1103914,0.107886,0.1022317,0.11018,0.1034026,0.1101699,0.1060724,0.1070729,0.1064129,0.1093658,0.1082959,0.1080725,
    0.1115253,0.1121888,0.1710053,0.1742642,0.1694689,0.1576172,0.1422231,0.1438937,0.1376997,0.1385384,0.1457531,0.1523197,0.1546897,0.1470352,0.1289261,0.1171836,
    0.1113283,0.1002897,0.09703319,0.09082059,0.09192287,0.1011686,0.09867784,0.07760937,0.06591303,0.05735793,0.04910937,0.04297782,0.04207488,0.03850202,0.03286155,
    0.03648834,0.0317875,0.0292799,0.02373142,0.02087117,0.01860501,0.01656684,0.01245609,0.0109471,0.01002523,0.008973975,0.004613782,0.004450142,0.001568319,0.001642864,
    0.000216177};
   //Cut_RHS_2->SetBinContent(361,12);
   for (int i=0; i<rhs_2.size(); i++)
   {
    Cut_RHS_2->SetBinContent(start_bin_2+i,rhs_2.at(i));
   }

   Cut_RHS_2->SetEntries(145422);
   Cut_RHS_2->SetDirectory(0);
   Cut_RHS_2->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#0000ff");
   Cut_RHS_2->SetLineColor(ci);
   Cut_RHS_2->GetXaxis()->SetLabelFont(42);
   Cut_RHS_2->GetXaxis()->SetTitle("Photon incident angle wrt z axis (in deg)");
   Cut_RHS_2->GetYaxis()->SetTitle("Number of photons (normalized)");
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
   
   /*
   leg = new TLegend(0.7,0.8,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.02);
   */
   /*
   leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
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

   entry=leg->AddEntry("Cut 1 RHS","Mean = 4487.4","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 1 RHS","Median = 2196","");
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
  
   string image_path_cut_1_rhs = "0708_80_cut_1_lhs_rhs_overlap.png";
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
   
   //TH1F *Cut_LHS_3 = new TH1F("Cut_LHS_3","Angular distribution for photons passing into the cookie, at the downstream crystal-cookie interface (z = -30 mm) wrt the negative z normal",360,-180,180);
   TH1F *Cut_LHS_3 = new TH1F("Cut_LHS_3","",90,0,90);
   int start_bin_3 = 1;
   std::vector<float> lhs_3 = {0.0007792417,0.004268447,0.01018491,0.0155584,0.01914832,0.02557432,0.03163349,0.03105542,0.03816437,0.04106428,0.04246608,0.04816413,
    0.0497538,0.05472037,0.05814469,0.06565225,0.06160556,0.06869351,0.07445452,0.07301592,0.07466138,0.07670186,0.07835799,0.08161961,0.08746571,0.08820444,0.08530526,
    0.08884565,0.09766604,0.09363141,0.09136505,0.09356292,0.09789318,0.09708294,0.1024889,0.1018582,0.0972743,0.1060412,0.1020675,0.1021443,0.1066143,0.1008478,0.1021912,
    0.1086721,0.1382632,0.4464235,0.4540287,0.4262598,0.371139,0.2351577,0.2027659,0.1531899,0.1108152,0.07094452,0.02968565,0.0007414139};
   //Cut_LHS_3->SetBinContent(361,7704);
   for (int i=0; i<lhs_3.size(); i++)
   {
    Cut_LHS_3->SetBinContent(start_bin_3+i,lhs_3.at(i));
   }

   Cut_LHS_3->SetEntries(135955);
   Cut_LHS_3->SetDirectory(0);
   Cut_LHS_3->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#ff0000");
   Cut_LHS_3->SetLineColor(ci);
   Cut_LHS_3->GetXaxis()->SetLabelFont(42);
   //Cut_LHS_3->GetXaxis()->SetTitle("Photon incident angle wrt -z axis (in deg)");
   Cut_LHS_3->GetXaxis()->SetTitle("Photon incident angle wrt z axis (in deg)");
   Cut_LHS_3->GetYaxis()->SetTitle("Number of photons (normalized)");   
   Cut_LHS_3->GetXaxis()->SetTitleOffset(1);
   Cut_LHS_3->GetXaxis()->SetTitleFont(42);
   Cut_LHS_3->GetYaxis()->SetLabelFont(42);
   Cut_LHS_3->GetYaxis()->SetTitleFont(42);
   Cut_LHS_3->GetZaxis()->SetLabelFont(42);
   Cut_LHS_3->GetZaxis()->SetTitleOffset(1);
   Cut_LHS_3->GetZaxis()->SetTitleFont(42);
   Cut_LHS_3->SetLineWidth(4);   
   //Cut_LHS_3->Draw("");
   Cut_LHS_3->Draw("hist");
   
   /*
   leg = new TLegend(0.7,0.8,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.02);
   */
   //leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   //leg = new TLegend(0.625,0.625,0.825,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   leg = new TLegend(0.63,0.69,0.83,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   leg->SetBorderSize(0);
   //leg->SetTextSize(0.04);
   leg->SetTextSize(0.03);
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

   entry=leg->AddEntry("Cut 2 LHS","Mean = 4171.83","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 2 LHS","Median = 1889","");
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
   c1->cd();
  
// ------------>Primitives in pad: c1_4
   TPad *c1_4 = new TPad("c1_4", "c1_4",0.51,0.01,0.99,0.49);
   c1_4->Draw();
   c1_4->cd();
   c1_4->Range(-225,-0.01737524,225,0.1563771);
   c1_4->SetFillColor(0);
   c1_4->SetBorderMode(0);
   c1_4->SetBorderSize(2);
   c1_4->SetFrameBorderMode(0);
   c1_4->SetFrameBorderMode(0);
   */
   
   //TH1F *Cut_RHS_4 = new TH1F("Cut_RHS_4","Angular distribution for photons passing into the cookie, at the upstream crystal-cookie interface (z = 30 mm) wrt the positive z normal",360,-180,180);
   TH1F *Cut_RHS_4 = new TH1F("Cut_RHS_4","",90,0,90);
   int start_bin_4 = 1;
   std::vector<float> rhs_4 = {0.001737365,0.00557082,0.01010504,0.01516988,0.02085817,0.02528161,0.03343585,0.03278538,0.03704528,0.04312686,0.04646763,0.05321356,
    0.05262008,0.06030891,0.06382898,0.06947792,0.06556555,0.07041768,0.08015575,0.07373598,0.07931971,0.07619031,0.08150056,0.08209903,0.0836808,0.08341043,0.08476636,
    0.08612861,0.09161773,0.09035118,0.09023281,0.09785188,0.09607387,0.0909213,0.09641442,0.09155325,0.09736659,0.09523,0.09513833,0.09145673,0.09116039,0.09181653,
    0.08831682,0.08786165,0.09103017,0.1323827,0.1290459,0.1222174,0.09778698,0.0740198,0.06553265,0.05057996,0.03534819,0.02296806,0.009897622,0.0003485779};
   //Cut_RHS_4->SetBinContent(361,3806);
   for (int i=0; i<rhs_4.size(); i++)
   {
    Cut_RHS_4->SetBinContent(start_bin_4+i,rhs_4.at(i));
   }

   Cut_RHS_4->SetEntries(89822);
   Cut_RHS_4->SetDirectory(0);
   Cut_RHS_4->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#0000ff");
   Cut_RHS_4->SetLineColor(ci);
   Cut_RHS_4->GetXaxis()->SetLabelFont(42);
   Cut_RHS_4->GetXaxis()->SetTitle("Photon incident angle wrt z axis (in deg)");
   Cut_RHS_4->GetYaxis()->SetTitle("Number of photons (normalized)");   
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
   
   /*
   leg = new TLegend(0.7,0.8,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.02);
    */  
   /*
   leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
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

   entry=leg->AddEntry("Cut 2 RHS","Mean = 2634.07","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 2 RHS","Median = 1278","");
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
   c3->Modified();

   ///*
   string image_path_cut_2_rhs = "0708_80_cut_2_lhs_rhs_overlap.png";
   c3->Print(image_path_cut_2_rhs.c_str());
   c3->Close();   
   gApplication->Terminate();
   //*/
}
