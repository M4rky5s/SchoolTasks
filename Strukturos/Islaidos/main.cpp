#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Degaline{
    string pav; // degalines pavadinimas
    double bk; // Benzino litro kaina degalineje
    double dk; // Duju litro kaina degalineje
};
void skaitymas(int &n, double &b, double &d, double &m, Degaline M[]);
void skaiciavimas(int n, double b, double d, double m, Degaline M[], double Disl[], double Bisl[]);
void atspausdinimas(int n, double Disl[], double Bisl[], Degaline M[]);
int main ()
{
    double b, d, m;
    double Disl[5], Bisl[5]; // Benzino ir Dyzelino islaidu masyvai
    int n;
    Degaline M[10];
    skaitymas(n, b, d, m, M);
    skaiciavimas(n, b, d, m, M, Disl, Bisl);
    atspausdinimas(n, Disl, Bisl, M);
    return 0;
}
void skaitymas(int &n, double &b, double &d, double &m, Degaline M[]) // Nuskaito duomenis is failo
{
    ifstream in ("duomenys.txt");
    in >> b >> d >> m >> n;
    for(int i=0; i<n; i++)
    {
        in >> M[i].pav;
        in.ignore();
        in >> M[i].bk >> M[i].dk;
    }
}
void skaiciavimas(int n, double b, double d, double m, Degaline M[], double Disl[], double Bisl[]) // Fubncija suskaiciuoja keliones islaidas
{
    m = m/100;
    for(int i=0; i<n; i++)
    {
        Disl[i] = b * m * M[i].bk; // apskaiciuoja Dyzelino islaidas
        Bisl[i] = d * m * M[i].dk; // apskaiciuoja Benzino islaidas
    }
}
void atspausdinimas(int n, double Disl[], double Bisl[], Degaline M[]) // spausdina atsakyma i Rez.txt faila
{
    ofstream out ("Rez.txt");
    for(int i=0; i<n; i++)
    {
        out << M[i].pav << right << setw(10) << " " << Disl[i] << fixed << setprecision(2) << " " << Bisl[i] << fixed << setprecision(2) << endl;
    }
}
