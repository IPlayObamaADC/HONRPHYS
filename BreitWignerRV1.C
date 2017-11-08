#include "TCanvas.h"
#include <TRandom.h>

void BreitWignerRV1() {

  double M = 91.2;
  double G = 2.5;
  //cout << M << endl;
  //cout << "hello" << endl;
  TCanvas *c1 = new TCanvas("c1","demo",200,10,700,500);
  c1->SetFillColor(0);

  //TRandom r;
  //gRandom->SetSeed();
  TF1 *f1 = new TF1("f1","1/((x-[0])^2+[1]/2)",M-sqrt(G/2)*63.657,M+sqrt(G/2)*63.657); //F^{-1}(.995)\approx63.657, where F is the cdf of the standard Cauchy distribution. In our case, we have a Cauchy(M,sqrt(G/2)) distribution.
    ;
  f1->SetParameter(0,M);
  f1->SetParameter(1,G);

  TH1F *histo1 = new TH1F("histo1","s",1500,M-sqrt(G/2)*63.657,M+sqrt(G/2)*63.657);
  histo1->SetMarkerStyle(21);
  for (int i=0;i<100000;i++) {
    //float p1=r.Uniform();
    float p1=f1->GetRandom();
    histo1->Fill(p1);
  }
  histo1->Draw("");
  c1->SaveAs("c31.gif");
}
