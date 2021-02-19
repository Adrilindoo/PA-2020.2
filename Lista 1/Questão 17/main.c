#include <stdio.h>
#include <stdlib.h>

void somavet(int *a, int *b, int *c, int qt){
    for (int j = 0; j < qt; j++){
        c[j] = a[j] + b[j];
    }
    for (int j = 0; j < qt; j++){
        printf("%d", c[j]);
        if (j != qt-1){
            printf(", ");
        }
    }
    printf("\n");
}

int main(){
    int *x, *y, *z, tam, i;
    printf("\nDigite o tamanho dos vetores: ");
    scanf("%d", &tam);
    x = malloc(tam * sizeof(int));
    for (i = 0; i < tam; i++){
        x[i] = 3*i + 1;
    }
    y = malloc(tam * sizeof(int));
    for (i = 0; i < tam; i++){
        y[i] = 2*i + 5;
    }
    z = malloc(tam * sizeof(int));
    somavet (x, y, z, tam);
    free(z);
    free(y);
    free(x);
    return 0;
}