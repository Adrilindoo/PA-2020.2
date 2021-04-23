#ifndef PUTBOX_H
#define PUTBOX_H
#include "FiguraGeometrica.h"
class PutBox : public FiguraGeometrica{
    int x0, x1, y0, y1, z0, z1;
    public:
        PutBox(int mx0, int mx1, int my0, int my1, int mz0, int mz1, float mr, float mg, float mb, float ma);
        ~PutBox(){};
        void draw(Sculptor &s);
};

#endif // PUTBOX_H