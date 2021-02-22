#include <stdlib.h>
#include <stdio.h>

//Declarando a função mult, que recebe dois valores inteiros e mostra o seu produto.
//Ela pode receber os próprios valores pois não vai alterá-los, assim, não se faz necessário que ela
//receba dois ponteiros para int. O mesmo vale para a função soma
void Mult(int a, int b){
    printf("\nProduto = %d", a * b);
    printf("\n");
}

void Soma(int a, int b){
    printf("\nSoma = %d", a + b);
    printf("\n");
}

int main(){
    //Declarando as variáveis que serão utilizadas.
    //n1 e n2 são os números que serão utilizados nas operações e op é a opção de operação que será realizada
    int n1, n2, op;

    //Aqui eu defini pf1 como o ponteiro para a função Soma. Os parâmetros serão dois inteiros. o void se
    //dá pelo simples fato de que Soma é uma função do tipo void.
    void (*pf1) (int, int) = Soma;

    //Aqui eu defini pf2 como o ponteiro para a função Mult. Os parâmetros serão dois inteiros. o void se
    //dá pelo simples fato de que Mult é uma função do tipo void.
    void (*pf2) (int, int) = Mult;

    //Lendo o valor de n1
    printf("\nDigite o n1: ");
    scanf("%d", &n1);

    //Lendo o valor de n2
    printf("\nDigite o n2: ");
    scanf("%d", &n2);

    //Mostrando as opções e lendo o valor de op
    printf("\n[1] - Soma");
    printf("\n[2] - Multiplica");
    printf("\nQual operação deseja fazer? ");
    scanf("%d", &op);

    //Se op for 1, irá chamar a função Soma
    if (op == 1){
        pf1(n1, n2);
    }

    //Se op for 2, irá chamar a função Mult
    if (op == 2){
        pf2(n1, n2);
    }

    //Fim do programa
    return 0;
}