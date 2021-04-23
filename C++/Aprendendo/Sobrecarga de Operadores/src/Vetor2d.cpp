#include "Vetor2d.h"
#include <iostream>
using namespace std;

void Vetor2d::setX(float mx){
    x = mx;
}

void Vetor2d::setY(float my){
    y = my;
}

float Vetor2d::getX(void){
    return x;
}

float Vetor2d::getY(void){
    return y;
}

float Vetor2d::operator *(Vetor2d v0){
    //o produto escalar retorna um número escalar (um número do conjunto dos reais, por exemplo)
    float escalar;
    //serão fornecidos duas variáveis do tipo Vetor2d, uma antes do * e uma após (v2*v3).
    //o x de v2 será múltiplicado pelo x de v3
    //o y de v2 será múltiplicado pelo y de v3
    //os dois são somados
    escalar = x*v0.x + y*v0.y;
    return escalar;
}

Vetor2d Vetor2d::operator *(float a){
    //antes do *: variável do tipo Vetor2d.
    //depois do *: um número
    Vetor2d ret;
    ret.x = x*a;
    ret.y = y*a;
    return ret;
}