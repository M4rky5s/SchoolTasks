#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void Skaiciavimas(int & a, int & b, int & c);
int main ()
{
    ifstream in ("Duomenys.txt");
    ofstream out ("Rezultatas.txt");
    int n, I, U, R;
    in >> n;
    for(int i=1; i<=n; i++)
    {
        in >> I >> U >> R;
        Skaiciavimas(R, U, I);
        out << I << " " << U << " " << R << endl;
    }
    return 0;
}
// Skaiciavimo funkcija
    void Skaiciavimas(int & R, int & U, int & I)
    {
        if(R==0)
        {
            R = U/I;
        }
        if(U==0)
        {
            U = I*R;
        }
        if(I==0)
        {
            I = U/R;
        }
    }
