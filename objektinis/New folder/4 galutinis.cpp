#include <iostream>
#include "4 uzduotis galutinis.h"
using namespace std;

int main()
{
    int max = 10;
    int min = 1;
    int Skaicius skc[10];
    for(int i=0; i < 10; i++)
    {
        cin >> skc[i];
        if(!(cin >> skc[i]))
        {
            cout << "invalid_argument";
        }
    }
    return 0;
}
