#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int a, nul, vGalia, b, vienetai, rez;
    cout <<"Kiek isviso kariu issiunte y kara?" << endl;
    cin >> a;
    cout <<"Kokia yra nulio galia?" << endl;
    cin >> b;
    cout <<"Kiek kariu sudaro nuliu kariuomene?" << endl;
    cin >> nul;
    vienetai = a - nul;
    vGalia = (b * vienetai)*2;
    cout <<"Vienetu galia yra= " << vGalia << endl;
    if(b==vGalia) cout <<"NIEKAS";
    if(b<<vGalia) cout <<"VIENETAI";
    if(b>>vGalia) cout <<"NULIAI";
    return 0;
}
