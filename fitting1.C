{
  gRandom->SetSeed();
  
  gROOT->Reset();
  gROOT->SetStyle("Plain");

  gStyle->SetOptStat(111111);
  gStyle->SetOptFit(111111);

  TCanvas *c1 = new TCanvas("c1","Example with Formula",200,10,700,500);
  c1->SetFillColor(0);
  c1->SetBorderMode(0);
  c1->SetBorderSize(1);

  TH1F *histo1 = new TH1F("histo1","Data",5,0.,10.);

  for (int i=0;i<0;i++) {
    float aa=gRandom->Gaus(5.,1.);
    histo1->Fill(aa);
  }

  histo1->Fit("gaus");
  histo1->SetLineColor(2);
  histo1->Draw("");

  c1->Update();
  c1->SaveAs("c08.gif");
}
