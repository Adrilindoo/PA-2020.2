#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    vector < vector<int> > matriz;
    //definindo os valores de v
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    //criando uma matriz com os elementos de v
    matriz.push_back(v);
    matriz.push_back(v);
    matriz.push_back(v);

    //mostrando a matriz
    for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz[0].size(); j++){
            cout << matriz[i][j];
            if (j != matriz.size() - 1){
                cout << ", ";
            }
        }
        cout << endl;
    }

    cout << endl;
    matriz[1][1] = -1; //definindo o valor [1][1] da matriz como -1

       for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz[0].size(); j++){
            cout << matriz[i][j];
            if (j != matriz.size() - 1){
                cout << ", ";
            }
        }
        cout << endl;
    }
}