#include "include/PutVoxel.h"

PutVoxel::PutVoxel(int mx0, int my0, int mz0, float mr, float mg, float mb, float ma){
    x0 = mx0; y0 = my0; z0 = mz0;
    r = mr; g = mg; b = mb; a = ma;
}

void PutVoxel::draw(Sculptor &t){
    t.setColor(r, g, b, a);
    t.putVoxel(x0, y0, z0);
}