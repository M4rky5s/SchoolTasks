#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
void skaitymas(int &n, int Istorija[], string Spalva[], char Veiksmas[]);
int main ()
{

    int n;
    int Istorija[3];
    char m[100];
    string Spalva[20];
    skaitymas(n, Istorija, Spalva, m);
    for(int i=0; i<n; i++)
    {
       cout << Spalva[i] << " ";
    }
    return 0;
}
void skaitymas(int &n, int Istorija[], string Spalva[], char Veiksmas[])
{
    ifstream in ("duomenys.txt");
    in >> n;
    for(int i=0; i<n; i++)
    {
       getline(in, Spalva[i], '*');
    }
}

// Sitam variante nusiskaiciau su String, bet cia toliau nieko negaliu padaryt, nes nuskaite visus duomenis
