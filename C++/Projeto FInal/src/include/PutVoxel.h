#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "FiguraGeometrica.h"

class PutVoxel : public FiguraGeometrica{
    int x, y, z;
    public:
        PutVoxel(int mx, int my, int mz, float mr, float mg, float mb, float ma);
        ~PutVoxel(){};
        void draw(Sculptor &s);
};

#endif // PUTVOXEL_H

//OK