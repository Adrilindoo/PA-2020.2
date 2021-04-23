#include "FiguraGeometrica.h"
#include "Interpretador.h"
#include <vector>

int main(){
    Sculptor *s1;
    Interpretador parser;
    vector <FiguraGeometrica*> figs;

    //figs = parser.parse("caminho".txt);

    s1 = new Sculptor(parser.getDImX(), parser.getDimY(), parser.getDimZ());
    
    for(size_t i = 0; i < figs.size(); i++){
        cout << "draw\n";
        figs[i] -> draw(*s1);
    }

    //s1 -> limpaVoxels();

    //s1 -> writeOFF(saida.off);

    for(size_t i = 0; i < figs.size(); i++){
        delete figs[i];
    }
    delete s1;
    return 0;
}