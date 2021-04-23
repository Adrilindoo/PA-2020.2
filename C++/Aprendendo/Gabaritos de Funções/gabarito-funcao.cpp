#include <iostream>
using namespace std;

template <typename T>
T media (T a, T b){
    return (a+b)/2;
}//Algoritmos GENÉRICOS

int main(void){
    int a = 3, b = 4;
    float x = 3, y = 4;
    cout << "Média (int) = " << media<float>(a, b) << endl;
    //o <float> passa para a máquina que os parâmetros devem ser tratados como floats
    cout << "Média (float) = " << media(x, y) << endl;
    /*cout << "Média (???) = " << media(a, x) << endl;*/
    //a IDE reclama que não existe um método correto de fazer a função média com parâmetros de tipos diferentes
    //a menos que...
    cout << "Média (?) = " << media<float>(a, x) << endl;
}