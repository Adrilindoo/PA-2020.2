#include <iostream>
#include "Vetor2d.cpp"
using namespace std;

int main(){
    Vetor2d v2, v3, v4;
    v2.setX(3); v2.setY(4);
    v3.setX(-1);v3.setY(10);

    //PRODUTO ESCALAR

    float result;
    result = v2*v3;
    cout << "Escalar = " << result << endl;

    //PRODUTO POR VETORIAL
    v4 = v2*2;
    cout << "v4 = (" << v4.getX() << ", " << v4.getY() << ")\n";
    return 0;
}