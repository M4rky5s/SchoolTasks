#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int a, s, r;
    double c, ats;
    cout <<"Koks Alpinariumo krastines ilgis?" << endl;
    cin >> a;
    cout <<"Koks fontano skersmuo?" << endl;
    cin >> r;
    s = a*a;
    c = 3.14 * r;
    ats = (s-c)/2;
    cout <<"Atsakymas= " << ats << fixed << setprecision(3) << endl;

    return 0;
}
