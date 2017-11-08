#include "TCanvas.h"
#include <TRandom.h>

void BreitWignerRV() {

  TCanvas *c1 = new TCanvas("c1","demo",200,10,700,500);
  c1->SetFillColor(0);

  //TRandom r;
  //gRandom->SetSeed();
  TF1 *f1 = new TF1("f1","1/((x-91.2)^2+1.25)",70,110);

  TH1F *histo1 = new TH1F("histo1","s",100,50.,150.);
  histo1->SetMarkerStyle(21);
  for (int i=0;i<100000;i++) {
    //float p1=r.Uniform();
    float p1=f1->GetRandom();
    histo1->Fill(p1);
  }
  histo1->Draw("");
  c1->SaveAs("c21.gif");
}
