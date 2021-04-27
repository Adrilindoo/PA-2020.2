#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "FiguraGeometrica.h"

class CutEllipsoid : public FiguraGeometrica{
    int rx, ry, rz;
    public:
        CutEllipsoid(int mx0, int my0, int mz0, int mrx, int mry, int mrz);
        void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H