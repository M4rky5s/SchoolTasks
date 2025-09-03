#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void procedura1(int sk1, int sk2, int &kiek, int &kiek2);
void procedura(int sk1, int sk2, int kiek, int kiek2, int &kuris);
int main ()
{
    ifstream in ("duomenys.txt");
    ofstream out ("rezultatas.txt");
    int n, sk1, sk2, kiek, kiek2, kuris;
    in >> n;
    for(int i=1; i<=n; i++)
    {
        kiek = 0;
        kiek2 = 0;
        kuris = 0;
        in >> sk1 >> sk2;
        procedura1(sk1, sk2, kiek, kiek2);
        procedura(sk1, sk2, kiek, kiek2, kuris);
        cout << kiek << " " << kiek2 << " " << kuris << endl;
    }
    return 0;
}
void procedura1(int sk1, int sk2, int &kiek, int &kiek2)
{
    for(int i=1; i<=sk1; i++)
    {
        if(sk1 % i == 0)
        {
            kiek = kiek +1;
        }
    }
    for(int i=1; i<=sk2; i++)
    {
        if(sk2 % i == 0)
        {
            kiek2 = kiek2 +1;
        }
    }
}
void procedura(int sk1, int sk2, int kiek, int kiek2, int &kuris)
{
    if(kiek > kiek2)
    {
        kuris = sk1;
    }
    else kuris = sk2;
}
