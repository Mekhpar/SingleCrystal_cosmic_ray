#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Angle_10_deg_Cut_1_Cut_3_overlap(int norm)
{
//=========Macro generated from canvas: c1/Graph Draw Options
//=========  (Tue Mar 12 04:18:15 2024) by ROOT version 6.26/08
  
// ------------>Primitives in pad: c1_3
   TCanvas *c1 = new TCanvas("c1", "Graph Draw Options",0,0,1200,1200);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);

   TPad *pad_upper = new TPad("pad_upper", "pad_upper", 0.05, 0.05, 0.99, 0.99);
   pad_upper->SetBottomMargin(0.08);
   pad_upper->SetLeftMargin(0.1);
   pad_upper->SetRightMargin(0.05);
   pad_upper->SetTopMargin(0.1);

   //gPad->SetBottomMargin(0);
   gPad->SetBottomMargin(0.15);
   pad_upper->Draw();
   c1->cd();  
   pad_upper->cd();

   TLegend *leg = new TLegend(0.33,0.6,0.55,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   

   TH1F *angle_side_0__1 = new TH1F("angle_side_0__1","",180,-90,90);
   int start_bin_1 = 0;
   std::vector<float> angle_side_1 = {0.0001132018,0.0004403519,0.0006654747,0.001101276,0.001631295,0.001901511,0.002211454,0.002990766,0.003155937,0.003705206,
   0.004204666,0.005054297,0.005736201,0.007294839,0.007273578,0.01003169,0.01098036,0.01229925,0.01308299,0.01573798,0.01785373,0.05132369,0.1910242,0.2416099,
   0.3708245,0.393645,0.2196321,0.1893568,0.1688505,0.1434724,0.140359,0.1302927,0.126837,0.09873681,0.07554063,0.04249771,0.01904506,0.01866559,0.01610528,0.0159313,
   0.0140503,0.01295369,0.01333194,0.01226551,0.01121904,0.0095965,0.01038605,0.01124458,0.007276835,0.008103747,0.008564933,0.00841995,0.009201042,0.00981051,
   0.007698405,0.007909402,0.006370067,0.007919428,0.007377069,0.006997659,0.006033226,0.005596857,0.006247354,0.005328203,0.005914876,0.005615977,0.005139858,
   0.004248058,0.003810378,0.00468135,0.003749458,0.00403002,0.004362918,0.004753811,0.003104192,0.003450322,0.003649806,0.003932061,0.002018026,0.001779106,
   0.002628765,0.00136483,0.001751817,0.001803232,0.001052294,0.001023488,0.0005795832,0.000883952,0.0002163338,5.658058e-05,7.753891e-05,0.0002014246,0.000534981,
   0.0004578838,0.0006447562,0.001354645,0.0009216013,0.001378795,0.001605802,0.001760915,0.001436616,0.002620279,0.002574463,0.002813384,0.002965782,0.003683338,
   0.004534254,0.003540942,0.004283221,0.004368286,0.005747109,0.00515595,0.004586039,0.006002745,0.005478835,0.005717796,0.005982215,0.006891899,0.006893789,
   0.006693529,0.007618718,0.008080387,0.008650749,0.009369321,0.008596042,0.009690432,0.01026163,0.01063336,0.01252342,0.01383884,0.01534189,0.01751593,0.01832128,
   0.02014093,0.05248861,0.4414662,0.4843532,0.4765522,0.5108686,0.2784628,0.2329844,0.2024836,0.1748364,0.1447994,0.1242896,0.07850002,0.0516396,0.02745954,0.01548078,
   0.01508471,0.01227739,0.01149962,0.01158487,0.01026582,0.008681959,0.008727911,0.008381879,0.00685272,0.006790702,0.004983971,0.005140326,0.004096986,0.004566238,
   0.004319367,0.003665087,0.003382443,0.003280579,0.00328181,0.002444535,0.002701269,0.002132986,0.002522897,0.002031616,0.001636011,0.001410752,0.001515085,0.001014751,
   0.0008222685,0.0002552671,9.188901e-05};

   for (int i=0; i<angle_side_1.size(); i++)
   {
    angle_side_0__1->SetBinContent(start_bin_1+i+1,angle_side_1.at(i));
   }

   angle_side_0__1->SetEntries(298255);
   angle_side_0__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   angle_side_0__1->SetLineColor(ci);
   //angle_side_0__1->SetTitleSize(0);
   angle_side_0__1->GetXaxis()->SetLabelFont(42);
   //angle_side_0__1->GetXaxis()->SetTitleSize(1);
   angle_side_0__1->GetXaxis()->SetTitle("Photon incident angle wrt y axis (in deg)");
   angle_side_0__1->GetYaxis()->SetTitle("Number of photons (normalized)");
   angle_side_0__1->GetYaxis()->SetTitleOffset(1.5);
   angle_side_0__1->GetXaxis()->SetTitleOffset(1);
   angle_side_0__1->GetXaxis()->SetTitleFont(42);
   angle_side_0__1->GetYaxis()->SetLabelFont(42);
   angle_side_0__1->GetYaxis()->SetTitleFont(42);
   angle_side_0__1->GetZaxis()->SetLabelFont(42);
   angle_side_0__1->GetZaxis()->SetTitleOffset(1);
   angle_side_0__1->GetZaxis()->SetTitleFont(42);
   angle_side_0__1->SetLineWidth(2);
   //angle_side_0__1->Draw("");
   //angle_side_0__1->Draw("hist");

   float scale = (angle_side_0__1->Integral());
   ///*
   angle_side_0__1->GetXaxis()->SetRangeUser(-90,0);
   float scale_negative_norm = angle_side_0__1->GetMaximum();
   angle_side_0__1->GetXaxis()->SetRangeUser(0,90);
   float scale_positive_norm = angle_side_0__1->GetMaximum();
   angle_side_0__1->GetXaxis()->SetRangeUser(-90,90);
   //*/

   angle_side_0__1->GetXaxis()->SetRangeUser(-90,0);
   float scale_negative_integral = angle_side_0__1->Integral();
   angle_side_0__1->GetXaxis()->SetRangeUser(0,90);
   float scale_positive_integral = angle_side_0__1->Integral();
   angle_side_0__1->GetXaxis()->SetRangeUser(-90,90);
   
   std::cout << std::endl;
   std::cout << "Total scaling factor for angle_side_0__1 " << scale << std::endl;

   std::cout << "scale_negative_norm for angle_side_0__1 " << scale_negative_norm << std::endl;
   std::cout << "scale_positive_norm for angle_side_0__1 " << scale_positive_norm << std::endl;
   std::cout << "scale_negative_integral for angle_side_0__1 " << scale_negative_integral << std::endl;
   std::cout << "scale_positive_integral for angle_side_0__1 " << scale_positive_integral << std::endl;

   if(norm == 1)
   {
   angle_side_0__1->Scale(1/scale);
   //angle_side_0__1->Draw("hist");
   }

   else if(norm == 2)
   {
      /*
      angle_side_0__1->GetXaxis()->SetRangeUser(-90,0);
      angle_side_0__1->Scale(1/scale_negative_integral);
      angle_side_0__1->GetXaxis()->SetRangeUser(0,90);
      angle_side_0__1->Scale(1/scale_positive_integral);
      angle_side_0__1->GetXaxis()->SetRangeUser(-90,90);      
      */

      for(int i=0;i<90;i++)
      {
         angle_side_0__1->SetBinContent(i+1,angle_side_0__1->GetBinContent(i+1)/scale_negative_integral);
      }

      for(int i=90;i<180;i++)
      {
         angle_side_0__1->SetBinContent(i+1,angle_side_0__1->GetBinContent(i+1)/scale_positive_integral);
      }

   }

   else if(norm == 3)
   {  
      /*
      angle_side_0__1->GetXaxis()->SetRangeUser(-90,0);
      angle_side_0__1->Scale(1/scale_negative_norm);
      angle_side_0__1->GetXaxis()->SetRangeUser(0,90);
      //angle_side_0__1->Scale(1/scale_positive_norm);
      angle_side_0__1->GetXaxis()->SetRangeUser(-90,90);      
      */
      for(int i=0;i<90;i++)
      {
         angle_side_0__1->SetBinContent(i+1,angle_side_0__1->GetBinContent(i+1)/scale_negative_norm);
      }

      for(int i=90;i<180;i++)
      {
         angle_side_0__1->SetBinContent(i+1,angle_side_0__1->GetBinContent(i+1)/scale_positive_norm);
      }

   }


   TLegendEntry *entry=leg->AddEntry("angle_side_0__1","Cut 1","");   
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   entry->SetTextFont(2);

   entry=leg->AddEntry("angle_side_0__1","Mean = 8809.85","");   
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angle_side_0__1","Median = 1210","");
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   TH1F *angle_side_3_0__3 = new TH1F("angle_side_3_0__3","",180,-90,90);
   int start_bin_3 = 0;
   int start_bin_3_1 = 125;
   std::vector<float> angle_side_3 = {1.095626e-05,1.709548e-05,1.095626e-05,6.276042e-05,0.000103445,0.0001418533,0.0001133244,5.068668e-05,7.813866e-05,7.319896e-05,
   0.0001770391,0.0002768179,0.0001759216,0.0001911907,0.0001885951,0.0002380823,0.0001283482,0.0002238683,0.000410528,0.0006416665,0.001444669,0.006459597,0.02025033,
   0.04796253,0.0689176,0.06809395,0.05919174,0.01931472,0.007096351,0.006586426,0.004927875,0.004416076,0.004424141,0.003627784,0.003067907,0.002548375,0.002908743,
   0.001948967,0.001884551,0.001690551,0.0007546915,0.001010845,0.0008794439,0.0005452003,0.0009250683,0.0009588931,0.0009849141,0.000459988,0.0004675992,0.0002987304,
   0.0001616941,0.000195934,4.454747e-05,1.107892e-05};
   std::vector<float> angle_side_3_1 = {2.251228e-05,0.0001314148,9.403464e-05,0.0001968799,0.0007474005,0.0005899734,0.0007311612,0.0004382523,0.0004254561,
   0.004053888,0.06459074,0.07132912,0.05585825,0.03930507,0.00330343,0.001781101,0.001501253,0.001107191,0.001407897,0.001546345,0.001143806,0.0008594858,0.0004293406,
   0.0004470765,0.0006611549,0.0006461258,0.0005204906,0.0004710842,0.0002121897,0.0005257157,0.0002544688,0.0004857113,0.0002823159,0.0002155429,0.0003630989,0.0005053171,
   0.0001736181,0.0002790393,0.0002149431,0.000183778,0.0001585537,0.0001589488,0.0002119524,0.0001821014,0.0002861056,0.0002384096,0.000245421,0.0001992789,8.587245e-05,
   3.419095e-05,2.86515e-05,1.095626e-05,5.53946e-06};

   for (int i=0; i<angle_side_3.size(); i++)
   {
    angle_side_3_0__3->SetBinContent(start_bin_3+i+2,angle_side_3.at(i));
   }

   for (int i=0; i<angle_side_3_1.size(); i++)
   {
    angle_side_3_0__3->SetBinContent(start_bin_3_1+i,angle_side_3_1.at(i));
   }

   angle_side_3_0__3->SetEntries(19043);
   angle_side_3_0__3->SetStats(0);

   //Int_t ci;      // for color index setting
   ci = TColor::GetColor("#ff0000");
   angle_side_3_0__3->SetLineColor(ci);
   angle_side_3_0__3->GetXaxis()->SetLabelFont(42);
   //angle_side_3_0__3->GetXaxis()->SetTitleSize(1);
   angle_side_3_0__3->GetXaxis()->SetTitle("Photon incident angle wrt y axis (in deg)");
   angle_side_3_0__3->GetYaxis()->SetTitle("Number of photons (normalized)");
   angle_side_3_0__3->GetYaxis()->SetTitleOffset(1.5);
   angle_side_3_0__3->GetXaxis()->SetTitleOffset(1);
   angle_side_3_0__3->GetXaxis()->SetTitleFont(42);
   angle_side_3_0__3->GetYaxis()->SetLabelFont(42);
   angle_side_3_0__3->GetYaxis()->SetTitleFont(42);
   angle_side_3_0__3->GetZaxis()->SetLabelFont(42);
   angle_side_3_0__3->GetZaxis()->SetTitleOffset(1);
   angle_side_3_0__3->GetZaxis()->SetTitleFont(42);
   angle_side_3_0__3->SetLineWidth(2);
   //angle_side_3_0__3->Draw("hist same");

   scale = (angle_side_3_0__3->Integral());

   ///*
   angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,0);
   scale_negative_norm = angle_side_3_0__3->GetMaximum();
   angle_side_3_0__3->GetXaxis()->SetRangeUser(0,90);
   scale_positive_norm = angle_side_3_0__3->GetMaximum();
   angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,90);
   //*/

   angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,0);
   scale_negative_integral = angle_side_3_0__3->Integral();
   angle_side_3_0__3->GetXaxis()->SetRangeUser(0,90);
   scale_positive_integral = angle_side_3_0__3->Integral();
   angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,90);

   std::cout << std::endl;
   std::cout << "Total scaling factor for angle_side_3_0__3 " << scale << std::endl;
   std::cout << "scale_negative_norm for angle_side_3_0__3 " << scale_negative_norm << std::endl;
   std::cout << "scale_positive_norm for angle_side_3_0__3 " << scale_positive_norm << std::endl;

   std::cout << "scale_negative_integral for angle_side_3_0__3 " << scale_negative_integral << std::endl;
   std::cout << "scale_positive_integral for angle_side_3_0__3 " << scale_positive_integral << std::endl;

   if(norm == 1)
   {
      angle_side_3_0__3->Scale(1/scale);
      //angle_side_3_0__3->Draw("hist same");
   }

   else if(norm == 2)
   {
      /*
      angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,0);
      angle_side_3_0__3->Scale(1/scale_negative_integral);
      angle_side_3_0__3->GetXaxis()->SetRangeUser(0,90);
      angle_side_3_0__3->Scale(1/scale_positive_integral);
      angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,90);      
      */

      for(int i=0;i<90;i++)
      {
         angle_side_3_0__3->SetBinContent(i+1,angle_side_3_0__3->GetBinContent(i+1)/scale_negative_integral);
      }

      for(int i=90;i<180;i++)
      {
         angle_side_3_0__3->SetBinContent(i+1,angle_side_3_0__3->GetBinContent(i+1)/scale_positive_integral);
      }

   }

   else if(norm == 3)
   {  
      /*
      angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,0);
      angle_side_3_0__3->Scale(1/scale_negative_norm);
      angle_side_3_0__3->GetXaxis()->SetRangeUser(0,90);
      //angle_side_3_0__3->Scale(1/scale_positive_norm);
      angle_side_3_0__3->GetXaxis()->SetRangeUser(-90,90);      
      */
      for(int i=0;i<90;i++)
      {
         angle_side_3_0__3->SetBinContent(i+1,angle_side_3_0__3->GetBinContent(i+1)/scale_negative_norm);
      }

      for(int i=90;i<180;i++)
      {
         angle_side_3_0__3->SetBinContent(i+1,angle_side_3_0__3->GetBinContent(i+1)/scale_positive_norm);
      }

   }

   float max_1 = angle_side_0__1->GetMaximum();
   float max_3 = angle_side_3_0__3->GetMaximum();

   if(max_1>=max_3)
   {
      angle_side_0__1->Draw("hist");
      angle_side_3_0__3->Draw("hist same");
   }
   else if(max_1<max_3)
   {
      angle_side_3_0__3->Draw("hist");
      angle_side_0__1->Draw("hist same");
   }


   entry=leg->AddEntry("angle_side_3_0","Cut 3","");
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   entry->SetTextFont(2);
   
   entry=leg->AddEntry("angle_side_3_0","Mean = 679.8","");
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angle_side_3_0","Median = 123","");
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3907107,0.935,0.6092893,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("angle_side_3");
   pt->Draw();
   //c1_3->Modified();
   string image_path= "";
   if(norm==0)
   {
      image_path = "10_deg_cut_1_cut_3_overlap.png";
   } 

   else if(norm==1)
   {
      image_path = "10_deg_cut_1_cut_3_overlap_area_normalized.png";
   } 

   else if(norm==2)
   {
      image_path = "10_deg_cut_1_cut_3_overlap_area_normalized_positive_negative_individual.png";
   }

   else if(norm==3)
   {
      image_path = "10_deg_cut_1_cut_3_overlap_height_normalized_positive_negative_individual.png";
   }

   ///*
   c1->Print(image_path.c_str());
   c1->Close();
   gApplication->Terminate();
   //*/

}
