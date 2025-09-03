#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
void skaitymas(int &n, int Istorija[], char Spalva[], char Veiksmas[]);
int main ()
{

    int n;
    int Istorija[3];
    char m[100];
    char Spalva[20];
    skaitymas(n, Istorija, Spalva, m);
    for(int i=0; i<n; i++)
    {
       cout << Spalva[i] << " ";
    }
    return 0;
}
void skaitymas(int &n, int Istorija[], char Spalva[], char Veiksmas[])
{
    ifstream in ("duomenys.txt");
    in >> n;
    in.ignore('\n');
    for(int i=0; i<n; i++)
    {
        in.get(Spalva, 20);

    }
}

// Sitam pavyzdyje nieko gero nepadariau, nes nemoku as cia su tuo char normaliai nuskaityt, man nuskaito tik kazkokius keistus simbolius
