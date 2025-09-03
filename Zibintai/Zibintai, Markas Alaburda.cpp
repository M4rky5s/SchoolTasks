#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void Skaitymas(int &n, int k, int a[]);
int ZibintoSvietimas(int n, int k, int a[]);
int main ()
{
    int n, k;
    int M[100];
    Skaitymas(n,k,M);
    ZibintoSvietimas(n,k,M);
    ofstream out ("ZibintaiRezultatas.txt");
    out << ZibintoSvietimas;

    return 0;
}
//Skaitymo funkcija
void Skaitymas(int &n, int k, int a[])
{
    ifstream in ("ZibintaiDuomenys.txt");
    in >> n >> k;
    for(int i=0; i<n; i++)
    {
        in >> a[i];
    }
}
//Zibinto svietimo funkcija 1
int ZibintoSvietimas(int n, int k, int a[])
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            return 0;
        }
        else if(a[i]==1)
        {
            return 1;
        }
    }
}
