#ifndef CUTBOX_H
#define CUTBOX_H
#include "FiguraGeometrica.h"

class CutBox : public FiguraGeometrica{
    int x0, x1, y0, y1, z0, z1;
    public:
        CutBox(int mx0, int mx1, int my0, int my1, int mz0, int mz1, float mr, float mg, float mb, float ma);
        ~CutBox(){};
        void draw(Sculptor &s);
};

#endif // CUTBOX_H