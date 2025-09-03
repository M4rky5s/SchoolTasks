#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void skaitymas(int &n, int a[], int &d, int &dr);
void isrikiavimas(int n, int a[]);
void rasymas(int n, int m[]);
void salinimas(int &n, int a[], int dr);
int main ()
{
    int n, a[100],d=0, dr=0;
    skaitymas(n,a,d,dr);
    isrikiavimas(n,a);
    int i=0;
    //while(n>i)
   // {
   //    if(a[i]==a[i+1])
    //    salinimas(n,a,i);
    //    else
   //     i++;
   // }
    rasymas(n,a);
    return 0;
}
// skaitymas
void skaitymas(int &n, int a[], int &d, int &dr)
{
    ifstream in {"Duomenys.txt"};
    in >> n;
    for(int i=0; i<n; i++)
    {
        in >> a[i];
        if(a[i]>d)
        {
            d = a[i];
            dr = i;
        }
    }
}
// isrikiavimas
void isrikiavimas(int n, int a[])
{
    int nuo, t;
    for(int i=0; i<n-1; i++)
    {
        nuo = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[nuo])
            nuo = j;
        }
        t = a[nuo];
        a[nuo] = a[i];
        a[i] = t;
    }
}
// rasymas
void rasymas(int n, int m[])
{
    ofstream out ("Rezultatas.txt");
    for(int i=0; i<n; i++)
    {
        out << m[i] << " ";
    }
}
// salinimas
void salinimas(int &n, int a[], int dr)
{
    for(int i=dr; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}
