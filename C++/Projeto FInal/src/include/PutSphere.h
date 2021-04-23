#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "FiguraGeometrica.h"

class PutSphere: public FiguraGeometrica{
    int x0, y0, z0, radius;
    public:
        PutSphere(int mx0, int my0, int mz0, int mradius, float mr, float mg, float mb, float ma);
        ~PutSphere(){};
        void draw(Sculptor &s);
};

#endif // PUTSPHERE_H

//OK