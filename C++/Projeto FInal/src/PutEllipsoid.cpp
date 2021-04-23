#include "PutEllipsoid.h"

PutEllipsoid::PutEllipsoid(int mx0, int my0, int mz0, int mrx, int mry, int mrz, float mr, float mg, float mb, float ma){
    x0 - mx0; y0 = my0; z0 = mz0;
    rx = mrx; ry = mry; rz = mrz;
    r = mr; g = mg; b = mb; a = ma;
}

void PutEllipsoid::draw(Sculptor &s){
    s.setColor(r,g,b,a);
    s.putEllipsoid(x0, y0, z0, rx, ry, rz);
}