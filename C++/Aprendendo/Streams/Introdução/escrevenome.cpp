#include <iostream> //entrada pelo teclado e saída pela tela
#include <cstdlib> //exit()
#include <fstream> //escrever ou ler um arquivo
using namespace std;

int main(void){
    ofstream fout; //declaração do fluxo de saída 
    fout.open("nome.txt"); //abertura do fluxo
    if (!fout.is_open()){ //checagem da abertura
        exit (1);
    }
    fout << "Adriel Torquato\n"; //escrita
    fout.close(); //fechar o fluxo
    cout << "Processo finalizado com sucesso\n";
}