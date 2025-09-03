#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Mokiniai{
    int pazymys;
    string Vardas;
    double vidurkis;
};
void skaitymas(int &n, int &p, double &v, Mokiniai M[], double suma);
void PirmunuPaieska(int n, Mokiniai M[], int &pirmunai, double v);
int main ()
{
    int n, p, pirmunai=0;
    double v, suma;
    Mokiniai M[20];
    skaitymas(n, p, v, M, suma);
    PirmunuPaieska(n, M, pirmunai, v);
    ofstream out ("Rezultatas.txt");
    for(int i=0; i<n; i++)
    {
        out << M[i].Vardas;
        out << M[i].vidurkis << fixed << setprecision(1) << endl;
    }
    out << pirmunai;
    return 0;
}
void skaitymas(int &n, int &p, double &v, Mokiniai M[], double suma)
{
    char vardas[20];
    ifstream in ("duomenys.txt");
    in >> n;
    in >> p;
    in >> v;
    in.ignore();
    for(int i=0; i<n; i++)
    {
        in.get(vardas, 20);
        in.ignore();
        M[i].Vardas = vardas;
        for(int j=0; j<p; j++)
        {
            in >> M[j].pazymys;
            suma = suma + M[j].pazymys; // susiradau suma kiekvieno mokinio pazymiu, tam kad susiskaiciuociau ju vidurky
        }
        M[i].vidurkis = suma/p; // suskaiciavau kiekvieno mokinio pazymiu vidurky
        suma =0;
        in.ignore();
    }
}
void PirmunuPaieska(int n, Mokiniai M[], int &pirmunai, double v)
{
    for(int i=0; i<n; i++)
    {
        if(M[i].vidurkis >= v)
            pirmunai = pirmunai +1;
    }
}
