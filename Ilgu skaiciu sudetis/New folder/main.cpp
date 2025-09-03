#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void skaitymas(int &kiek, int &kiek2, char Skaiciai[]);
int main ()
{
    int kiek, kiek2;
    char Skaiciai[100];
    skaitymas(kiek, kiek2, Skaiciai);
    for(int i=0; i<kiek; i++)
    {
        for(int j=0; j<kiek2; j++)
        {
            cout << Skaiciai[i];
        }
    }
    return 0;
}
void skaitymas(int &kiek, int &kiek2, char Skaiciai[])
{
    ifstream in ("duomenys.txt");
    in >> kiek;
    for(int i=0; i<kiek; i++)
    {
        in >> kiek2;
        for(int j=0; j<kiek2; j++)
        {
            in.get(Skaiciai, kiek2);
            in.ignore();
        }
    }
}
