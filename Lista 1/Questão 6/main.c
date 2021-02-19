#include <stdio.h>

int main(void){
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5}, *f;
    f = vet;
    printf("Contador/Valor/Valor/Endereço/Endereço");
    for (int i = 0; i < 5; i++){
        printf("\ni = %d ", i);
        printf("vet[%d] = %.1f ", i, vet[i]);
        printf("*(f+%d) = %.1f ", i, *(f+i));
        printf("&vet[%d] = %X ", i, &vet[i]);
        printf("(f+%d) = %X ", i, f+i);
    }
    printf("\n");
    return 0;
}