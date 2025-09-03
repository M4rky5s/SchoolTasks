#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n, liek, sum=0;
    cin >> n;
    while(n>0)
    {
        liek =n%10;
        {
            if(liek=0)
            {
                sum = sum+1;
            }
        }
        n = n/10;
    }
    cout << sum;
    return 0;
}
