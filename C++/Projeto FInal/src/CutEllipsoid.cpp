#include "CutEllipsoid.h"

CutEllipsoid::CutEllipsoid(int mxcenter, int mycenter, int mzcenter, int mrx, int mry, int mrz, float mr, float mg, float mb, float ma){
    xcenter = mxcenter; ycenter = mycenter; zcenter = mzcenter; rx = mrx; ry = mry; rz = mrz;
    r = mr; g = mg; b = mb; a = ma;
}

void CutEllipsoid::draw(Sculptor &s){
    s.setColor(r,g,b,a);
    s.cutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz);
}