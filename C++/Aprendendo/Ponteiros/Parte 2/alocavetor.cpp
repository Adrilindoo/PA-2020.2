#include <iostream>
using namespace std;

class Vetor2d{
    private: 
        float x, y;
    public:

    Vetor2d(){
        cout << "Construtor padrão\n";
        x = 0; y = 0;
    };

    Vetor2d(float mx, float my){
        cout << "Construtor com parâmetros\n";
        x = mx; y = my;
    };

    ~Vetor2d(){
        cout << "Destrutor\n";
    }
    void print(){
        cout << "(" << x << ", " << y << ")\n";
    }
};

int main(void){
    Vetor2d *v1, *v2, *v3;
    v1 = new Vetor2d;
    v2 = new Vetor2d(3, 4);
    v3 = new Vetor2d[5];

    v1->print();
    v2->print();
    v3[2].print();
    (v3+2)->print();

    delete v1;
    delete v2;
    delete [] v3;
}