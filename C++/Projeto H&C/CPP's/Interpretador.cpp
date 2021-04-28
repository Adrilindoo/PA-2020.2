#include "include/Interpretador.h"
#include "include/CutBox.h"
#include "include/CutVoxel.h"
#include "include/CutSphere.h"
#include "include/CutEllipsoid.h"
#include "include/PutEllipsoid.h"
#include "include/PutSphere.h"
#include "include/PutVoxel.h"
#include "include/PutBox.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

Interpretador::Interpretador(){
    cout << "Construtor do Interpretador\n";
}

vector <FiguraGeometrica*> Interpretador::inter(string arquivo){
    vector <FiguraGeometrica*> figs;
    ifstream fin;
    string s;
    stringstream ss;
    fin.open(arquivo);
    if(!fin.is_open()){
        cout << "Não foi possível abrir o arquivo\n";
        exit(0);
    }
    else{
        cout << "Arquivo aberto com sucesso\n";
        while(getline(fin, s)){
            ss.clear();
            ss.str(s);
            ss >> s;
            if(s.compare("dim") == 0){
                ss >> nx >> ny >> nz;
            }

            if(s.compare("cutbox") == 0){
                int x1, y1, z1;
                ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
            }
            if(s.compare("putbox") == 0){
                int x1, y1, z1;
                ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a; 
                figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g ,b, a));
            }

            if(s.compare("cutellipsoid") == 0){
                int rx, ry, rz;
                ss >> x0 >> y0 >> z0 >> rx >> ry >> rz;
                figs.push_back(new CutEllipsoid(x0, y0, z0, rx, ry, rz));
            }
            if(s.compare("putellipsoid") == 0){
                int rx, ry, rz;
                ss >> x0 >> y0 >> z0 >> rx >> ry >> rz >> r >> g >> b >> a;
                figs.push_back(new PutEllipsoid(x0, y0, z0, rx, ry, rz, r, g, b, a));
            }

            if (s.compare("cutsphere") == 0){
                int radius;
                ss >> x0 >> y0 >> z0 >> radius;
                figs.push_back(new CutSphere(x0, y0, z0, radius));
            }
            if (s.compare("putsphere") == 0){
                int radius;
                ss >> x0 >> y0 >> z0 >> radius >> r >> g >> b >> a;
                figs.push_back(new PutSphere(x0, y0, z0, radius, r, g, b, a));
            }

            if(s.compare("cutvoxel") == 0){
                ss >> x0 >> y0 >> z0;
                figs.push_back(new CutVoxel(x0, y0, z0));
            }
            if (s.compare("putvoxel") == 0){
                ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                figs.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
            }
            
        }
    }
    return (figs);
}

void Interpretador::teste(string arquivo){
    ifstream fin;
    string s;
    stringstream ss;
    fin.open(arquivo);
    if(!fin.is_open()){
        cout << "Não foi possível abrir o arquivo\n";
        exit(0);
    }
    else{
        cout << "Arquivo aberto com sucesso\n";
        while(getline(fin, s)){
            ss.clear();
            ss.str(s);
            ss >> s;
            if(s.compare("dim") == 0){
                int x, y, z;
                ss >> x >> y >> z;
                cout << "Definir dimensão: " << x << " em x, " << y << " em y, " << z << "em z\n";
                //passar x, y, e z
            }
            if (s.compare("putvoxel") == 0){
                int x, y, z;
                float r, g, b, a;
                ss >> x >> y >> z >> r >> g >> b >> a;
                cout << "Colocar voxel de cor " << r << "R " << g << "G " << b << "B " << a << "A\n";
                cout << "Na posição " << x << "X " << y << "Y " << z << "Z\n";
            }
        }
    }
    fin.close();
}

int Interpretador::getX(){
    return nx;
}

int Interpretador::getY(){
    return ny;
}

int Interpretador::getZ(){
    return nz;
}