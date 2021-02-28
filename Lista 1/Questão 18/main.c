#include <stdio.h>
#include <stdlib.h>

//z será a matriz produto
void multmat(int nlx, int nxy, int ncy, int **x, int **y, int **z){
    int soma = 0;
    for(int i = 0; i < nlx; i++){
        for(int j = 0; j < ncy; j++){
            for (int k = 0; k < nxy; k++){
                soma = soma + (x[i][k] * y[k][j]);
            }
            z[i][j] = soma;
            soma = 0;
        }
    }
}

void mostramat(int nlx, int nxy, int ncy, int **x, int **y, int **z){
    //mostrando a matriz x
    printf("\n[ ");
    for(int i = 0; i < nlx; i++){
        for(int j = 0; j < nxy; j++){
            //mostrando o valor
            printf("%d", x[i][j]);

            //colocando uma vírgula e um espaço depois de cada valor que não seja da última coluna
            if (j != nxy -1){
                printf(", ");
            }

            //quebra de linha até a última linha
            if (j == nxy-1){
                if (i != nlx-1){
                    printf("\n  ");
                }
            }
        }
    }
    printf(" ]"); //encerramento da matriz x
    printf("\n"); //espacinho pra ficar bonitin
    printf("\nX\n");  //simbolizando o produto
    printf("\n"); //espacinho pra ficar bonitin

    //mostrando a matriz y
    printf("[ ");
    for(int i = 0; i < nxy; i++){
        for(int j = 0; j < ncy; j++){
            //mostrando o valor
            printf("%d", y[i][j]);

            //colocando uma vírgula e um espaço depois de cada valor que não esteja na última coluna
            if (j != ncy -1){
                printf(", ");
            }
            //quebra de linha até a última linha
            if (j == ncy-1){
                if (i != nxy-1){
                    printf("\n  ");
                }
            }
        }
    }
    printf(" ]"); //encerramento da matriz y
    printf("\n"); //espacinho pra ficar bonitin
    printf("\n=\n");  //simbolizando o produto
    printf("\n"); //espacinho pra ficar bonitin

    //mostrando a matriz z
    printf("[ ");
    for(int i = 0; i < nlx; i++){
        for(int j = 0; j < ncy; j++){
            //mostrando o valor
            printf("%d", z[i][j]);

            //colocando uma vírgula e um espaço depois de cada valor que não seja da última coluna
            if (j != ncy - 1){
                printf(", ");
            }
        }

        //quebra de linha até a última linha
        if (i != nlx-1){
            printf("\n  ");
        }
    }
    printf(" ]\n"); //encerramento da matriz z
}

int main(){
    //c será a matriz produto
    //nla = número de linhas de a
    //nab = número de colunas de a e linhas de b
    //ncb = númerode colunas de b
    //formula: colunas de a = linhas de b => linhas de a e colunas de b

    //ALOCAÇÃO DINÂMICA DE MEMÓRIA
    int nla, nab, ncb, **a, **b, **c;
    nla = 1;
    nab = 2;
    ncb = 3;
    a = malloc(nla * sizeof(int*));
    b = malloc(nab * sizeof(int*));
    c = malloc(nla * sizeof(int*));
    a[0] = malloc(nla * nab * sizeof(int));
    b[0] = malloc(nab * ncb * sizeof(int));
    c[0] = malloc(nla * ncb * sizeof(int));
    //ALOCAÇÃO DINÂMICA DE MEMÓRIA

    //GUARDANDO OS PONTEIROS NOS PONTEIROS
    for(int i = 1; i < nla; i++){
        a[i] = a[i-1]+ nab;
        c[i] = c[i-1] + ncb;
    }
    for(int i = 1; i < nab; i++){
        b[i] = b[i-1] + ncb;
    }
    //GUARDANDO OS PONTEIROS NOS PONTEIROS

    //PREENCHENDO OS VALORES DE A E B
    for(int i = 0; i < nla; i++){
        for (int j = 0; j < nab; j++){
            a[i][j] = nla*i + j + 1;
        }
    }
    for(int i = 0; i < nab; i++){
        for (int j = 0; j < ncb; j++){
            b[i][j] = ncb*j + i + 1;
        }
    }
    //PREENCHENDO OS VALORES DE A E B

    //CHAMANDO A FUNÇÃO QUE CALCULA O PRODUTO
    multmat(nla, nab, ncb, a, b, c);
    //CHAMANDO A FUNÇÃO QUE CALCULA O PRODUTO

    //CHAMANDO A FUNÇÃO QUE MOSTRA AS MATRIZES
    mostramat(nla, nab, ncb, a, b, c);
    //CHAMANDO A FUNÇÃO QUE MOSTRA AS MATRIZES

    //ENCERRANDO
    printf("\nLiberando os ponteiros para ponteiros...");
    free(c[0]);
    free(b[0]);
    free(a[0]);
    printf("\nLiberando os ponteiros...\n");
    free(a);
    free(b);
    free(c);
    return 0;
}