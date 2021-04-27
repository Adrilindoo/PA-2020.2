#include "include/CutSphere.h"

CutSphere::CutSphere(int mx0, int my0, int mz0, int mradius){
    x0 = mx0; y0 = my0; z0 = mz0; radius = mradius;
}

void CutSphere::draw(Sculptor &t){
    t.cutSphere(x0, y0, z0, radius);
}