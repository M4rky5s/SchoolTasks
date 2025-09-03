#include <iostream>
#include "2 uzduotis galutinis.h"
using namespace std;
int main(){
    Langas langas1;
    Langas langas2;
    Langas langas3;
    langas1.setAukstis(7);
    langas1.setPlotis(5);
    langas2.setAukstis(9);
    langas2.setPlotis(7);
    langas3.setAukstis(8);
    langas3.setPlotis(5);
    Durys durys1;
    Durys durys2;
    durys1.setAukstis(8.05);
    durys1.setPlotis(6.72);
    durys2.setAukstis(11);
    durys2.setPlotis(7);
    Kambarys kambarys;
    kambarys.setAukstis(15);
    kambarys.setIlgis(19);
    kambarys.setPlotis(14);
    kambarys.addLangas(langas1);
    kambarys.addLangas(langas2);
    kambarys.addLangas(langas3);
    kambarys.addDurys(durys1);
    kambarys.addDurys(durys2);
    cout<<kambarys.getSienuPlotas()<<endl;
    cout<<kambarys.getGrindjuosciuIlgis()<<endl;
    return 0;
}
