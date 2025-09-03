#include <iostream>
#include <vector>
using namespace std;
class  Langas{
    private:
        float aukstis, plotis;
    public:
        float getPlotis(){
            return plotis;
        }
        void setPlotis(float p){
            plotis = p;
        }
        float getAukstis(){
            return aukstis;
        }
        void setAukstis(float a){
            aukstis = a;
        }
        float getPlotas(){
            return aukstis * plotis;
        }
};
class  Durys{
    private:
        float aukstis, plotis;
    public:
        float getPlotis(){
            return plotis;
        }
        void setPlotis(float p){
            plotis = p;
        }
         float getAukstis(){
            return aukstis;
        }
        void setAukstis(float a){
            aukstis = a;
        }
        float getPlotas(){
            return aukstis * plotis;
        }
};
class  Kambarys{
    private:
        float ilgis, aukstis, plotis;
        vector<Langas> langai;
        vector<Durys> durys;
    public:
        float getIlgis(){
            return ilgis;
        }
        void setIlgis(float i){
            ilgis = i;
        }
         float getPlotis(){
            return plotis;
        }
        void setPlotis(float p){
            plotis = p;
        }
         float getAukstis(){
            return aukstis;
        }
        void setAukstis(float a){
            aukstis = a;
        }
        void addLangas(Langas langas){
            langai.push_back(langas);
        }
        void addDurys(Durys d){
            durys.push_back(d);
        }
        float getSienuPlotas(){
            float S, LanguP, DuruP;
            S = 2 * ( ilgis * aukstis + aukstis * plotis );
            for(Langas l : langai){
                LanguP = LanguP + l.getPlotas();
            }
            for(Durys d : durys){
                DuruP = DuruP + d.getPlotas();
            }
            return S - (LanguP + DuruP);
        }
        float getGrindjuosciuIlgis(){
            float P, DuruP;
            P = 2 * ( ilgis + plotis ) ;
            for(Durys d : durys){
                DuruP = DuruP + d.getPlotis();
            }
            return P - DuruP;
        }
};
