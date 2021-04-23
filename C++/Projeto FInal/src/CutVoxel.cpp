#include "CutVoxel.h"

CutVoxel::CutVoxel(int mx, int my, int mz, float mr, float mg, float mb, float ma){
    x = mx; y = mx; z = mz;
    r = mr; g = mg; b = mb; a = ma; 
}

void CutVoxel::draw(Sculptor &s){
    s.setColor(r,g,b,a);
    s.cutVoxel(x,y,z);
}