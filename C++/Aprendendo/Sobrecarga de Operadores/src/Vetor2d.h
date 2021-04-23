#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
    private:
        float x, y;
    public:
        void setX(float mx);
        void setY(float my);
        float getX();
        float getY();
        //sobrecarga do operador *
        float operator *(Vetor2d v0); //produto escalar
        Vetor2d operator *(float a); //produto por escalar
};

#endif // VETOR2D_H