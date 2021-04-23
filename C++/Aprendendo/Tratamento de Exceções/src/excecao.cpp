#include <exception>
using namespace std;

class Excecao : public ::exception{
    virtual const char* what() const throw(){
        return "Lançou exceção";
    }
};