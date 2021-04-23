#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include "FiguraGeometrica.h"
#include <string>

class Interpretador{
    int nx, ny, nz;
    float r, g, b, a;

    public:
    Interpretador();
    vector<FiguraGeometrica*> parse(string filename);
    int getDImX();
    int getDimY();
    int getDimZ();
};

#endif // INTERPRETADOR_H