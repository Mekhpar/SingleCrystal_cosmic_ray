#ifdef __CLING__
#pragma cling optimize(0)
#endif
void RI_high_10_90_deg()
{
//=========Macro generated from canvas: c1/Graph Draw Options
//=========  (Tue Mar 12 00:36:28 2024) by ROOT version 6.26/08
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
   std::vector<float> lhs_1 = {0.0008827084,0.003007119,0.002800103,0.00378565,0.005031553,0.00784398,0.006334745,0.007855725,0.009868713,0.01076042,0.01136435,
    0.01320626,0.01682103,0.01373026,0.01593828,0.01647409,0.0173619,0.01923959,0.01839613,0.01902393,0.02178155,0.02277567,0.0208967,0.020361,0.02300219,0.02442845,
    0.0242399,0.02005767,0.02502069,0.02445707,0.02564294,0.02329723,0.0244714,0.02825896,0.02708426,0.02694412,0.02639043,0.02824424,0.02750963,0.02769878,0.02646698,
    0.0265562,0.0289789,0.03124096,0.02587854,0.02647709,0.027768,0.02810089,0.0276612,0.02448234,0.02395385,0.02699456,0.02347603,0.02610611,0.2830524,1.076342,0.6257567,
    0.5073459,0.3415833,0.02232545,0.02112344,0.02199907,0.02446765,0.02236057,0.02116239,0.02053482,0.01950184,0.01835481,0.01517283,0.01696616,0.01672442,0.01491836,
    0.01424388,0.01195311,0.01436313,0.01266075,0.009647098,0.01090225,0.008932326,0.009990077,0.00791641,0.005264993,0.005036888,0.004668133,0.004771055,0.003015943,
    0.001795547,0.001608777,0.0005907858,0.000208355};

   for (int i=0; i<lhs_1.size(); i++)
   {
    Cut_LHS_1->SetBinContent(start_bin_1+i,lhs_1.at(i));
   }

   Cut_LHS_1->SetEntries(44543);
   Cut_LHS_1->SetDirectory(0);
   Cut_LHS_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#ff0000");
   Cut_LHS_1->SetLineColor(ci);
   Cut_LHS_1->GetXaxis()->SetLabelFont(42);
   //Cut_LHS_1->GetXaxis()->SetTitle("Angle wrt -z (in deg)");
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
   
   /*
   TLegend *leg = new TLegend(0.7,0.8,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.02);
   */
   //TLegend *leg = new TLegend(0.65,0.7,0.85,0.8,NULL,"brNDC");
   //TLegend *leg = new TLegend(0.63,0.69,0.83,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   TLegend *leg = new TLegend(0.65,0.69,0.85,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)

   leg->SetBorderSize(0);
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

   entry=leg->AddEntry("Cut 1 LHS","Mean = 4094.30","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 1 LHS","Median = 4116","");
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
   c1_2->Range(-225,-0.01698491,225,0.1528642);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   */
   
   //TH1F *Cut_RHS_2 = new TH1F("Cut_RHS_2","Angular distribution for photons hitting the upstream surface of the crystal (z = 30 mm) wrt the positive z normal",360,-180,180);
   TH1F *Cut_RHS_2 = new TH1F("Cut_RHS_2","",90,0,90);
   int start_bin_2 = 1;
   std::vector<float> rhs_2 = {0.00102418,0.002898194,0.004551168,0.005313623,0.007906103,0.01047234,0.009456348,0.0110545,0.01416885,0.01477421,0.01740723,0.01446512,
    0.02025621,0.02113709,0.02124065,0.02145285,0.0242778,0.02525062,0.0231676,0.02604946,0.02731321,0.02857835,0.0284635,0.02686595,0.02994463,0.03060421,0.0296761,
    0.03313234,0.03526054,0.03592122,0.03450679,0.03340139,0.03798699,0.03531457,0.03453834,0.03383319,0.03469335,0.03280663,0.03238529,0.03612712,0.03436386,0.03217748,
    0.03726025,0.03385,0.03305812,0.03051722,0.03524074,0.03121557,0.03256935,0.02838615,0.03019559,0.03071371,0.03072392,0.02867286,0.05966851,0.1294088,0.0820051,
    0.09103762,0.04600705,0.02536161,0.02458961,0.02320011,0.02547128,0.02411275,0.01876942,0.01973647,0.01995913,0.01724027,0.01711608,0.01619117,0.01702157,0.01526887,
    0.01166261,0.01217705,0.01251376,0.009087596,0.009689348,0.008686564,0.0071472,0.007809559,0.006109243,0.004749283,0.003795465,0.004024427,0.00231777,0.002608276,
    0.001578035,0.0009209708,0.000310873,0.0006354908};

   //Cut_RHS_2->SetBinContent(361,5);

   for (int i=0; i<rhs_2.size(); i++)
   {
    Cut_RHS_2->SetBinContent(start_bin_2+i,rhs_2.at(i));
   }
   
   Cut_RHS_2->SetEntries(24390);
   Cut_RHS_2->SetDirectory(0);
   Cut_RHS_2->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#0000ff");
   Cut_RHS_2->SetLineColor(ci);
   Cut_RHS_2->GetXaxis()->SetLabelFont(42);
   //Cut_RHS_2->GetXaxis()->SetTitle("Angle wrt z (in deg)");
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

   entry=leg->AddEntry("Cut 1 RHS","Mean = 2079.0","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 1 RHS","Median = 2095","");
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
   //c1->cd();
  
   string image_path_cut_1_rhs = "0708_90_high_ri_cut_1_lhs_rhs_overlap.png";
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
   std::vector<float> lhs_3 = {0.0002193588,0.001809106,0.003021565,0.003235019,0.005341795,0.007734899,0.007102195,0.009029894,0.009934266,0.01122955,0.01204021,
    0.01280353,0.01610044,0.01398684,0.01478167,0.01803576,0.01876745,0.01936469,0.02110027,0.02007929,0.02310262,0.02230006,0.02099996,0.01997541,0.02412961,
    0.02404312,0.02601752,0.02202917,0.02742146,0.02311117,0.02619635,0.02359396,0.02517656,0.02619404,0.02813898,0.02620269,0.02465353,0.02891609,0.02660815,
    0.0281339,0.02746703,0.02533139,0.028826,0.02905093,0.02493131,0.02778967,0.02508143,0.02703003,0.02508478,0.02404689,0.02481343,0.0240919,0.02364019,0.02118621,
    0.2036045,0.7133297,0.3319238,0.02105979,0.01073262,0.00710748,0.005779743,0.002971676,0.0008029009};
   //Cut_LHS_3->SetBinContent(361,2545);

   for (int i=0; i<lhs_3.size(); i++)
   {
    Cut_LHS_3->SetBinContent(start_bin_3+i,lhs_3.at(i));
   }

   Cut_LHS_3->SetEntries(28791);
   Cut_LHS_3->SetDirectory(0);
   Cut_LHS_3->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#ff0000");
   Cut_LHS_3->SetLineColor(ci);
   Cut_LHS_3->GetXaxis()->SetLabelFont(42);
   //Cut_LHS_3->GetXaxis()->SetTitle("Angle wrt -z (in deg)");
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
   //leg = new TLegend(0.63,0.69,0.83,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
   leg = new TLegend(0.65,0.69,0.85,0.875,NULL,"brNDC"); //The y spread is so big because we have to fit 6 lines here (including 2 bold)
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

   entry=leg->AddEntry("Cut 2 LHS","Mean = 2519.10","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 2 LHS","Median = 2534","");
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
   c1_4->Range(-225,-0.01098482,225,0.09886338);
   c1_4->SetFillColor(0);
   c1_4->SetBorderMode(0);
   c1_4->SetBorderSize(2);
   c1_4->SetFrameBorderMode(0);
   c1_4->SetFrameBorderMode(0);
   */
   
   //TH1F *Cut_RHS_4 = new TH1F("Cut_RHS_4","Angular distribution for photons passing into the cookie, at the upstream crystal-cookie interface (z = 30 mm) wrt the positive z normal",360,-180,180);
   TH1F *Cut_RHS_4 = new TH1F("Cut_RHS_4","",90,0,90);
   int start_bin_4 = 1;
   std::vector<float> rhs_4 = {0.000219054,0.001674131,0.002546554,0.003669715,0.006153082,0.008685619,0.007635831,0.008942122,0.01232925,0.01291852,0.01492497,
    0.01275325,0.01893764,0.01844476,0.01872116,0.02107382,0.0230667,0.02241771,0.02112722,0.02277048,0.02442468,0.02601507,0.02431868,0.02313953,0.0262064,
    0.02772819,0.02723176,0.02877188,0.03001221,0.02920509,0.02968871,0.02934926,0.03033654,0.02971239,0.02812662,0.02877244,0.03102159,0.02878979,0.02716682,
    0.02994391,0.02980836,0.02451523,0.02805696,0.02701275,0.02892449,0.02594481,0.0277512,0.02708189,0.02617146,0.02221809,0.0224208,0.02357849,0.0217374,
    0.02103893,0.04118442,0.08369387,0.04218373,0.01333523,0.01032195,0.007323778,0.005055091,0.002438388,0.0009880183};
   //Cut_RHS_4->SetBinContent(361,765);

   for (int i=0; i<rhs_4.size(); i++)
   {
    Cut_RHS_4->SetBinContent(start_bin_4+i,rhs_4.at(i));
   }

   Cut_RHS_4->SetEntries(17563);
   Cut_RHS_4->SetDirectory(0);
   Cut_RHS_4->SetStats(0);

   //ci = TColor::GetColor("#000099");
   ci = TColor::GetColor("#0000ff");
   Cut_RHS_4->SetLineColor(ci);
   Cut_RHS_4->GetXaxis()->SetLabelFont(42);
   //Cut_RHS_4->GetXaxis()->SetTitle("Angle wrt z (in deg)");
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

   entry=leg->AddEntry("Cut 2 RHS","Mean = 1396.30","");
   //entry->SetLineColor(1);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry("Cut 2 RHS","Median = 1396","");
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
   string image_path_cut_2_rhs = "0708_90_high_ri_cut_2_lhs_rhs_overlap.png";
   c3->Print(image_path_cut_2_rhs.c_str());
   c3->Close();   
   gApplication->Terminate();
   //*/

}
