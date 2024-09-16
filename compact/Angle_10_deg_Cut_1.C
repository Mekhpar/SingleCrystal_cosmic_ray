#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Angle_10_deg_Cut_1()
{
//=========Macro generated from canvas: c1/Graph Draw Options
//=========  (Tue Mar 12 11:47:39 2024) by ROOT version 6.26/08
   TCanvas *c1 = new TCanvas("c1", "Graph Draw Options",0,0,750,400);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
     
   TH1F *angle_side_0__1 = new TH1F("angle_side_0__1","Cut 1",180,-90,90);
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

   angle_side_0__1->SetEntries(183397);
   angle_side_0__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   angle_side_0__1->SetLineColor(ci);
   angle_side_0__1->GetXaxis()->SetLabelFont(42);
   angle_side_0__1->GetXaxis()->SetTitle("Photon incident angle wrt y axis (in deg)");
   angle_side_0__1->GetYaxis()->SetTitle("#splitline{Sum of Bin heights normalized}{wrt gen photons per event}");
   angle_side_0__1->GetXaxis()->SetTitleOffset(1);
   angle_side_0__1->GetXaxis()->SetTitleFont(42);
   angle_side_0__1->GetYaxis()->SetLabelFont(42);
   angle_side_0__1->GetYaxis()->SetTitleFont(42);
   angle_side_0__1->GetZaxis()->SetLabelFont(42);
   angle_side_0__1->GetZaxis()->SetTitleOffset(1);
   angle_side_0__1->GetZaxis()->SetTitleFont(42);
   angle_side_0__1->SetLineWidth(4);   
   angle_side_0__1->Draw("");
   
   TLegend *leg = new TLegend(0.38,0.6,0.6,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("angle_side_0","Mean = 8809.85","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angle_side_0","Median = 1210","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4081299,0.935,0.5918701,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("angle_side");
   pt->Draw();
  
}
