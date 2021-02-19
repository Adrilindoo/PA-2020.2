#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i = 5, *p;
    p = &i;
    printf("\n%x %d %d %d %d\n", p, *p+2, **&p, 3**p, **&p+4);
    return 0;
}