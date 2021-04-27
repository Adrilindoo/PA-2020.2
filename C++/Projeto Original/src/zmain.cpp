#include "include/Interpretador.h"
#include <vector>

int main(){
    Sculptor *build;
    vector <FiguraGeometrica*> figs;
    string arquivo;
    Interpretador itp;

    arquivo = "aentrada.txt";
    
    figs = itp.inter(arquivo);

    build = new Sculptor(itp.getX(), itp.getY(), itp.getZ());

    for(size_t i = 0; i < figs.size(); i++){
        cout << "Desenhando...\n";
        figs[i] -> draw(*build);
    }

    build -> writeOFF("asaida.off");

    for(size_t i = 0; i < figs.size(); i++){
        delete figs[i];
    }

    delete build;
    return 0;
}