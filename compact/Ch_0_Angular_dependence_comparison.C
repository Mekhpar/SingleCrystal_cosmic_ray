#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Ch_0_Angular_dependence_comparison()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 20 14:25:26 2024) by ROOT version 6.26/08
   TCanvas *c = new TCanvas("c", "c",190,213,800,800);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: toppad
   TPad *toppad = new TPad("toppad", "toppad",0.01,0.355,0.99,0.99);
   toppad->Draw();
   toppad->cd();
   toppad->Range(0,0,1,1);
   toppad->SetFillColor(0);
   toppad->SetBorderMode(0);
   toppad->SetBorderSize(2);
   toppad->SetTickx(1);
   toppad->SetTicky(1);
   toppad->SetLeftMargin(0.15);
   toppad->SetRightMargin(0.05);
   toppad->SetTopMargin(0.08);
   toppad->SetBottomMargin(0.008);
   toppad->SetFrameBorderMode(0);
   
   Double_t _fx1[19] = {
   -90,
   -80,
   -70,
   -60,
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50,
   60,
   70,
   80,
   90};
   Double_t _fy1[19] = {
   25.92593,
   34.81481,
   40.74074,
   30.37037,
   25.92593,
   18.51852,
   15.55556,
   12.59259,
   12.59259,
   15.55556,
   14.07407,
   12.59259,
   11.11111,
   14.07407,
   15.55556,
   20,
   27.40741,
   25.92593,
   24.44444};
   TGraph *graph = new TGraph(19,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph1 = new TH1F("Graph1","",100,-108,108);
   
   Graph1->SetMinimum(0);
   Graph1->SetMaximum(70);
   Graph1->SetDirectory(0);
   Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph1->SetLineColor(ci);
   Graph1->GetXaxis()->SetRange(4,97);
   Graph1->GetXaxis()->SetLabelFont(42);
   Graph1->GetXaxis()->SetLabelSize(0);
   Graph1->GetXaxis()->SetTitleSize(0);
   Graph1->GetXaxis()->SetTickLength(0.01884422);
   Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph1->GetXaxis()->SetTitleFont(42);
   Graph1->GetYaxis()->SetTitle("Number of p.e. counts");
   Graph1->GetYaxis()->SetLabelFont(42);
   Graph1->GetYaxis()->SetLabelSize(0.03);
   Graph1->GetYaxis()->SetTitleSize(0.045);
   Graph1->GetYaxis()->SetTickLength(0.01884422);
   Graph1->GetYaxis()->SetTitleOffset(0.7);
   Graph1->GetYaxis()->SetTitleFont(42);
   Graph1->GetZaxis()->SetLabelFont(42);
   Graph1->GetZaxis()->SetTitleOffset(1);
   Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph1);
   
   graph->Draw("ap");
   graph->SetMarkerSize(0.9);
   Graph1->Draw("same");
   
   Graph1->Draw("AXIS same");
   
   TLegend *leg = new TLegend(0.48,0.619707,0.6074114,0.9012957,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);


   TLegendEntry *entry=leg->AddEntry("NULL","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.15);
   entry->SetTextFont(42);
   entry->SetTextSize(0.04);
   entry=leg->AddEntry("NULL","MC","L");

   //ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry->SetTextSize(0.04);
   
   TLatex *   tex = new TLatex(0.17,0.83,"Ch 0");
   tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetLineWidth(2);
   tex->Draw();
   
   leg->Draw();

   TH1F *Plot_comp__1 = new TH1F("Plot_comp__1","Plot_comp",19,-95,95);
   Plot_comp__1->SetLineWidth(3);
   Plot_comp__1->SetBinContent(1,27);
   Plot_comp__1->SetBinContent(2,45);
   Plot_comp__1->SetBinContent(3,49);
   Plot_comp__1->SetBinContent(4,40);
   Plot_comp__1->SetBinContent(5,33);
   Plot_comp__1->SetBinContent(6,25);
   Plot_comp__1->SetBinContent(7,18);
   Plot_comp__1->SetBinContent(8,13);
   Plot_comp__1->SetBinContent(9,12);
   Plot_comp__1->SetBinContent(10,15);
   Plot_comp__1->SetBinContent(11,15);
   Plot_comp__1->SetBinContent(12,13);
   Plot_comp__1->SetBinContent(13,13);
   Plot_comp__1->SetBinContent(14,17);
   Plot_comp__1->SetBinContent(15,19);
   Plot_comp__1->SetBinContent(16,23);
   Plot_comp__1->SetBinContent(17,28);
   Plot_comp__1->SetBinContent(18,28);
   Plot_comp__1->SetBinContent(19,28);
   Plot_comp__1->SetBinError(1,27);
   Plot_comp__1->SetBinError(2,45);
   Plot_comp__1->SetBinError(3,49);
   Plot_comp__1->SetBinError(4,40);
   Plot_comp__1->SetBinError(5,33);
   Plot_comp__1->SetBinError(6,25);
   Plot_comp__1->SetBinError(7,18);
   Plot_comp__1->SetBinError(8,13);
   Plot_comp__1->SetBinError(9,12);
   Plot_comp__1->SetBinError(10,15);
   Plot_comp__1->SetBinError(11,15);
   Plot_comp__1->SetBinError(12,13);
   Plot_comp__1->SetBinError(13,13);
   Plot_comp__1->SetBinError(14,17);
   Plot_comp__1->SetBinError(15,19);
   Plot_comp__1->SetBinError(16,23);
   Plot_comp__1->SetBinError(17,28);
   Plot_comp__1->SetBinError(18,28);
   Plot_comp__1->SetBinError(19,28);
   Plot_comp__1->SetEntries(19);

   ci = TColor::GetColor("#000099");
   Plot_comp__1->SetLineColor(ci);
   Plot_comp__1->GetXaxis()->SetLabelFont(42);
   Plot_comp__1->GetXaxis()->SetTitleOffset(1);
   Plot_comp__1->GetXaxis()->SetTitleFont(42);
   Plot_comp__1->GetYaxis()->SetLabelFont(42);
   Plot_comp__1->GetYaxis()->SetTitleFont(42);
   Plot_comp__1->GetZaxis()->SetLabelFont(42);
   Plot_comp__1->GetZaxis()->SetTitleOffset(1);
   Plot_comp__1->GetZaxis()->SetTitleFont(42);
   Plot_comp__1->Draw("hist same");

   toppad->Modified();
   c->cd();
  
// ------------>Primitives in pad: bottompad
   TPad *bottompad = new TPad("bottompad", "bottompad",0.01,0.01,0.99,0.345);
   bottompad->Draw();
   bottompad->cd();
   bottompad->Range(0,0,1,1);
   bottompad->SetFillColor(0);
   bottompad->SetBorderMode(0);
   bottompad->SetBorderSize(2);
   bottompad->SetTickx(1);
   bottompad->SetTicky(1);
   bottompad->SetLeftMargin(0.15);
   bottompad->SetRightMargin(0.05);
   bottompad->SetTopMargin(0.05);
   bottompad->SetBottomMargin(0.3);
   bottompad->SetFrameBorderMode(0);
   
   Double_t _fx2[19] = {
   -90,
   -80,
   -70,
   -60,
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50,
   60,
   70,
   80,
   90};
   Double_t _fy2[19] = {
   0.9602195,
   0.7736626,
   0.8314437,
   0.7592593,
   0.7856341,
   0.7407407,
   0.8641975,
   0.968661,
   1.049383,
   1.037037,
   0.9382716,
   0.968661,
   0.8547009,
   0.8278867,
   0.8187135,
   0.8695652,
   0.978836,
   0.9259259,
   0.8730159};
   graph = new TGraph(19,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph2 = new TH1F("Graph2","",100,-108,108);
   Graph2->SetMinimum(0.6907407);
   Graph2->SetMaximum(1.309259);
   Graph2->SetDirectory(0);
   Graph2->SetStats(0);

   //ci = TColor::GetColor("#000099");
   Graph2->SetLineColor(ci);
   Graph2->GetXaxis()->SetTitle("Angle in deg");
   Graph2->GetXaxis()->SetRange(4,97);
   Graph2->GetXaxis()->SetLabelFont(42);
   Graph2->GetXaxis()->SetLabelSize(0.06);
   Graph2->GetXaxis()->SetTitleSize(0.08);
   Graph2->GetXaxis()->SetTitleOffset(1.1);
   Graph2->GetXaxis()->SetTitleFont(42);
   Graph2->GetYaxis()->SetTitle("Data/MC");
   Graph2->GetYaxis()->SetLabelFont(42);
   Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph2->GetYaxis()->SetTitleSize(0.08);
   Graph2->GetYaxis()->SetTitleOffset(0.45);
   Graph2->GetYaxis()->SetTitleFont(42);
   Graph2->GetZaxis()->SetLabelFont(42);
   Graph2->GetZaxis()->SetTitleOffset(1);
   Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph2);
   
   graph->Draw("ap");
   graph->SetMarkerSize(0.9);
   TLine *line = new TLine(-100,1,100,1);
   line->SetLineStyle(2);
   line->Draw();
   
   Graph2->Draw("same");
   bottompad->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
