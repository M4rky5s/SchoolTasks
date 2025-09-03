#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void skaitymas(int &n, string vardas[], int rezult[]);
int main ()
{
    int n=0;
    string vardas[10];
    int rezult[10];
    skaitymas(n, vardas, rezult);
    for(int i=0; i<n; i++)
    {
        cout << n << " " << vardas[i] << " " << rezult[i] << endl;
    }
    return 0;
}
void skaitymas(int &n, string vardas[], int rezult[])
{
    ifstream in ("duomenys.txt");
       while(!in.eof())
       {
        char m[11];
        in.get(m,11);
        vardas[n]=m;
        in >> rezult[n];
        n++;
        in.ignore(10,'\n');
    }
}
