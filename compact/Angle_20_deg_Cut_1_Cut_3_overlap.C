#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Angle_20_deg_Cut_1_Cut_3_overlap(int norm)
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
   std::vector<float> angle_side_1 = {0.0001384433,0.0005494478,0.001366407,0.001586061,0.001766623,0.003633801,0.003346979,0.004741979,0.005172841,0.007408659,0.008001532,
   0.02017704,0.06568401,0.0857857,0.1371482,0.1488719,0.1067301,0.09242717,0.08232307,0.07571098,0.07142557,0.0609084,0.06573119,0.06055416,0.06127659,0.06096622,0.05767846,
   0.06429042,0.06047299,0.05469896,0.06468543,0.05732546,0.06450059,0.06155382,0.05719298,0.04636075,0.0423931,0.02682442,0.01577504,0.01481515,0.01347042,0.01325255,0.01379289,
   0.01269568,0.01286507,0.01255536,0.01268198,0.0107134,0.01182309,0.0102075,0.01225016,0.01113954,0.01215488,0.009826738,0.01062242,0.0106198,0.01064093,0.01005678,0.008425137,
   0.009436223,0.008138856,0.01074922,0.00907367,0.008208319,0.01023126,0.008528504,0.006978936,0.008871468,0.006372155,0.008390934,0.006759101,0.006311015,0.007583803,0.006366733,
   0.006737787,0.004518628,0.004819124,0.003792427,0.003465158,0.004282439,0.002256986,0.003407853,0.002711627,0.002998724,0.001656413,0.001659483,0.001197979,0.000907445,
   0.0007959704,0.0002478256,0.0002187437,0.0005801533,0.001519801,0.001062037,0.001933859,0.002228787,0.002464734,0.002261839,0.00465531,0.00371566,0.004484046,0.004791165,
   0.005063773,0.006101243,0.0073262,0.008162472,0.007806755,0.006718704,0.008372394,0.007353134,0.009490027,0.01156507,0.00949161,0.009591809,0.0102783,0.01137881,0.01408299,
   0.01313225,0.01674036,0.01608888,0.01710005,0.01940103,0.01863132,0.02176025,0.04275134,0.2665212,0.2967605,0.3134547,0.3470442,0.2619317,0.2121899,0.1721733,0.1429236,0.1276708,
   0.1173129,0.1053997,0.09390258,0.09151689,0.09153952,0.07606646,0.076104,0.07221462,0.06656289,0.04517273,0.03389423,0.02269984,0.01280789,0.01387456,0.01251107,0.01070014,
   0.009419606,0.009038761,0.00870783,0.007867832,0.006843223,0.006171867,0.006853982,0.005999994,0.00620142,0.004448599,0.005094811,0.004768447,0.004814372,0.003603935,0.00341473,
   0.003553761,0.002812623,0.002574369,0.002251711,0.002149074,0.002179263,0.001909938,0.001293249,0.001533084,0.0009869625,0.000961931,0.0007355087,0.0002728106,0.0001623551,5.999651e-05};

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

   entry=leg->AddEntry("angle_side_0__1","Mean = 14552.75","");   
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angle_side_0__1","Median = 1268","");
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
   std::vector<float> angle_side_3 = {2.210018e-05,1.962795e-05,7.877148e-06,3.311692e-05,0.0001164543,0.0001847689,0.0001656161,7.878362e-05,8.478246e-05,0.0001275147,
   0.0002671903,0.001899588,0.005527189,0.005650944,0.002859427,0.001211979,0.0008615819,0.001551648,0.003455838,0.00651221,0.01170635,0.01466929,0.005394957,0.001685959,
   0.001778371,0.002130465,0.002401669,0.001796229,0.001848978,0.002259841,0.002251783,0.002366101,0.002362951,0.002012151,0.001817517,0.002111163,0.002321598,0.002188836,
   0.002119637,0.00210835,0.001167233,0.001934891,0.001453705,0.001383282,0.001200145,0.0009665166,0.0007644547,0.000675855,0.0003536537,0.0005516009,0.0004373876,0.0002375258,
   0.0001857646,3.938574e-06};
   std::vector<float> angle_side_3_1 = {0.0002008032,0.0003891714,0.0001859114,0.0004191765,0.0004644602,0.0006874821,0.0004467987,0.0005057874,0.0002894997,0.0005733756,0.0004275909,
   0.0003455433,0.0005910693,0.0008768822,0.00104856,0.001239295,0.0008218127,0.001123209,0.0009288432,0.0008039997,0.0005375972,0.001355355,0.000469692,0.0006140271,0.0007799075,
   0.000495973,0.0002127928,0.000193393,0.0003317693,0.0002157837,0.0001515434,0.0004897336,0.0005478974,0.0006446168,0.000668223,0.0002267252,0.0004846564,0.0003169084,0.0005560839,
   0.0002254324,0.0002704342,0.0001664819,0.0002016821,0.0001438963,0.0002528223,0.0003466133,0.0006498688,0.0001106375,0.0001068826,2.60054e-05,4.766204e-05,2.272569e-05,
   6.517582e-06,1.17508e-05,1.311036e-05};

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
   
   entry=leg->AddEntry("angle_side_3_0","Mean = 592.15","");
   //entry->SetLineColor(ci);
   entry->SetTextColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angle_side_3_0","Median = 21","");
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
      image_path = "20_deg_cut_1_cut_3_overlap.png";
   } 

   else if(norm==1)
   {
      image_path = "20_deg_cut_1_cut_3_overlap_area_normalized.png";
   } 

   else if(norm==2)
   {
      image_path = "20_deg_cut_1_cut_3_overlap_area_normalized_positive_negative_individual.png";
   }

   else if(norm==3)
   {
      image_path = "20_deg_cut_1_cut_3_overlap_height_normalized_positive_negative_individual.png";
   }

   ///*
   c1->Print(image_path.c_str());
   c1->Close();
   gApplication->Terminate();
   //*/

}
