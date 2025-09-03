#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void skaitymas(int &n, int a[], int &p, int &h);
void Didziausias(int n, int a[], int h, int did);
int main ()
{
    int n, p, h, did=0;
    int a[100];
    skaitymas(n,a,p,h);
    Didziausias(n,a,h,did);
    ofstream out ("Prekes_Rezultatas.txt");
    for(int i=1; i<=n; i++)
    {
        out << h << endl;
        for(int j=0; j<h; j++)
        {
            out << "Masyvas " << a[j];
        }
    }
    return 0;
}
// skaitymas
void skaitymas(int &n, int a[], int &p, int &h)
{
    ifstream in ("Prekes_Duomenys.txt");
    in >> p;
    in >> n;
    for(int i=1; i<=n; i++)
    {
        in >> h;
        for(int j=0; j<h; j++)
        {
            in >> a[j];
        }
    }
}
// Didziausias
void Didziausias(int n, int a[], int h, int did)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<h; j++)
        {
            if(a[j]>did)
            {
                did = a[j];
            }
        }
    }
}
