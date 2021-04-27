#include "include/CutVoxel.h"

CutVoxel::CutVoxel(int mx0, int my0, int mz0){
    x0 = mx0; y0 = my0; z0 = mz0;
}

void CutVoxel::draw(Sculptor &t){
    t.cutVoxel(x0, y0, z0);
}