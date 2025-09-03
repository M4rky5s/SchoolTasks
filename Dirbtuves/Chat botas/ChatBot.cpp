#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
int main ()
{
    int loop=1;
    string sent;
    int years;
    while(loop)
    {
        cout << "Parasyk savo varda" << endl;
        cin >> sent;
        if(sent.length() == 6)
        {
            cout << "Labai grazus vardas" << endl;
        }
        else cout << "Nepatinka man toks vardas" << endl;
        cout << "Kiek tau metu?" << endl;
        cin >> years;
        if(years >=18)
        {
            cout << "Suauges zmogus" << endl;
        }
        else cout << "visiskas vaikas" << endl;
    }
    return 0;
}
