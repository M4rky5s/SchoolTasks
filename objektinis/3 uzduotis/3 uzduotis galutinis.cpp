#include <iostream>
#include <vector>
#include "3 uzduotis galutinis.h"
using namespace std;

Langas::Langas(float aukstis,float plotis){

		setAukstis(aukstis);
		setPlotis(plotis);
		sukurtaLangu++;
}
Langas::~Langas(){
        sukurtaLangu--;
}

unsigned int Langas::getlanguSkaicius(){
    return sukurtaLangu;
}
Durys::Durys(float aukstis,float plotis){

		setAukstis(aukstis);
		setPlotis(plotis);
		sukurtaDuru++;
}
Durys::~Durys(){
    sukurtaDuru--;
}
Kambarys::Kambarys(float aukstis,float plotis,float ilgis){
		setAukstis(aukstis);
		setPlotis(plotis);
}
Kambarys::~Kambarys(){
    for (int i = 0; i < langai.size(); ++i)
    {
        delete langai[i];
    }
    for (int i = 0; i <durys.size(); ++i)
    {
        delete durys[i];
    }
}


void Langas::setPlotis(float x)
{
    plotis = x;
}
float Langas::getPlotis()
{
    return plotis;
}
void Langas::setAukstis(float x)
{
    aukstis = x;
}

float Langas::getAukstis()
{
    return aukstis;
}
void Durys::setPlotis(float x)
{
    plotis=x;
}
float Durys::getPlotis()
{
    return plotis;
}
void Durys::setAukstis(float x)
{
    aukstis=x;
}
float Durys::getAukstis()
{
    return aukstis;
}
void Kambarys::setAukstis(float x)
{
    aukstis=x;
}
float Kambarys::getAukstis()
{
    return aukstis;
}
void Kambarys::setIlgis(float x)
{
    ilgis=x;
}
float Kambarys::getIlgis()
{
    return ilgis;
}
void Kambarys::setPlotis(float x)
{
    plotis=x;
}
float Kambarys::getPlotis()
{
    return plotis;
}
 void Kambarys::addLangas(Langas *l)
 {
     langai.push_back(l);
 }
 void Kambarys::addDurys(Durys *d)
 {
     durys.push_back(d);
 }
 float Kambarys::plotSiena()
 {
    float langaiSum=0,durysSum=0,sienos=0;
    for (int i = 0; i < langai.size();++i)
    {
        langaiSum=langaiSum+(langai[i]->getPlotis())*(langai[i]->getAukstis());
    }
    for (int i = 0; i < durys.size();++i)
    {
        durysSum=durysSum+(durys[i]->getPlotis())*(durys[i]->getAukstis());
    }
    sienos=((((getAukstis())*(getIlgis()))*2)+(((getAukstis())*(getPlotis()))*2))-durysSum-langaiSum;
    return sienos;
 }
 float Kambarys::plotGrindys()
 {
    float duruPlociai=0,kambarioPerimetras=0;

    for (int i = 0 ; i < durys.size(); ++i)
    {
        duruPlociai=duruPlociai+durys[i]->getPlotis();

    }
    kambarioPerimetras=((getPlotis()*2)+(getIlgis()*2))-duruPlociai;
    return kambarioPerimetras;
 }

unsigned int Langas::sukurtaLangu = 0;
unsigned int Durys::sukurtaDuru = 0;

int main()
{
    Langas *l1=new Langas(10,15);
    Langas *l2=new Langas(10,15);
    Durys *d1=new Durys(10,5);
    Durys *d2=new Durys(10,5);
    Kambarys *k1=new Kambarys(10,15,10);
    k1->addLangas(l1);
    k1->addLangas(l2);
    k1->addDurys(d1);
    k1->addDurys(d2);
    cout<<"Pirmo kambario  ilgis "<<k1->plotGrindys()<<endl;

    cout<<"Dabartinis Langu skaicius : "<<Langas::getlanguSkaicius()<<endl;
    delete l1;
    cout<<"Langu skaicius : "<<Langas::getlanguSkaicius()<<endl;
    delete l2;
    cout<<"Langu skaicius : "<<Langas::getlanguSkaicius()<<endl;
    delete d1;
    delete d2;
    delete k1;
    cout << "Hello world!" << endl;
    return 0;
}
