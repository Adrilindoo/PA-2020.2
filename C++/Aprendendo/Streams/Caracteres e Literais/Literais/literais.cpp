#include <cstdlib> //exit()
#include <fstream> //fluxos
#include <iostream> //teclado e tela
#include <string>
using namespace std;

int main(void){
    ifstream fin;
    string str;
    char buffer[50];
    fin.open("literais.txt");
    if (!fin.is_open()){
        exit(0);
    }
    //fin.get(buffer, 50); //-> capacidade e armazenamento
    //cout << "Buffer = " << buffer << endl;
    //getline(fin, str); //-> usa o fluxo de entrada e um objeto da classe string e não tem tamanho pré-fixado, porém só lê uma linha, e grava essa linha no 'string'
    getline(fin, str, ','); // -> o mesmo do de cima, só que agora tem um delimitador, que é uma vírgula
    cout << "str = " << str << endl;
    getline(fin, str, ',');
    cout << "str = " << str << endl;
}