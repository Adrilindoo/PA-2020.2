#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x[] = {4, 3, -8, 13};
    vector <int> v(x, x+4);
    vector <int> ::iterator it;
    vector <int> ::reverse_iterator rit;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it;
        if (it != v.end() - 1){
            cout << ", ";
        }
    }
    cout << endl << endl;

    for (rit = v.rbegin(); rit != v.rend(); rit++){
        cout << *rit;
        if (rit != v.rend() - 1){
            cout << ", ";
        }
    }
    cout << endl << endl;

    for (it = v.begin(); it != v.end()-2; it++){
        cout << *it;
        if (it != v.end() - 3){
            cout << ", ";
        }
    }
    cout << endl << endl;

    for (it = v.begin()+1; it != v.end()-1; it++){
        cout << *it;
        if (it != v.end() - 2){
            cout << ", ";
        }
    }
    cout << endl;
}