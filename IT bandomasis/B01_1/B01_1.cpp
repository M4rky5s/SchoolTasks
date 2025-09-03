#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void Skaitymas(int &x, int &ugis, int &suma);
int Vidurkis(int Vidurkis, int x, int suma);
void Atrinkimas(int Vidurkis, int x, int ugis, int &atrinkti);
int main ()
{
    ofstream out ("U1rez.txt");
    int x;
    int ugis, vidurkis=0, suma=0, atrinkti=0;;
    Skaitymas(x, ugis, suma);
    vidurkis = Vidurkis(vidurkis, x, suma);
    Atrinkimas(vidurkis, x, ugis, atrinkti);
    out << vidurkis << " " << atrinkti;
    out.close();
    return 0;
}
void Skaitymas(int &x, int &ugis, int &suma) // Funkcija sukurta nuskaityti duomenis is failo ir tuo paciu suskaiciuoti visu duomenu suma
{
    ifstream in ("U1.txt");
    in >> x;
    for(int i=1; i<=x; i++)
    {
        in >> ugis;
        suma += ugis;
    }
    in.close();
}
int Vidurkis(int Vidurkis, int x, int suma) // Funkcija, kuri skaiciuoja mokiniu ugio vidurki
{
    return Vidurkis = suma/x;
}
void Atrinkimas(int Vidurkis, int x, int ugis, int &atrinkti) // Atrenka mokinius, kurie yra aukstensi uz vidurki
{
    ifstream in ("U1.txt");
    for(int i=1; i<=x; i++)
    {
        in.ignore(); // ignoruoja pirma failo eilute, kurioje parasytas mokiniu kiekis
        in >> ugis;
        if(ugis > Vidurkis)
        {
            atrinkti++;
        }
    }
    in.close();
}
