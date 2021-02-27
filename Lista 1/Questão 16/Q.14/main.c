#include <stdlib.h>
#include <stdio.h>
#include <time.h> //clock(), clock_t, CLOCKS_PER_SEC

//Declaração da função de comparação que será usada no método qsort()
int comp(const void * a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    //declarando a variável t para guardar os tempos
    clock_t t;
    int n, i; //n será a quantidade de números e i será uma variável de controle

    float *vetor; //*vetor será o ponteiro que vai guardar os n espaços necessários para armazenar os n números a serem digitados
    
    printf("\nDigite a quantidade de valores para serem ordenados: ");
    scanf("%d", &n);
    vetor = malloc(n * sizeof(float));

    //Definindo o valor 0 para os conteúdos do espaço guardado pelo ponteiro vetor
    for (i = 0; i < n; i++){
        vetor[i] = 0;
    }
    //Aqui o usuário vai definir os n valores a serem armazenados
    printf("\nDigite os números: \n");
    for (i = 0; i < n; i++){
        scanf("%f", &vetor[i]);
    }

    //chamando a função clock()
    t = clock();
    //Chamada da função qsort()
    //Primeiro deve vir um ponteiro para o primeiro elemento do array a ser analizado
    //Em segundo vem o número de elementos do array
    //Depois o tamanho de cada elemento do array
    //Por último vem um ponteiro para uma função de comparação entre dois elementos que será chamada múltiplas vezes pelo qsort()
    qsort (vetor, n, sizeof(float), comp);
    t = clock() - t; //tempo total = tempo final - tempo inicial
    printf("\n");
    
    //Mostrar os elementos em ordem crescente
    for (i = 0; i < n; i++){
        printf("%.2f", vetor[i]);
        if (i != n-1){
            printf(", ");
        }
    }

    printf("\nO tempo de execução foi de %lf milissegundos", ((double)t)/(CLOCKS_PER_SEC/1000));
    //Liberação do espaço utilizado pelo ponteiro
    free(vetor);
    printf("\n");
    return 0;
}