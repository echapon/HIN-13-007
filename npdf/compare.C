TTree* compare(const char* file1, const char* file2)
{
   ifstream f1(file1);
   ifstream f2(file2);

   TTree* tr = new TTree("toto","toto");
   double val1, val2;
   tr->Branch("val1",&val1,"val1/D");
   tr->Branch("val2",&val2,"val2/D");

   while (f1.good() && f2.good())
   {
      f1 >> val1;
      f2 >> val2;
      if (!f1.good() || !f2.good()) break;
      tr->Fill();
   }

   return tr;
}
