#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
void Reverse(string& str);
int main ()
{
    string zodis;
    ifstream in ("duomenys.txt");
    in >> zodis;
    Reverse(zodis);
    cout << zodis;

    return 0;
}
void Reverse(string& str)
{
    int n = str.length();
    for(int i=0; i < n/2; i++)
    swap(str[i], str[n-i-1]);
}
