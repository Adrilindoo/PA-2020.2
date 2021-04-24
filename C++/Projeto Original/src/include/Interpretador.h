#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <iostream>
#include "FiguraGeometrica.h"
using namespace std;

class Interpretador{
    int nx, ny, nz;
    float r, g, b, a;
    public:
    Interpretador();
    vector <FiguraGeometrica*> inter(string arquivo);
    void teste(string arquivo);
    void getX();
    void getY();
    void getZ();
};

#endif // INTERPRETADOR_H