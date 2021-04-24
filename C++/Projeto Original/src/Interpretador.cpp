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
                int x, y, z;
                ss >> x >> y >> z;
                //figs.push_back(new Sculptor(x, y, z));
            }
            if (s.compare("putvoxel") == 0){
                int x, y, z;
                ss >> x >> y >> z;
                //figs.push_back(new PutVoxel(x, y, z, r, g, b, a));
            }
        }
    }
    return figs;
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

/*void Interpretador::getX(){
    return nx;
}

void Interpretador::getY(){
    return ny;
}

void Interpretador::getZ(){
    return nz;
}*/