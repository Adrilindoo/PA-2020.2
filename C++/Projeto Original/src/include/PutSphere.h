#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "FiguraGeometrica.h"

class PutSphere : public FiguraGeometrica{
    int radius;
    public:
        PutSphere(int mx0, int my0, int mz0, int mradius, float mr, float mg, float mb, float ma);
        void draw(Sculptor &t);
};

#endif // PUTSPHERE_H