#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "FiguraGeometrica.h"

class PutEllipsoid : public FiguraGeometrica{
    int x0, y0, z0, rx, ry, rz;
    public:
    PutEllipsoid(int mx0, int my0, int mz0, int mrx, int mry, int mrz, float mr, float mg, float mb, float ma);
    ~PutEllipsoid(){};
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H