#include "TCanvas.h"
#include <TRandom.h>

void survivingParticles1() {

  double x_0 = 100; //distance in m
  double m_0 = .106; //mass in GeV
  double tau_0 = 2.20*pow(10.,-6.); //proper lifetime in s
  
  TCanvas *c1 = new TCanvas("c1","demo",200,10,700,500);
  c1->SetFillColor(0);
  TF1 *f1 = new TF1("f1","exp(-[0]*[1]*[3]/(sqrt(pow(x,2)-pow([1],2)*pow([3],4))*[2]))",m_0*pow(3*pow(10,8),2),m_0*pow(9*pow(10,8),2));
  f1->SetParameter(0,x_0);
  f1->SetParameter(1,m_0);
  f1->SetParameter(2,tau_0);
  f1->SetParameter(3,3.0*pow(10,8));
  f1->Draw();
  f1->GetHistogram()->GetYaxis()->SetTitle("Probability");
  f1->GetHistogram()->GetXaxis()->SetTitle("Energy (J)");
  c1->Modified();  
  c1->SaveAs("c31.gif");

  /*TF1 *f2 = new TF1("f2","exp(-[0]*sqrt(1-pow(x,2))/(x*[2]*[3]))",0,1);
  f2->SetParameter(0,x_0);
  f2->SetParameter(1,m_0);
  f2->SetParameter(2,tau_0);
  f2->SetParameter(3,3.0*pow(10,8));
  f2->Draw();
  c1->SaveAs("c32.gif");*/

  /*TF1 *f3 = new TF1("f3","exp(-[0]/(x*[2]))",1,x_0/tau_0);
  f3->SetParameter(0,x_0);
  f3->SetParameter(1,m_0);
  f3->SetParameter(2,tau_0);
  f3->Draw();
  c1->SaveAs("c33.gif");*/
}
