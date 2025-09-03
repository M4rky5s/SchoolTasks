#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void isrikiavimas(int n, int a[]);
void salinimas(int &n, int M[], int dr);
int main ()
{
    int n, M[10], dr=0;
    ifstream in ("duomenys.txt");
    in >> n;
    for(int i=0; i<n; i++)
    {
        in >> M[i];
    }
    isrikiavimas(n, M);
    for(int i=0; i<n; i++)
    {
        cout << M[i];
        salinimas(n, M, dr);
    }
    return 0;
}
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
void salinimas(int &n, int M[], int dr)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-1; j++)
        {
            if(M[i] == M[j])
            {
                n--;
            }
        }
    }
}
