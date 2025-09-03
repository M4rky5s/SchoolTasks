#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n, liek, sum=0;
    double vid;
    cin >> n;
    while(n>0)
    {
        liek=n%10;
        n=n/10;
        {
            if(liek % 3 == 0)
            {
                sum=sum+liek;
            }
        }
    }
    vid = sum / 0.33;
    cout << fixed << setprecision(2) << vid;
    return 0;
}
