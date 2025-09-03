#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int k, m, vk, n;
    ifstream in ("Duomenys.txt");
    ofstream out ("Rezultatas.txt");
    in >> k;
    in >> m;
    in >> n;
    vk = k;
    for(int i=1; i<=n; i=i+1)
    {
        vk = vk + (k+m);

    // 170 + 200 = 370
    // 370 + 230 = 600

    }
        out<<vk;
    return 0;
}
