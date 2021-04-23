#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
    public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){};
    virtual void draw() = 0; //virtual ativa o draw da subclasse ao invés do draw da superclasse (ponteiros)
                             //com o "= 0" no final, ele se torna um método virtual puro, que não podem ser
                             //instanceados, mas podem existir ponteiros para eles
};

#endif // FIGURAGEOMETRICA_H