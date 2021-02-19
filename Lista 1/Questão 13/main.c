#include <stdio.h>
#include <stdlib.h>

void organizar(float *vet, int q){
    float aux;
    for (int j = 0; j < q; j++){
        for (int l = j; l < q; l++){
            if (vet[l] < vet[j]){
                aux =  vet[l];
                vet[l] = vet[j];
                vet[j] = aux;
            }
        }
    }
    printf("\nEm ordem crescente, temos: ");
    for (int j = 0; j < q; j++){
        printf("%.2f", vet[j]);
        if (j != (q-1)){
            printf(", ");
        }
    }
    printf("\n");
}

int main(){
    int n, i;
    float *vetor;
    //Declarando o ponteiro como pf
    //Dizendo que os parâmetros serão um ponteiro para float e um int
    void (*pf) (float*, int) = organizar;
    printf("\nDigite a quantidade de valores para serem ordenados: ");
    scanf("%d", &n);
    vetor = malloc(n * sizeof(float));
    for (i = 0; i < n; i++){
        vetor[i] = 0;
    }
    printf("\nDigite os números: \n");
    for (i = 0; i < n; i++){
        scanf("%f", &vetor[i]);
    }
    (*pf) (vetor, n);
    printf("\n");
    free(vetor);
    return 0;
}