#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n, x, y, sum=0;
    ifstream in ("duomenys.txt");
    ofstream out ("rezultatas.txt");
    in >> n;
    for(int i=1; i<=n; i++)
    {
        in >> x;
        in >> y;
        if(x>0 && y>0)
        {
            sum = sum + 1;
        }
    }
    out << sum;
    in.close();
    out.close();

return 0;
}
