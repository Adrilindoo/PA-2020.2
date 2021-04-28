#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "FiguraGeometrica.h"

class PutVoxel : public FiguraGeometrica{
    public:
        PutVoxel(int mx0, int my0, int mz0, float mr, float mg, float mb, float ma);
        void draw(Sculptor &t);
};

#endif // PUTVOXEL_H