#include <iostream>
#include <vector>
using namespace std;
class Taskas{
    private:
        int x;
        int y;
    public:
        Taskas(int x, int y);
        ~Taskas();
        void setX(int x);
        int getX();
        void setY(int y);
        int getY();

};
class Figura{
    protected: Taskas taskas;
    public:
        Figura(Taskas t1);
        ~Figura();
        void setPos(Taskas taskas);
        Taskas getPos();
        void print();
};
class Skritulys{
    private:
        double spind;
    public:
        Skritulys(Taskas taskas, double spind);
        ~Skritulys();
        void setSpindulys(double spind);
        int getSpindulys();
        int perimetras();
        int plotas();
        virtual void print();
};
class Elipse{
    private:
        double a;
        double b;
        double centras;
    public:
        Elipse(Taskas taskas, double a, double b);
        ~Elipse();
        void setA(double a);
        void setB(double b);
        int getB();
        void setCentras(double centras);
        int getCentras();
};
class Kvadratas{
    private:
        double centras;
        double krastine;
    public:
        Kvadratas(Taskas taskas, double krastine);
        ~Kvadratas();
        void setKrastine(double krastine);
        int getKrastine();
        int perimetras();
        int plotas();
};
class Staciakampis{
    private:
        double centras;
        double krastine;
    public:
        Staciakampis(Taskas taskas, double centras, double krastine);
        ~Staciakampis();
        void setKrastine(double krastine);
        int getKrastine();
        void setCentras(double centras);
        int getCentras();
        int perimetras();
        int plotas();
};
