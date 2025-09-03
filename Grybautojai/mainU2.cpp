#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
struct Grybautojai{
    string Vardas;
    int Baravykai;
    int Raudonikiai;
    int Lepsiai;
    int SumaB;
    int SumaR;
    int SumaL;
};
void skaitymas(int &n, Grybautojai M[], int &d);
void Geriausias(int n, Grybautojai M[], string &Geriausias, int &didz);
void Rezultatas(int n, Grybautojai M[], int didz, string geriausias);
int main ()
{
    Grybautojai M[100];
    int n, d, didz=0;
    string geriausias;
    skaitymas(n, M, d);
    Geriausias(n, M, geriausias, didz);
    Rezultatas(n, M, didz, geriausias);
    return 0;
}
void skaitymas(int &n, Grybautojai M[], int &d)
{
    ifstream in ("duomenysU2.txt");
    char vardas[15];
    int suma1=0, suma2=0, suma3=0; // susikuriau kintamuosius, kad butu lengviau susirasti visu grybautoju grybu suma
    in >> n;
    for(int i=0; i<n; i++)
    {
        in.ignore();
        in.get(vardas, 15);
        in >> d;
        M[i].Vardas = vardas;
        for(int j=0; j<d; j++)
        {
            in >> M[j].Baravykai >> M[j].Raudonikiai >> M[j].Lepsiai;
            suma1 = suma1 + M[j].Baravykai;
            suma2 = suma2 + M[j].Raudonikiai;
            suma3 = suma3 + M[j].Lepsiai; // susiradau kiekvienos grybu rusies sumas
        }
        M[i].SumaB = suma1;
        M[i].SumaR = suma2;
        M[i].SumaL = suma3;
        suma1=0; suma2=0; suma3=0; // nusinulinau sumas, kad galeciau suskaiciuot kito grybautojo grubu suma
    }
}
void Geriausias(int n, Grybautojai M[], string &Geriausias, int &didz)
{
    int suma[100];
    for(int i=0; i<n; i++)
    {
        suma[i] = M[i].SumaB + M[i].SumaR + M[i].SumaL;
        for(int j=1; j<n-1; j++)
        {
            suma[j]= M[j].SumaB + M[j].SumaR + M[j].SumaL;
            if(suma[i] > suma[j]) // susiradau didziausia suma ir geriausia grybautoja
            {
                Geriausias = M[i].Vardas;
                didz = suma[i];
            }
            else if(suma[i] < suma[j])
            {
                Geriausias = M[j].Vardas;
                didz = suma[j];
            }
        }
    }
}
void Rezultatas(int n, Grybautojai M[], int didz, string geriausias)
{
    ofstream out ("RezultatasU2.txt");
    for(int i=0; i<n; i++)
    {
        out << M[i].Vardas << " " << M[i].SumaB << " " << M[i].SumaR << " " << M[i].SumaL << endl;
    }
    out << geriausias << " " << didz;
}
