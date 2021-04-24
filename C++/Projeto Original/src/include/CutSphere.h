#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "FiguraGeometrica.h"

class CutSphere : public FiguraGeometrica{
    int radius;
    public:
        CutSphere(int mx0, int my0, int mz0, int mradius, float mr, float mg, float mb, float ma);
        void draw(Sculptor &t);
};

#endif // CUTSPHERE_H