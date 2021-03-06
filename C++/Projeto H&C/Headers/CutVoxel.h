#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"

class CutVoxel : public FiguraGeometrica{
    public:
        CutVoxel(int mx0, int my0, int mz0);
        void draw(Sculptor &t);
};

#endif // CUTVOXEL_H