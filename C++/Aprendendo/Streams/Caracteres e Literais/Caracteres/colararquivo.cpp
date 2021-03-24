#include <cstdlib> //exit()
#include <fstream> //fluxos
#include <iostream> //teclado e tela
using namespace std;

int main(void){
    ifstream fin; //
    ofstream fout;
    char ch;
    fin.open("entrada.txt"); //vai entrar no arquivo e ler o seu conteúdo
    fout.open("saida.txt"); //vai pegar o conteúdo do arquivo e colocá-lo em outro lugar
    while (fin.get(ch)){ //enquanto a leitura for verdadeira
        fout.put(ch); //cada caractere vai ser colocado na saída
    }
    fin.close(); //fecha
    fout.close(); //fecha
    cout << "\nProcesso finalizado\n";
}