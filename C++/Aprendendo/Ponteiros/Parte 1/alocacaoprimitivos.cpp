#include <iostream>
using namespace std;

int main(void){
    int *x; //criacao do ponteiro x
    x = new int; //o ponteiro x vai ser ponteiro para int
    *x = 3; //conteúdo de x recebe 3
    cout << "Endereço de x = " << &x << "\n"; //local onde x foi armazenado
    cout << "Valor de x = " << x << endl; //local que x armazena
    cout << "Conteúdo de x = " << *x << endl; //valor no local armazenado por x
    delete x;
}