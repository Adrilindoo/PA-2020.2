#include <iostream>
#include "excecao.cpp"
#include "mar.cpp"
using namespace std;

int main(){
    Excecao ex;
    try{
        throw ex;
    }
    catch(::exception& e){
        cout << e.what() << endl;
    }

    cout << endl;

    float a, b;
    cout << "Digite os valores: ";
    cin >> a >> b;
    try{
        cout << mar(a, b) << endl;
    }
    catch(const char *e){
        cout << "erro: " << e << endl;
    }
}