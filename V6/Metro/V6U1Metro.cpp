#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Stotis{
    int StotiesNR;
    int DienosNR;
    int IejKeleivSkaic;
    int IsejKeleivSkaic;
};
void skaitymas(int kiek, Stotis M[], int m);
void rikiavimas(Stotis M[], int m);
void Kiekis(int m, Stotis M[], int kiekis);
void salinimas(Stotis M[], int m);
int main ()
{
    int kiek, m;
    Stotis M[100];
    skaitymas(kiek, M, m);
    Kiekis(m, M, kiek);
    cout << kiek;
    return 0;
}
void skaitymas(int kiek, Stotis M[], int m)
{
    ifstream in ("U1.txt");
    in >> m;
    for(int i=0; i<m; i++)
    {
        in >> M[i].StotiesNR >> M[i].DienosNR >> M[i].IejKeleivSkaic >> M[i].IsejKeleivSkaic;
    }
}
//void rikiavimas(Stotis M[], int m)
//{
//    bool rikiuoti = true;
 //   while(rikiuoti)
 //   {
 //       rikiuoti = false;
 //       for(int i=0; i<)
 //       {
//
  //      }
  //  }
//}
void Kiekis(int m, Stotis M[], int kiekis)
{
    for(int i=0; i<m; i++)
    {
        for(int j=i; j<m-1; j++)
        {
            if(M[i].StotiesNR == M[j].StotiesNR)
            {
                kiekis++;
                salinimas(M[j].StotiesNR, m);
            }
        }
    }
}
void salinimas(Stotis M[], int m)
{
    for(int i=1; i<m-1; i++)
    {
        M[i] = M[i+1];
        m = m-1;
    }
}
