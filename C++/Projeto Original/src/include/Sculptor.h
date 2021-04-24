#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <vector>
#include "Voxel.h"
#include <string>
 
class Sculptor {
protected:
  Voxel ***v;    // 3D matrix
  float lado;
  int nx, ny, nz;  // Dimensões em x, y e z
  float r, g, b, a; // Cor do desenhos
  int i, j, k;   // variáveis auxiliares
public:
  Sculptor(int mx = 1, int my = 1, int mz = 1);
  ~Sculptor();
  void aloca();
  void libera();
  void troca(int &a, int &b);
  void preenche(int x0, int x1, int y0, int y1, int z0, int z1);
  void setColor(float mr, float mg, float mb, float ma);
  void putVoxel(int x, int y, int z);           //OK
  void cutVoxel(int x, int y, int z);           //OK
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1); //OK
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); //OK
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void apoio();
  void bordas();
  void corte(int x0, int x1, int y0, int y1, int z0, int z1);
  void writeOFF(string filename);
};

#endif //SCULPTOR_H