#include <stdio.h>

int main(){
    int i = 5, *p;
    p = &i;

    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); //endereco de memoria de p em hexadecimal, 7, 5, 15, 9

    return 0;
}
