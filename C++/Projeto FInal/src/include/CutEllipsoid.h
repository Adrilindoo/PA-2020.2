#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "FiguraGeometrica.h"

class CutEllipsoid : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, rx, ry, rz;
    public:
    CutEllipsoid(int mxcenter, int mycenter, int mzcenter, int mrx, int mry, int mrz, float mr, float mg, float mb, float ma);
    ~CutEllipsoid(){};
    void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H