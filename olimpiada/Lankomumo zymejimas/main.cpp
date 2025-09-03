#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n, k;
    int lank[100];
    ifstream in ("duomenys.txt");
    in >> n >> k;
    for(int i=0; i<n; i++)
    {
        in >> lank[i];
    }
    return 0;
}
