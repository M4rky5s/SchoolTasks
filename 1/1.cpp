#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int v, m, p, vv, vm, veiksm1, veiksm2;
    cout <<"Kurio laiku mama pradejo gaminti pietu (valanda ir minute)? " << endl;
    cin >> v;
    cin >> m;
    cout <<"Kiek laiko mama gamina pietus (minutemis)?" << endl;
    cin >> p;
    cout <<"Kada is lauko gryzta vaikai (valanda ir minute)? " << endl;
    cin >> vv;
    cin >> vm;
    veiksm1 = (v*60)+m+p;
    veiksm2 = (vv*60) + vm;
        if(veiksm1<=veiksm2)
        {
            cout <<"Mama pietus pagaminti spes";
        }
        else
        {
            cout <<"Mama pietu pagaminti nespes";
        }
    return 0;
}
