#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n, x, sald=0, kiek;
    ifstream in ("Duomenys.txt");
    ofstream out ("Rezultatas.txt");
    in >> n;
    while(n>0)
    {
        for(int i; i<=n; i++)
        {
            in >> x;
            sald=sald+x;
            {
                n=n-x;
                kiek = i;
            }
        }
    }

    out <<"Periukui saldainiu uzteks " << kiek << " dienoms. Ir jam liks " << sald << " saldainiai.";
    return 0;
}
