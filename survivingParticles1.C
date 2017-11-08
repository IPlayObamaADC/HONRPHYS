#include "TCanvas.h"
#include <TRandom.h>

void survivingParticles1() {

  double x_0 = 100; //distance in m
  double m_0 = .106; //mass in GeV
  double tau_0 = 2.20*pow(10.,-6.); //proper lifetime in s
  //cout << M << endl;
  //cout << "hello" << endl;
  TCanvas *c1 = new TCanvas("c1","demo",200,10,700,500);
  c1->SetFillColor(0);

  //TRandom r;
  //gRandom->SetSeed();
  cout << -exp(-1.88*pow(10.,26.)*x_0*m_0/(sqrt(pow(.2,2)-pow(m_0,2))*tau_0)) << endl;
  TF1 *f1 = new TF1("f1","exp(-[0]*[1]/(sqrt(pow(x,2)-pow([1],2))*[2]))",m_0,300000*m_0); //exp(-1.88*pow(10,26)[0]*[1]/(sqrt(pow(x,2)-pow([1],2))*[2]))
  f1->SetMaximum(pow(10,-1000));//exp(-1.88*pow(10.,26.)*x_0*m_0/(sqrt(pow(2*m_0,2.)-pow(m_0,2.))*tau_0))
  f1->SetParameter(0,x_0);
  f1->SetParameter(1,m_0);
  f1->SetParameter(2,tau_0);
  f1->Draw();
  c1->SaveAs("c31.gif");

  /////
  //delete c1;
  //*c1 = new TCanvas("c1","demo",200,10,700,500);
  //c1->SetFillColor(0);

  //TRandom r;
  //gRandom->SetSeed();
  //cout << -exp(-1.88*pow(10.,26.)*x_0*m_0/(beta*tau_0)) << endl;
  /*TF1 *f2 = new TF1("f2","exp(-3.34*pow(10.,-9)*[0]*sqrt(1-pow(x,2))/(x*[2]))",0,1); //exp(-1.88*pow(10,26)[0]*[1]/(sqrt(pow(x,2)-pow([1],2))*[2]))
  f2->SetParameter(0,x_0);
  f2->SetParameter(1,m_0);
  f2->SetParameter(2,tau_0);
  f2->Draw();
  c1->SaveAs("c32.gif");*/

  /*TF1 *f3 = new TF1("f3","exp(-[0]/(x*[2]))",1,x_0/tau_0); //exp(-1.88*pow(10,26)[0]*[1]/(sqrt(pow(x,2)-pow([1],2))*[2]))
  f3->SetParameter(0,x_0);
  f3->SetParameter(1,m_0);
  f3->SetParameter(2,tau_0);
  f3->Draw();
  c1->SaveAs("c33.gif");*/
}
