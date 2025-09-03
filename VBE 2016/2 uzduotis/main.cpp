#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Sportas{
    string Pratimas;
    int PratimoKiek;
};
void skaitymas(int &n, Sportas M[]);
void Sudetis(int n, Sportas M[], int &SumPris, int&SumAts, int &SumAtsis);
void Salinimas(int n, Sportas M);
int main ()
{
    int n;
    int SumPris=0, SumAts=0, SumAtsis=0;
    Sportas M[20];
    skaitymas(n, M);
    Sudetis(n, M, SumPris, SumAts, SumAtsis);

    return 0;
}
void skaitymas(int &n, Sportas M[])
{
    char Zodis[20];
    ifstream in ("U2.txt");
    in >> n;
    in.ignore();
    for(int i=0; i<n; i++)
    {
        in.get(Zodis, 20);
        in.ignore();
        M[i].Pratimas = Zodis;
        in >> M[i].PratimoKiek;
        in.ignore();
    }
}
void Sudetis(int n, Sportas M[], int &SumPris, int &SumAts, int &SumAtsis)
{
    int kintamasis;
    int f;
    for(int i=0; i<n; i++)
    {
        SumPris=0;
        f=n;
        for(int j=i; j<n-1; j++)
        {
            if(M[i].Pratimas == M[j].Pratimas)
            {
                SumPris = SumPris + M[j].PratimoKiek;
                for(int z=1; z<f-1; z++)
                {
                    M[j].Pratimas = M[j+1].Pratimas;
                    f= f-1;
                }
            }
        }
        cout << SumPris << endl;
    }
}
