#define N_CT10 52
#define N_DSSZ 50

#include <fstream>

int newi(int i)
{
   if (i<25) return i*2;
   else return (i-25)*2+1;
}

void translate()
{
   ifstream fp("WP-CMS-CT-DSSZ.dat");
   ofstream fout("wplus_DSSZ.dat");

   int i=0;
   double val=0.;
   double var[N_DSSZ];

   while (fp.good())
   {
      fp >> val;
      if (!fp.good()) break;

      if (i==0) fout << val+0.465-0.25 << " " << val+0.465+0.25 << " " << val+0.465 << " ";
      if (i==1) for (int j=0; j<N_CT10+1; j++)
         {
            fout << val << " ";
         }
      if (i>1) {
         //cout << i-2 << " " << newi(i-2) << endl; 
         var[newi(i-2)] = val;
      }
      if (i==N_DSSZ+1) for (int j=0; j<N_DSSZ; j++)
      {
         fout << var[j] << " ";
      }
      i++;
      if (i>N_DSSZ+1) {i=0; fout << endl;}
   }
}
