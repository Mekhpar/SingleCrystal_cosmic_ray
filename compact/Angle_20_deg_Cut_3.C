#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Angle_20_deg_Cut_3()
{
//=========Macro generated from canvas: c1/Graph Draw Options
//=========  (Tue Mar 12 04:18:15 2024) by ROOT version 6.26/08
  
// ------------>Primitives in pad: c1_3
   TCanvas *c1 = new TCanvas("c1", "Graph Draw Options",0,0,750,400);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);

   
   TH1F *angle_side_3_0__3 = new TH1F("angle_side_3_0__3","Cut 3",180,-90,90);
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
   
   TLegendEntry *entry=leg->AddEntry("angle_side_3_0","Mean = 592.15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("angle_side_3_0","Median = 21","");
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
