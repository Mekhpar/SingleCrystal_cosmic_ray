#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Angle_10_deg_Cut_3()
{
//=========Macro generated from canvas: c1/Graph Draw Options
//=========  (Tue Mar 12 11:47:39 2024) by ROOT version 6.26/08
  
// ------------>Primitives in pad: c1_3

   TCanvas *c1 = new TCanvas("c1", "Graph Draw Options",0,0,750,400);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);

   TH1F *angle_side_3_0__3 = new TH1F("angle_side_3_0__3","Cut 3",180,-90,90);
   int start_bin_3 = 0;
   int start_bin_3_1 = 126;
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

   angle_side_3_0__3->SetEntries(20796);
   angle_side_3_0__3->SetStats(0);

   Int_t ci;      // for color index setting
   ci = TColor::GetColor("#000099");
   angle_side_3_0__3->SetLineColor(ci);
   angle_side_3_0__3->GetXaxis()->SetLabelFont(42);
   angle_side_3_0__3->GetXaxis()->SetTitle("Photon incident angle wrt y axis (in deg)");
   angle_side_3_0__3->GetYaxis()->SetTitle("#splitline{Sum of Bin heights normalized}{wrt gen photons per event}");
   angle_side_3_0__3->GetXaxis()->SetTitleOffset(1);
   angle_side_3_0__3->GetXaxis()->SetTitleFont(42);
   angle_side_3_0__3->GetYaxis()->SetLabelFont(42);
   angle_side_3_0__3->GetYaxis()->SetTitleFont(42);
   angle_side_3_0__3->GetZaxis()->SetLabelFont(42);
   angle_side_3_0__3->GetZaxis()->SetTitleOffset(1);
   angle_side_3_0__3->GetZaxis()->SetTitleFont(42);
   angle_side_3_0__3->SetLineWidth(4);
   angle_side_3_0__3->Draw("");
   
   TLegend *leg = new TLegend(0.38,0.6,0.6,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   
   TLegendEntry *entry=leg->AddEntry("angle_side_3_0","Mean = 679.8","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angle_side_3_0","Median = 123","");
   entry->SetLineColor(1);
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


}
