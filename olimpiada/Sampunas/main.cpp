#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int k, N, Galva, Plauta;
    int D[6];
    ifstream in ("duomenys.txt");
    ofstream out ("rezultatas.txt");
    in >> N >> k;
    for(int i=0; i<k; i++)
    {
        in >> D[i];
    }
        Galva = 1;
        Plauta = 1;
        if(Galva = 1)
        {
            out << Galva << ". " << "Galva plaus" << endl;
        }
    for(int i=2; i<=N; i++)
    {
        Plauta++;
        if(i == D[i-2] && i == Plauta)
        {
            out << i << ". " << "Galva plaus" << endl;
        }
        if(i != D[i-2])
        {
            out << i << ". " << "Galvos neplaus" << endl;
        }
    }
    in.close();
    out.close();
    return 0;
}
