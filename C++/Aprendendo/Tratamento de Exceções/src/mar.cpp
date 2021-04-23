#include <iostream>
using namespace std;

float mar(float x, float y){
    if (x+y == 0){
        throw "x = -y (DENOMINADOR NULO)";
    }
    return 2*x*y/(x+y);
}