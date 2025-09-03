#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int t, n, kiek=0;
    ifstream in ("Duomenys.txt");
    ofstream out ("Rezultatas.txt");
    in >> t;
    while(t>0)
    {
        for(int i; i<=t;i++)
        {
            in >> n;
            if(i%2==0)
                {
                     t=t-n;
                }
            else
            {
                t=t-2*n;
            }
            kiek = kiek + 1;
        }
    }
    out <<"Keliauti bus galima " << kiek << " dienu/(as)";
    return 0;
}
