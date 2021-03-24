#include <iostream>
using namespace std;

int main(void){
    int *x; //criacao do ponteiro x
    x = new int[10]; //o ponteiro x vai ser ponteiro para int
    x[2] = 3; //conteúdo de x recebe 3
    cout << "Endereço de x = " << &x << "\n"; //local onde x foi armazenado
    cout << "Valor de x = " << x << endl; //local que x armazena
    cout << "Conteúdo de x[2] = " << x[2] << endl; //valor no local armazenado por x
    delete [] x;
}