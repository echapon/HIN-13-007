#define NF 31

TGraph* test(const char* filename){
   ifstream file(filename);
   double x[NF],y[NF];
   file >> x[0] >> x[0] >> x[0];
   for (int i=0; i<NF; i++)
   {
      x[i] = i+1; 
      int j;
      if (i==0) j=0;
      else if (i>0 && (i%2)==0) j=(NF-1)/2+(i/2);
      else j=(i+1)/2;
      cout << j+1 << endl;
      file >> y[j];
   }
   for (int i=1; i<NF; i++)
      y[i] = y[i]-y[0];

   y[0]=0;

   TGraph *gr = new TGraph(NF,x,y);
   gr->Draw();

   return gr;
}
