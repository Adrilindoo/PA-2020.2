#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

void writeOFF(string filename){
    ofstream escrever;
    escrever.open(filename);
    if (!escrever.is_open()){ //verifica o fluxo
                exit (0);
            }
    escrever << "OFF\n";
    escrever.close();
}

int main(void){
    string s;
    s = "teste.txt";
    writeOFF(s);
}