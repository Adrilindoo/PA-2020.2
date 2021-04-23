#include <iostream>
#include <fstream>
#include "Voxel.h"
#include "sculptor.h"
using namespace std;

int main(){
 //CUBO MÁGICO PRATEADO

    /*//33x33x33 para ter espaço de colocar os cubos de apoio e as listras e ficar divisível por 3
    Sculptor ce(33, 33, 33);

    //essas matrizes representam os saltos dados em cada dimensão.
    int x[3], y[3], z[3];
    //primeiro salto de x é de 7 blocos, o segundo é de 9 blocos e o terceiro é de 11 blocos e assim por diante
    x[0] = 7; x[1] = 9; x[2] = 11;
    y[0] = 12; y[1] = 10; y[2] = 5;
    z[0] = 15; z[1] = 8; z[2] = 4;

    //criando as bordas
    ce.bordas();

    //definindo a cor como cinza
    ce.setColor(0.5, 0.5, 0.5, 1.0);

    //LADOS 1 E 5
    for(int i = 1; i < 32; i = i+30){
        //primeiramente, os lados independentes de x serão preenchidos
        int j = 2;
        //comça no 3 bloco do eixo y, pois o primeiro é do bloco de apoio e no segundo estão as bordas
        for (int l = 0; l < 3; l++){
            //k é declarado somente nesse local para que, quando o programa sair do laço for abaixo, k retorne às suas propriedades iniciais
            int k = 2;
            //mesmo motivo do j, só que agora é em k, ou seja, no eixo z
            for (int m = 0; m < 3; m++){
                //primeiro serão preenchidos os blocos de baixo e no eixo z crescente (em direção à tela)
                //depois sobe em y e o processo se repete
                ce.putBox(i, i+1, j, j+y[l], k, k+z[m]);
                k = k+z[m]+1;
                //ce.setColor(0.5, 0.5, 0.5, 1.0);
                //esse +1 é para que a linha possa ser preenchida depois
                //com um salto de 12 blocos, o k vai preencher do 12 ao 13
                //porém 2+12 = 14 -> reservado para a divisória
            }
            j = j+y[l]+1;
        }
    }

    //LADOS 2 E 4
    for(int j = 1; j < 32; j = j+30){
        int i = 2;
        for (int l = 0; l < 3; l++){
            int k = 2;
            for (int m = 0; m < 3; m++){
                ce.putBox(i, i+x[l], j, j+1, k, k+z[m]);
                //ce.putEllipsoid(x[l]/2, j, z[l]/2, x[l]/2, j, z[l]/2);
                k = k+z[m]+1;
            }
            i = i+x[l]+1;
        }
    }

    //LADOS 3 E 6
    for(int k = 1; k < 32; k += 30){
        int i = 2;
        for (int l = 0; l < 3; l++){
            int j = 2;
            for (int m = 0; m < 3; m++){
                ce.putBox(i, i+x[l], j, j+y[m], k, k+1);
                //ce.putEllipsoid(x[l]/2, y[l]/2, k, x[l]/2, y[l]/2, k);
                j = j+y[m]+1;
            }
            i = i+x[l]+1;
        }
    }

    //ce.preenche();
    ce.writeOFF("ce.off");

*/
//-----------------------------//
//-----------------------------//
//-----------------------------//

    //CUBO MÁGICO NORMAL
    Sculptor cubo(67, 35, 35);

    //criando as bordas
    cubo.bordas();
    cubo.setColor(0.0, 0.0, 0.0, 1.0);
    cubo.putBox(18, 49, 2, 33, 2, 33);
    cubo.cutBox(18, 49, 3, 32, 3, 32);
    cubo.cutBox(19, 48, 2, 33, 3, 32);
    cubo.cutBox(19, 48, 3, 32, 2, 33);

    //AZUL E VERDE
    cubo.setColor(0.0, 0.0, 1.0, 1.0);
    for (int i = 18; i < 49; i += 30){
        for(int j = 3; j < 33; j = j+10){
            for (int k = 3; k < 33; k = k+10){
                if (j == 13 && k == 13){
                    cubo.putEllipsoid(i, 17, 17, 1, 5, 5);
                }
                else{
                    cubo.putBox(i, i+1, j, j+9, k, k+9);
                }
            }
        }
        cubo.setColor(0.0, 1.0, 0.0, 1.0);
    }

    //BRANCO E AMARELO
    cubo.setColor(1.0, 1.0, 1.0, 1.0);
    for(int j = 2; j < 33; j += 30){
        for (int i = 19; i < 49; i += 10){
            for (int k = 3; k < 33; k = k + 10){
                if (i == 29 && k == 13){
                    cubo.putEllipsoid(33, j, 17, 5, 1, 5);
                }
                else{
                    cubo.putBox(i, i+9, j, j+1, k, k+9);
                }
            }
        }
        cubo.setColor(1.0, 1.0, 0.0, 1.0);
    }

    //VERMELHO E LARANJA
    cubo.setColor(1.0, 0.0, 0.0, 1.0);
    for (int k = 2; k < 33; k+=30){
        for (int i = 19; i < 49; i+=10){
            for(int j = 3; j < 33; j+=10){
                if (i == 29 && j == 13){
                    cubo.putEllipsoid(33, 17, k, 5, 5, 1);
                }
                else{
                    cubo.putBox(i, i+9, j, j+9, k, k+1);
                }
            }
        }
        cubo.setColor(1.0, 0.5, 0.0, 1.0);
    }

    //BOLINHAS
    cubo.setColor(0.3, 0.3, 0.3, 0.5);
    for (int i = 3; i < 65; i+=61){
        for (int j = 3; j < 33; j+= 29){
            for (int k = 3; k < 33; k+=29){
                if (i == j && j == k && k == 3){
                }
                cubo.putSphere(i, j, k, 9);
            }

        }
    }

    cubo.corte(0, 67, 0, 35, 0, 35);

    cubo.preenche(19, 48, 3, 32, 3, 32);
    cubo.writeOFF("cm.off");

    return 0;
}
