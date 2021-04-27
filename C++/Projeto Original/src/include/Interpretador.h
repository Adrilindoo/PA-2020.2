#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <iostream>
#include "FiguraGeometrica.h"
using namespace std;

class Interpretador{
    int nx, ny, nz;
    int x0, y0, z0;
    float r, g, b, a;
    public:
    Interpretador();
    vector <FiguraGeometrica*> inter(string arquivo);
    void teste(string arquivo);
    int getX();
    int getY();
    int getZ();
};

#endif // INTERPRETADOR_H