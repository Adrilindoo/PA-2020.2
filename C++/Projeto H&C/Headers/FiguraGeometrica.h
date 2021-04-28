#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Sculptor.h"

class FiguraGeometrica{
    protected:
        int x0, y0, z0; //todas as figuras geométricas possuem pelo menos 1 informação de posição em cada eixo
        float r, g, b, a;
    public:
        virtual ~FiguraGeometrica(){};
        virtual void draw(Sculptor &s) = 0;
};

#endif // FIGURAGEOMETRICA_H