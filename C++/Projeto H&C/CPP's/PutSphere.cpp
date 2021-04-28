#include "include/PutSphere.h"

PutSphere::PutSphere(int mx0, int my0, int mz0, int mradius, float mr, float mg, float mb, float ma){
    x0 = mx0; y0 = my0; z0 = mz0; radius = mradius;
    r = mr; g = mg; b = mb; a = ma;
}

void PutSphere::draw(Sculptor &t){
    t.setColor(r, g, b, a);
    t.putSphere(x0, y0, z0, radius);
}