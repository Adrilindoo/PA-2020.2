#include <stdio.h>

int main(){
    int valor, *p1, idade, vetor[3], *p4, *p5;
    float temp, *p2;
    char  aux, *nome = "Ponteiros", *p3;
    
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("\n%d\n", valor);

    /* (b) */
    temp = 26;
    p2 = &temp;
    *p2 = 29.0;
    printf("\n%.1f\n", temp);

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("\n%c\n", aux);

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("\n%c\n", aux);

    /* (e) */
    p3 = nome;
    printf("\n%c\n", *p3);

    /* (f) */
    p3 = p3 + 4;
    printf("\n%c\n", *p3);

    /* (g) */
    p3--;
    printf("\n%c\n", *p3);

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("\n%d\n", idade);

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("\n%d\n", idade);

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("\n%d\n", idade);

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("\n%d\n", idade);

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("\n%d\n", *p5);

    /* (n) */
    *p5;
    printf("\n%d\n", *p5);
    return 0;
}