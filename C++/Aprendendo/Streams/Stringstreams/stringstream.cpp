#include <cstdlib> //exit()
#include <fstream> //fluxos
#include <iostream> //teclado e tela
#include <string>
#include <sstream>
using namespace std;

int main(void){
    ifstream fin; //de DENTRO do arquivo para fora
    string s; //objeto da classe string
    stringstream ss;
    fin.open("sstream.txt");
    if  (!fin.is_open()){
        exit(0);
    }
    while(getline(fin, s)){ //loop infinito para processar o arquivo txt, lendo uma linha de cada vez
        ss.clear(); //limpar o fluxo do sstream, medida de segurança
        ss.str(s); //o fluxo ss recebe o string s
        ss >> s; //trata como fluxo de entrada (lenome) e extrai o literal s
        cout << s << "\n"; //mostra o literal na saída
        if (s.compare("para") == 0){ //se for o comando 'para', vai mostrar a mensagem de parada
            cout << ">>>> cmd: Para veículo\n";
        }
        if (s.compare("adiante") == 0){ //se for o comando 'adiante', vai mostrar que deve ir adiante
            int dist; //virá uma medida indicando quantos metro deve ir adiante
            ss >> dist; //veja, ele pára a leitura no 'adiante', idientifica-o, e depois eu mando que continue lendo, pois haverá um outro valor
            cout << ">>>> cmd: Adiante " << dist << " metros\n";
        }
    }
    fin.close();
    ss.clear();
    ss << "José tinha " << 4 << " irmãos\n";
    ss << "x = " << 0.45 << "; y = " << 1E3 << endl;
    cout << ss.str() << endl;
}