#include <vector>
using namespace std;

class Langas{
private:
    static unsigned int sukurtaLangu;
    float aukstis;
    float plotis;
public:
    Langas(float aukstis, float plotis);
    ~Langas();
    void setPlotis(float x);
    float getPlotis();
    void setAukstis(float x);
    float getAukstis();
    static unsigned int getlanguSkaicius();

 };
class Durys{
private:
    static unsigned int sukurtaDuru;
    float aukstis;
    float plotis;
public:
    Durys(float aukstis, float plotis);
    ~Durys();
    void setsukurtaLangu();
    void setPlotis(float x);
    float getPlotis();
    void setAukstis(float x);
    float getAukstis();

 };
class Kambarys{
private:
    float ilgis;
    float aukstis;
    float plotis;
    vector <Langas*> langai;
    vector <Durys*> durys;
public:
    Kambarys(float aukstis, float plotis,float ilgis);
    ~Kambarys();
    void setPlotis(float x);
    float getPlotis();
    void setAukstis(float x);
    float getAukstis();
    void setIlgis(float x);
    float getIlgis();
    void addLangas(Langas *l);
    void addDurys(Durys *d);
    float plotSiena();
    float plotGrindys();

 };
