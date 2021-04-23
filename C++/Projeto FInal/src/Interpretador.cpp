#include "Interpretador.h"
#include <fstream>
#include <sstream>
#include "PutBox.h"
#include "CutBox.h"
#include "PutVoxel.h"
#include "CutVoxel.h"
#include "PutSphere.h"
#include "CutSphere.h"
#include "PutEllipsoid.h"
#include "CutEllipsoid.h"
#include <iostream>

Interpretador::Interpretador(){

}

vector <FiguraGeometrica*> Interpretador::parse(string filename){
    vector <FiguraGeometrica*> figs;
    ifstream fin;
    stringstream ss;
    string s, token;

    fin.open(filename.c_str());
    //verifica se o fluxo foi aberto
    if (!fin.is_open()){
        cout << "Não foi possível abrir " << filename << endl;
        exit(0);
    }

    while (fin.good()){
        //fin >> s;
        getline(fin, s);
        if(fin.good()){
            //lança o string s no fluxo ss
            ss.clear();
            ss.str(s);
            ss >> token;
            //realiza o parsing dos tokens
            if(ss.good()){
                //dimensões da tela
                if(token.compare("dim") == 0){
                    ss >> nx >> ny >> nz;
                }
                //usuário define brush
                else if(token.compare("putvoxel") == 0){
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                    figs.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
                }
                else if(token.compare("cutvoxel") == 0){
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                    figs.push_back(new CutVoxel(x0, y0, z0, r, g, b, a));
                }
                else if(token.compare("putbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                else if(token.compare("cutbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                else if(token.compare("putsphere") == 0){
                    int x0, y0, z0, radius;
                    ss >> x0 >> y0 >> z0 >> radius >> r >> g >> b >> a;
                    figs.push_back(new PutSphere(x0, y0, z0, radius, r, g ,b ,a));
                }
                else if(token.compare("cutsphere") == 0){
                    int x0, y0, z0, radius;
                    ss >> x0 >> y0 >> z0 >> radius >> r >> g >> b >> a;
                    figs.push_back(new CutSphere(x0, y0, z0, radius, r, g ,b ,a));
                }
                else if(token.compare("putellipsoid") == 0){
                    int x0, y0, z0, rx, ry, rz;
                    ss >> x0 >> y0 >> z0 >> rx >> ry >> ry >> r >> g >> b >> a;
                    figs.push_back(new PutEllipsoid(x0, y0, z0, rx, ry, rz, r, g ,b ,a));
                }
                else if(token.compare("cutellipsoid") == 0){
                    int x0, y0, z0, rx, ry, rz;
                    ss >> x0 >> y0 >> z0 >> rx >> ry >> ry >> r >> g >> b >> a;
                    figs.push_back(new CutEllipsoid(x0, y0, z0, rx, ry, rz, r, g ,b ,a));
                }
            }
        }
    }
    return(figs);
}

int Interpretador::getDImX(){
    return nx;
}

int Interpretador::getDimY(){
    return ny;
}

int Interpretador::getDimZ(){
    return nx;
}