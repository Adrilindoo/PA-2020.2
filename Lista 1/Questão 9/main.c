#include <stdio.h>

int main(void){
    int vet[] = {4, 9, 13}, i;
    for (i = 0; i < 3; i++){
        printf("\n%d", *(vet+i));
    }
    printf("\n");

    for (i = 0; i < 3; i++){
        printf("\n%X", vet+i);
    }
    printf("\n");
    return 0;
}