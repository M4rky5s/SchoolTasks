#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void Skaitymas(int &n, int MKpirstine[], int MDpirstine[], int VKpirstine[], int VDpirstine[]);
int Poros(int Kaire[], int Desine[]);
int Liekana(int Kaire[], int Desine[]);
int main ()
{
    int n, MKpirstine[100], MDpirstine[100], VKpirstine[100], VDpirstine[100], poros =0;
    Skaitymas(n, MKpirstine, MDpirstine, VKpirstine, VDpirstine);
    ofstream out ("U1rez.txt");
    if(Poros(MKpirstine, MDpirstine) > 0)
        out << Poros(MKpirstine, MDpirstine) << endl;
    else
        out << 0;
    if(Poros(VKpirstine, VDpirstine) > 0)
        out << Poros(VKpirstine, VDpirstine) << endl;
    else
        out << 0;
    if(Liekana(MKpirstine, MDpirstine) > 0)
        out << Liekana(MKpirstine, MDpirstine) << endl;
    else
        out << 0;
    if(Liekana(VKpirstine, VDpirstine) > 0)
        out << Liekana(VKpirstine, VDpirstine) << endl;
    else
        out << 0;
    out.close();
    return 0;
}
void Skaitymas(int &n, int MKpirstine[], int MDpirstine[], int VKpirstine[], int VDpirstine[])
{
    int a, b, c;
    ifstream in ("U1.txt");
    for(int i=0; i<100; i++)
    {
        MKpirstine[i]=0;
        MDpirstine[i]=0;
        VKpirstine[i]=0;
        VDpirstine[i]=0;
    }
    in >> n;
    for(int i=0; i<n; i++)
    {
        in >> a >> b >> c;
        if(a==3 && b==1) VKpirstine[c]++;
        if(a==3 && b==2) VDpirstine[c]++;
        if(a==2 && b==1) MKpirstine[c]++;
        if(a==2 && b==2) MDpirstine[c]++;
    }
    in.close();
}
int Poros(int Kaire[], int Desine[])
{
    int pora=0;
    for(int i=0; i<100; i++)
    {
        if((Kaire[i] !=0 && Desine[i] !=0) && (Kaire[i] > Desine[i])) pora= pora + Desine[i];
        if((Kaire[i] !=0 && Desine[i] !=0) && (Kaire[i] < Desine[i])) pora = pora + Kaire[i];
        if((Kaire[i] !=0 && Desine[i] !=0) && (Kaire[i] == Desine[i])) pora = pora + Kaire[i];
    }
    return pora;
}
int Liekana(int Kaire[], int Desine[])
{
    int liekana=0;
    for(int i=0; i<100; i++)
    {
        if(Kaire[i] > Desine[i])
            liekana = Kaire[i] - Desine[i];
        else if(Kaire[i] < Desine[i])
            liekana = Desine[i] - Kaire[i];
    }
    return liekana;
}
