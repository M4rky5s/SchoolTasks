#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
struct JaninosUzrasai{
    string Takas; // Takelio pavadinimo kintamasis
    int Laikas; // Laiko kintamasis
};
void Skaitymas(int &n, JaninosUzrasai M[]);
void Rikiavimas(int n, JaninosUzrasai M[]);
int main ()
{
    ofstream out ("U2rez.txt");
    int n;
    JaninosUzrasai M[100];
    Skaitymas(n, M);
    Rikiavimas(n, M);
    for(int i=0; i<n; i++)
    {
        out << M[i].Takas << " " << M[i].Laikas << endl;
    }
    return 0;
}
void Skaitymas(int &n, JaninosUzrasai M[]) // Funkcija sukurta skaitymui is failo
{
    ifstream in ("U2.txt");
    char pav[21]; // papildomas masyvas nuskaityti taku pavadinimams
    in >> n;
    in.ignore();
    for(int i=0; i<n; i++)
    {
        in.get(pav, 21);
        M[i].Takas = pav;
        in >> M[i].Laikas;
        in.ignore();
    }
}
void Rikiavimas(int n, JaninosUzrasai M[])
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(M[i].Laikas < M[j].Laikas)
            {
                swap(M[i].Takas,M[j].Takas);
                swap(M[i].Laikas,M[j].Laikas);
            }
        }
    }
}
void Suma(int n, JaninosUzrasai M[], int suma1, int suma2)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {

        }
    }
}
