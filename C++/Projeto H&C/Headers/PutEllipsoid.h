#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "FiguraGeometrica.h"

class PutEllipsoid : public FiguraGeometrica{
    int rx, ry, rz;
    public:
        PutEllipsoid(int mx0, int my0, int mz0, int mrx, int mry, int mrz, float mr, float mg, float mb, float ma);
        void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H