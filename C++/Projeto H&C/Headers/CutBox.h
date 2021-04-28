#ifndef CUTBOX_H
#define CUTBOX_H
#include "FiguraGeometrica.h"

class CutBox : public FiguraGeometrica{
    int x1, y1, z1;
    public:
        CutBox(int mx0, int mx1, int my0, int my1, int mz0, int mz1);
        void draw(Sculptor &t);
};

#endif // CUTBOX_H