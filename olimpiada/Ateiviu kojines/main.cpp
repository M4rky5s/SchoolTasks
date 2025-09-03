#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void skaitymas (int &k, int &s, int n[]);
int main ()
{
    int k, s;
    int n[100];
    skaitymas(k, s, n);

    return 0;
}
void skaitymas (int &k, int &s, int n[])
{
    ifstream in ("duomenys.txt");
    in >> k >> s;
    for(int i=0; i<s; i++)
    {
        in >> n[i];
    }
in.close();
}
void Radimas(int s, int k, int n[])
{
    int kiekis =0;
    for(int i=0; i<s; i++)
    {
        while(n[i] > 0)
        {
            if(n[i]<k)
            {
                k == n[i];
                n[i] = 0;
                cout << n[i];
            }
        }
    }
}
