#include <stdlib.h>
#include <stdio.h>

int compare(const void * a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n, i;
    float *vetor;
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
    qsort (vetor, n, sizeof(float), compare);
    for (i = 0; i < n; i++){
        printf("%.2f", vetor[i]);
        if (i != n-1){
            printf(", ");
        }
    }
    free(vetor);
    printf("\n");
    return 0;
}