#include <iostream> //teclado e tela
#include <string> //classe string
#include <fstream> //escrever ou ler um arquivo
#include <cstdlib> // exit()
using namespace std;

int main(void){
    ifstream fin; //fluxo de entrada
    string s;
    fin.open("nome.txt"); //abre o fluxo
        if (!fin.is_open()){ //verifica o fluxo
            exit (0);
        }
    fin >> s; //lê um dado do fluxo
    cout << "Leu: " << s << endl; //mostra o que foi lido
    fin.close();  //fecha o fluxo
}