#include <iostream>
#include "TFile.h"
#include "TTree.h"

void pulls(const char *filename, int nmembers=52)
{
   ifstream file(filename);
   TFile *tf = new TFile("pulls.root","RECREATE");
   TTree *tr = new TTree("tree","tree");

   int idx; float pull, val0, val;
   tr->Branch("idx",&idx,"idx/I");
   tr->Branch("pull",&pull,"pull/F");

   for (idx=0; idx<10; idx++)
   {
      file >> val0 >> val0 >> val0 >> val0;

      for (int j=0; j<nmembers; j++)
      {
         file >> val;
         pull = (val-val0)/val0;
         tr->Fill();
      }
   }

   tf->Write();
   tf->Close();
}
