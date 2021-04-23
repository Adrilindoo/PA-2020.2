#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "FiguraGeometrica.h"

class CutSphere : public FiguraGeometrica{
    int x0, y0, z0, radius;
    public:
        CutSphere(int mx0, int my0, int mz0, int mradius, float mt, float mg, float mb, float ma);
        ~CutSphere(){};
        void draw(Sculptor &s);

};

#endif // CUTSPHERE_H