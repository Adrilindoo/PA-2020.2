#include "include/CutEllipsoid.h"

CutEllipsoid::CutEllipsoid(int mx0, int my0, int mz0, int mrx, int mry, int mrz){
    x0 = mx0; y0 = my0; z0 = mz0; rx = mrx; ry = mry; rz = mrz;
}

void CutEllipsoid::draw(Sculptor &t){
    t.cutEllipsoid(x0, y0, z0, rx, ry, rz);
}