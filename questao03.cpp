#include <stdio.h>

int main(){
    int i = 5, j = 3, *p, *q;

    p = i; // isso n�o pode
    q = &j;
    p = &*&i;
    i = (*&)j; // isso n�o pode
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q; // isso n�o pode


    return 0;
}
