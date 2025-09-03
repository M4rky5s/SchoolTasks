#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int t, n, vid, m;
    ifstream in ("ZinasDuom.txt");
    ofstream out ("ZinasRez.txt");
    in >> n;
    in >> t;
    m = 0;
    for(int i=1; i<=n; i=i+1)
    {
        m = m + t;
    }
    out << m << endl;
    vid = m/n;
    out << vid;
    return 0;
}
