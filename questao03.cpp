#include <stdio.h>

int main(){
    int i = 5, j = 3, *p, *q;

    p = i; // isso não pode
    q = &j;
    p = &*&i;
    i = (*&)j; // isso não pode
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q; // isso não pode


    return 0;
}
