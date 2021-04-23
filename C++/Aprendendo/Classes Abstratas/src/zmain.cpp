#include <iostream>
#include "figurageometrica.cpp"
#include "reta.cpp"
#include "circulo.cpp"
using namespace std;

int main(){
    FiguraGeometrica /*fig,*/ *pfig[10];
    Reta r;
    Circulo c;

    //fig.draw();
    //r.draw();

    pfig[0] = &r;
    pfig[0] -> draw();
    
    pfig[1] = &c;
    pfig[1] -> draw();

    cout << endl;

    pfig[0] = new Circulo;
    pfig[1] = new Reta;
    pfig[2]= new Reta;
    pfig[3] = new Circulo;
    
    for (int i = 0; i < 4; i++){
        pfig[i] -> draw();
    }

    /*for (int i = 0; i < 4; i++){
        delete pfig[i];
    }*/
}