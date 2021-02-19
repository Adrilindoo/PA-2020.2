#include <stdio.h>

int main(){
    int i = 0, j = 1, *p, *q;
    //a) 
    //p = &i; //p recebe o caminho de i

    //b) 
    //*q = &j;
    //printf("\n%d", *q);
    //printf("\n%p\n", q);

    //c)
    //p = &*&i;
    //printf("\n%d", *p);
    //printf("\n%p\n", p);

    //d)
    //i = (*&)j;

    //e)
    //i = *&j;
    //printf("\n%d\n", i);

    //f)
    //i = &&j;

    //g)
    //q = *p;
    //printf("\n%d\n", q);

    //h)
    i = (*p) + *q;
    printf("%d", i);
    return 0;
}