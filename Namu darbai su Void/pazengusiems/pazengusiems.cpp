#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
int Lyginiai(int a, int b, int c, int d, int e, int f);
int main ()
{
ifstream in ("Duomenys.txt");
ofstream out ("Rezultatas.txt");
int n, sk, sk1, sk2, sk3, sk4, sk5, sk6, sum=0, sum2=0;
in >> n;
for(int i=1; i<=n; i++)
{
    in >> sk;
    for(int j=1; j<=1; j++)
    {
        Lyginiai(sk1, sk2, sk3, sk4, sk5, sk6);
        out << sum;
    }
}

return 0;
}
// Lyginiai
    int Lyginiai(int a, int b, int c, int d, int e, int f)
    {
    int sk;
    int sum;
    for(int j=1; j<=1; j++)
    {
        sum = 0;
        a = sk % 10;
        if(a % 2 == 0)
        {
            sum = sum = a;
        }
        b = sk / 10 % 10;
        if(b % 2 == 0)
        {
            sum = sum + b;
        }
        c = sk / 100 % 10;
        if(c % 2 == 0)
        {
            sum = sum + c;
        }
        d = sk / 1000 % 10;
        if(d % 2 == 0)
        {
            sum = sum + d;
        }
        e = sk / 10000 % 10;
        if(e % 2 == 0)
        {
            sum = sum + e;
        }
        f = sk / 100000 % 10;
        if(f % 2 == 0)
        {
            sum = sum + f;
        }
    }
        return sum;
    }

//Nelyginiai funkcija
    //void Nelyginiai(int a, int b, int c, int d, int e, int f, int & sum2)
