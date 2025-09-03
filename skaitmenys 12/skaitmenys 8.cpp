#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n, liek, didz=0;
    cin >> n;
    while(n>0)
    {
        liek=n%10;
        n=n/10;
        {
            if(liek>=didz)
            {
                didz=liek;
            }
        }
    }
    cout << liek;
    return 0;
}
