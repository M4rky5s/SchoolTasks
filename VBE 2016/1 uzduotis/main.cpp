#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void Didziausias(int &x, int &didz);
void Lengvesnes(int x, int didz, int &kiek);
int main ()
{
    int x, didz=0, kiekis=0;
    Didziausias(x, didz);
    Lengvesnes(x, didz, kiekis);
    ofstream out ("U1rez.txt");
    out << didz << " " << kiekis;
    return 0;
}
void Didziausias(int &x, int &didz) // Funkcija sukurta nustatyti didziausiam kuprines svoriui, bet ir tuo paciu nusiskaito mokiniu kupriniu kieky
{
    int sk;
    ifstream in ("U1.txt");
    in >> x;
    for(int i=1; i<=x; i++)
    {
        in >> sk;
        if(sk > didz)
        {
            didz = sk;
        }
    }
    in.close();
}
void Lengvesnes(int x, int didz, int &kiek) // kiekio kintamasis sukurtas grazinti lengvesniu kupriniu kiekiui
{
    int sk;
    ifstream in ("U1.txt");
    in >> x;
    for(int i=1; i<=x; i++)
    {
        in >> sk;
        if(didz >= sk*2)
        {
            kiek = kiek +1;
        }
    }
    in.close();
}
