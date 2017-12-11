#define ana_cxx
#include "ana.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include "TTree.h"

void ana::Loop()
{
  //TCanvas *c1 = new TCanvas("c1","demo",200,10,700,500);

    if (fChain == 0) return;

    TTree t1("t1","a simple Tree");

    TFile* output = TFile::Open("Dielectron_Data.root", "RECREATE"); // "RECREATE" would produce a new root file with name Dielectron_MC.root every time you run the code

    // Declare histograms
    TH1F* el1_eta = new TH1F("el1_eta", "Pseudorapidity of the most energetic electron candidate"
    , 100, -4, 4);
    TH1F* el2_eta = new TH1F("el2_eta", "Pseudorapidity of the second most energetic electron candidate"
    , 100, -4, 4);

    TH1F* el1_pt = new TH1F("el1_pt", "pT of the most energetic electron candidate", 100, 0, 200);
    TH1F* el2_pt = new TH1F("el2_pt", "pT of the second most energetic electron candidate", 100, 0, 200);

    TH1F* Z_ee = new TH1F("Z_ee", "Di-electron candidate invariant mass", 200, 0, 200);

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
    // note that if we wanted to look at only a subset of a very large data set
    // we could change change nentries to a fixed number in the line above
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

       // Fill histograms (note that the electrons are already ordered in pT)
      el1_eta->Fill(f_lept1_eta);
      el2_eta->Fill(f_lept2_eta);
      el1_pt->Fill(f_lept1_pt);
      el2_pt->Fill(f_lept2_pt);
      
      TLorentzVector el1, el2;
      el1.SetPtEtaPhiM(f_lept1_pt, f_lept1_eta, f_lept1_phi, 0.0);
      el2.SetPtEtaPhiM(f_lept2_pt, f_lept2_eta, f_lept2_phi, 0.0);
      TLorentzVector zCandidate = el1 + el2;
      Z_ee->Fill(zCandidate.M());
      
      t1.Fill();

    } //end event loop

   el1_eta->Write();
   el2_eta->Write();
   el1_pt->Write();
   el2_pt->Write();
   Z_ee->Write();
   output->Close();
   //Z_ee->Draw();
   //c1->Print("mee_nocuts.gif");
}  //end ana::Loop()
