#include "include/CutBox.h"
#include "include/Sculptor.h"


CutBox::CutBox(int mx0, int mx1, int my0, int my1, int mz0, int mz1){
    x0 = mx0; x1 = mx1; y0 = my0; y1 = my1; z0 = mz0; z1 = mz1;
}

void CutBox::draw(Sculptor &t){
    t.cutBox(x0,x1, y0, y1, z0, z1);
}