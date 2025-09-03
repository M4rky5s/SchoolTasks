#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void skaitymas(int &n, int a[], int &d, int &dr);
void rikiavimas(int n, int a[]);
void salinimas(int &n, int a[], int dr, int L[]);
int main ()
{
    int n, k, dr=0, d=0;
    int A[100], L[100];
    skaitymas(n,A,d,dr);
    rikiavimas(n,A);
    int i=0;
    while(n>i)
    {
        if(A[i]==A[i+1])
        salinimas(n,A,i,L);
        else
        i++;
    }
    ofstream out ("ZaisluKolekcija_Rez.txt");
    for(int i=0; i<n; i++)
    {
        out << A[i] << " ";
    }
    return 0;
}
// skaitymas
void skaitymas(int &n, int a[], int &d, int &dr)
{
    ifstream in ("ZaisluKolekcija_Duom.txt");
    in >> n;
    for(int i=0; i<n; i++)
    {
        in >> a[i];
        if(a[i] > d)
        {
            d = a[i];
            dr = i;
        }
    }
}
// rikiavimas
void rikiavimas(int n, int a[])
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
// salinimas
void salinimas(int &n, int a[], int dr, int L[])
{
    for(int i=dr; i<n-1; i++)
    {
        if(a[i] = a[i+1])
        {
            L[i] = a[i];
        }
    }
    n--;
}
