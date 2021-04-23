#include "PutBox.h"
PutBox::PutBox(int mx0, int mx1, int my0, int my1, int mz0, int mz1, float mr, float mg, float mb, float ma){
    x0 = mx0; x1 = mx1; y0 = my0; y1 = my1; z0 = mz0; z1 = mz1;
    r = mr; g = mg; b= mg; a = ma;
}

void PutBox::draw(Sculptor &s){
    s.setColor(r,g,b,a);
    s.putBox(x0, x1, y0, y1, z0, z1);
}