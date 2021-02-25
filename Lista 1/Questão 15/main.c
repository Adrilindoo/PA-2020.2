#include <stdlib.h>
#include <stdio.h>


//declarando a função de comparação
int comp(int e1, int e2){
    if (e1 > e2){
        return 1;
    }
    else{
        return 0;
    }
}

void organ(int *mat, int n, int (*f) (int, int)){
    //declarando as variáveis que vou precisar
    int aux, i, j;

    //o processo acontecerá n vezes
    for (i = 0; i < n; i++){

        //j só deve ir até n-1 pois se fosse até n, ele puxaria o valor n+1, que não existe
        for (j = 0; j < n-1; j++){

            //se os elementos a serem analizados forem iguais ocorrerá um erro pois haverá uma divsão por 0
            if(mat[j] != mat[j+1]){

                //fazendo a chamada da função
                if (f(mat[j], mat[j+1]) > 0){

                    //realizando a troca
                    aux = mat[j];
                    mat[j] = mat[j+1];
                    mat[j+1] = aux;
                }
            }
        }
    }
}

int main(){
    //Declarando que pf é ponteiro para a função comp;
    int (*pf) (int, int) = comp;

    //Declarando "valores" como um ponteiro e q como um inteiro;
    int *valores, q, i;

    //q será a quantidade de números que serão armazenados;
    printf("\nQuantos elementos serão digitados? ");
    scanf("%d", &q);

    //serão alocados os bytes necessários para armazenar os q números em valores;
    valores = malloc(q * sizeof(int));

    //pegando os valores pelo teclado
    for(i = 0; i < q; i++){
        scanf("%d", &valores[i]);
    }

    //chamando a função organ e passando um vetor, um inteiro e um ponteiro como parâmetros
    organ(valores, q, pf);

    //mostrando o vetor bonitinho
    for (i = 0; i < q; i++){
        printf("%d", valores[i]);
        if (i != q-1){
            printf(", ");
        }
    }

    //liberando o espaço alocado
    free(valores);
    printf("\n");
    return 0;
}