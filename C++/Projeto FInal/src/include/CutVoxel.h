#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"

class CutVoxel : public FiguraGeometrica{
    int x, y, z;
    public:
        CutVoxel(int mx, int my, int mz, float mr, float mg, float mb, float ma);
        ~CutVoxel(){};
        void draw(Sculptor &s);
};

#endif // CUTVOXEL_H