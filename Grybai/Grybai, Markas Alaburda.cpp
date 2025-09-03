#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
void DerlingiausiaDiena(int n, int a[], int b[], double c[], int &dm, int &dd);
void DerlingiausiaBaravyku(int n, int a[], int b[], double c[], int f[], int &d, int &e);
void DerlingiausiaRaudonvirsiu(int n, int a[], int b[], int c[], int &d, int &e);
int main ()
{
    int M[100];
    int D[100];
    double GM[100];
    int Bar[100], Raud[100], n, dd, dm, mb, db, mr, dr;
    ifstream in ("GrybaiDuomenys.txt");
    ofstream out ("GrybaiRezultatas.txt");
    in >> n;
    for(int i=0; i<n; i++)
    {
        in >> M[i] >> D[i] >> GM[i] >> Bar[i] >> Raud[i];
    }
    DerlingiausiaDiena(n,M,D,GM,dm,dd);
    out << "Derlingiausia diena: " << dm << " " << dd << endl;
    DerlingiausiaBaravyku(n,M,D,GM,Bar,mb,db);
    out << "Derlingiausia baravyku diena: " << mb << " " << db << endl;
    DerlingiausiaRaudonvirsiu(n,M,D,Raud,mr,dr);
    out << "Derlingiausia raudonvirsiu diena: " << mr << " " << dr << endl;
    return 0;
}
// Derlingiausios dienos funkcija
void DerlingiausiaDiena(int n, int a[], int b[], double c[], int &dm, int &dd)
{
    double l=0;
    c[0] = l;
    for(int i=1; i<n; i++)
    {
        if(c[i]>l)
        {
            l = c[i];
            dm = a[i];
            dd = b[i];
        }
    }
}

//Derlingiausia baravyku dienos funkcija
void DerlingiausiaBaravyku(int n, int a[], int b[], double c[], int f[], int &d, int &e)
    {
    int didz = 0;
    for(int i=0; i<n; i++)
    {
        if(f[i]>didz)
        {
            didz = f[i];
            d = a[i];
            e = b[i];
        }
    }
}
//Derlingiausia raudonvirsiu dienos funkcija
void DerlingiausiaRaudonvirsiu(int n, int a[], int b[], int c[], int &d, int &e)
{
    int didz = 0;
    for(int i=0; i<n; i++)
    {
        if(c[i]>didz)
        {
            didz = c[i];
            d = a[i];
            e = b[i];
        }
    }
}
