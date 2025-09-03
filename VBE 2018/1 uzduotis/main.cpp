#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Veliaveles{
    char Spalva;  // veliaveles spalva
    int kiekis;   // kiek veliaveliu prikarpyta
};
void skaitymas(int &n, int &zalia, int &geltona, int &raudona);
void Maziausias(int n, int &zalia, int &geltona, int &raudona, int &kiekis);
int main ()
{
    Veliaveles M[100];
    int n;              // kintamasis sukurtas kiekio vienetui nuskaiciuoti
    int zalia=0, geltona=0, raudona=0;      // Kintamieji sukurti nustati tam tikros spalvos kieki
    int kiekis=0;                           // Kintamasis sukurtas surasti kiek veleveliu iseis
    skaitymas(n, zalia, geltona, raudona);
    Maziausias(n, zalia, geltona, raudona, kiekis);
    cout << kiekis << endl;
    cout << "G = " << geltona << endl;
    cout << "Z = " << zalia << endl;
    cout << "R = " << raudona << endl;
    return 0;
}
void skaitymas(int &n, int &zalia, int &geltona, int &raudona) // funkcija nuskaito duomenis is failo ir suskaiciuoja
{
    char splv;      // Spalvos raide
    int skaicius;   // Spalvos kiekis
    ifstream in ("U1.txt");
    in >> n;
    for(int i=0; i<n; i++)
    {
        in >> splv >> skaicius;
        if(splv == 'Z')
        {
            zalia = zalia + skaicius;
        }
        if(splv == 'G')
        {
            geltona = geltona + skaicius;
        }
        if(splv == 'R')
        {
            raudona = raudona + skaicius;
        }
    }
    in.close();
}
void Maziausias(int n, int &zalia, int &geltona, int &raudona, int &kiekis)
{
    int maziausias = 999;
    if(zalia < maziausias)
    {
        maziausias = zalia;
    }
    if(geltona < maziausias)
    {
        maziausias = geltona;
    }
    if(raudona < maziausias)
    {
        maziausias = raudona;
    }
    while(maziausias>0)
    {
        zalia--;
        geltona--;
        raudona--;
        kiekis++;
        maziausias--;
    }
}
