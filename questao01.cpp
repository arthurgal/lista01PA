#include <stdio.h>

int main(){
    int i = 3, j = 5;
    int *p, *q; //p e q são ponteiros de inteiros
    p = &i; // // p recebe o endereço de memoria de i
    q = &j; // q recebe o endereço de memoria de j

    p == &i; //p tem o mesmo enredeço de memoria que i? True
    printf("'p == &i' retorna %d\n", (p== &i)); //retorna o valor 1.
    printf("'*p - *q' retorna %d \n ", (*p - *q));//retorna o valor -2.
    printf("'**&p' retorna %d \n ", (**&p)); //retorna o valor 3
    printf("'3 - *p/(*q) + 7' retorna %d \n ", (3 - *p/(*q) + 7)); //retorna o valor 10

    return 0;
}
