#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
int didziausiassk (int a, int b);
int maziausiassk (int a, int b);
double vidurkis (int sum, int n);
int main ()
{
    int n, sk, didz=-111, maz=999, didzsk, mazsk, sum=0;
    double vid;
    ifstream in ("duomenys.txt");
    ofstream out ("rezultatas.txt");
    in >> n;
    for(int i=1; i<=n; i++)
    {
        in >> sk;
        {
            sum = 1.0*sum + sk;
        }
        if(didz < sk)
        {
            didzsk = didziausiassk (didz, sk);
        }
        if(maz > sk)
        {
            mazsk = maziausiassk (maz, sk);
        }
    }
    vid = vidurkis(sum, n);
    out << fixed << setprecision(1) << vid << endl;
    out << didzsk << endl;
    out << mazsk;
    return 0;
}
    double vidurkis (int a, int b)
    {
        return 1.0*(a / b);
    }
    int didziausiassk (int a, int b)
    {
        return a = b;
    }
    int maziausiassk (int a, int b)
    {
        return a = b;
    }
