#include <iostream>
#include <cmath>
#include "10_pratybos.h"

Taskas::Taskas(int x, int y)
{
    setX(x);
    setY(y);
}
void Taskas::setX(int x)
{
    this -> x = x;
}
void Taskas::setY(int x)
{
    this -> y = y;
}
int Taskas::getX()
{
    return x;
}
int Taskas::getY()
{
    return y;
}
//-----------------------------------------
Figura::Figura(Taskas taskas) : taskas(Taskas(0,0))
{
    setPos(taskas);
}
Figura::~Figura()
{

}
void Figura::setPos(Taskas taskas)
{
    this -> taskas=taskas;
}
Taskas Figura::getPos()
{
    return taskas;
}
void Figura::print()
{
    cout <<"X:" << taskas.getX() << endl;
    cout <<"Y:" << taskas.getY() << endl;
}
//-------------------------------------------------//
Skritulys::Skritulys(Taskas taskas, double spind) : Figura(taskas)
{
    setSpindulys(spind);
}
Skritulys::~Skritulys()
{

}
void Skritulys::setSpindulys(double spind)
{
    this -> spind=spind;
    a = getSpindulys();
}
Skritulys::getA()
{
    return a;
}
Skritulys::perimetras()
{
    double r = getSpindulys();
    double perimetras = 2*M_PI*spind;
    return perimetras;
}
Skritulys::plotas()
{
    double r = getSpindulys();
    double plotas = M_PI*spind*spind;
    return plotas;
}
Skritulys::print()
{
    Figura::print();
    cout <<"Skritulys: " << endl;
    cout <<"Perimetras: " << perimetras() << endl;
    cout <<"Plotas: " << plotas() << endl;
}
//----------------------------------------
Elipse::Elipse(Taskas taskas, double a, double b) : Skritulys(taskas,a)
{
    setA(a);
    setB(b);
}
Elipse::~Elipse()
{

}
void Elipse::setA(double a)
{
    this -> a=a;
}
void Elipse::setB(double b)
{
    b = getSpindulys();
}
Elipse::getA()
{
    return a;
}
Elipse::getB()
{
    return b;
}
Elipse::perimetras()
{
    double r = getSpindulys();
    double perimetras = M_PI(3*(a+b)-sqrt((3*a+b)(a+3*b)));
    return perimetras;
}
Elipse::plotas()
{
    double r = getSpindulys();
    double plotas = M_PI*a*b;
    return plotas;
}
Elipse::print()
{
    Figura::print();
    cout <<"Elipse: " << endl;
    cout <<"Perimetras: " << perimetras() << endl;
    cout <<"Plotas: " << plotas() << endl;
}
//-----------------------------------------
Kvadratas::Kvadratas(Taskas taskas, double krastine) : Figure(taskas)
{
    setKrastine(krastine);
}
Kvadratas::~Kvadratas()
{

}
void Kvadratas::setKrastine(double krastine)
{
    this -> krastine = krastine;
}
Kvadratas::getKrastine()
{
    return krastine;
}
Kvadratas::perimetras()
{
    double perimetras;
    perimetras = 4 * getKrastine();
    return perimetras;
}
Kvadratas::plotas()
{
    double plotas;
    plotas = getKrastine() * getKrastine();
    return plotas;
}
Kvadratas::print()
{
    Figura::print();
    cout <<"Kvadratas: " << endl;
    cout <<"Perimetras: " << perimetras() << endl;
    cout <<"Plotas: " << plotas() << endl;
}
//----------------------------------------
Staciakampis::Staciakampis(Taskas taskas, double centras, double krastine) : Kvadratas(taskas, krastine)
{
    setCentras(centras);
}
Staciakampis::~Staciakampis()
{

}
void Staciakampis::setCentras(double centras)
{
    this -> centras=centras;
    centras = getKrastine();
}
Staciakampis::getKrastine()
{
    return krastine;
}
Staciakampis::perimetras()
{
    double perimetras;
    //perimetras = //???
    return perimetras;
}
Staciakampis::plotas()
{
    double plotas;
    //plotas = //??
    return plotas;
}
void Staciakampis::print()
{
    Figura::print();
    cout <<"Staciakampis: " << endl;
    cout <<"Perimetras: " << perimetras() << endl;
    cout <<"Plotas: " << plotas() << endl;
}
int main ()
{
    Staciakampis::print();
    return 0;
}
