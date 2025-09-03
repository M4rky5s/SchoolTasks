#include <iostream>
#include "2 uzduotis galutinis.h"
using namespace std;
int main(){
    Langas langas1;
    Langas langas2;
    Langas langas3;
    langas1.setAukstis(5);
    langas1.setPlotis(4);
    langas2.setAukstis(6);
    langas2.setPlotis(5);
    langas3.setAukstis(7);
    langas3.setPlotis(6);
    Durys durys1;
    Durys durys2;
    durys1.setAukstis(9.02);
    durys1.setPlotis(5.45);
    durys2.setAukstis(10);
    durys2.setPlotis(3);
    Kambarys kambarys;
    kambarys.setAukstis(12);
    kambarys.setIlgis(16);
    kambarys.setPlotis(13);
    kambarys.addLangas(langas1);
    kambarys.addLangas(langas2);
    kambarys.addLangas(langas3);
    kambarys.addDurys(durys1);
    kambarys.addDurys(durys2);
    cout<<kambarys.getSienuPlotas()<<endl;
    cout<<kambarys.getGrindjuosciuIlgis()<<endl;
    return 0;
}
