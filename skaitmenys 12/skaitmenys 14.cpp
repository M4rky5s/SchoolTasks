#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n, k, liek, sum=0;
    cin >> n;
    cin >> k;
    while(n>0)
    {
        liek=n%10;
        n=n/10;
        {
            if(liek>k)
            {
                sum = sum+1;
            }
        }
    }
    cout << sum;
    return 0;
}
