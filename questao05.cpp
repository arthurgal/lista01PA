#include <stdio.h>

int main()
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++)
    {
        printf("\ni = %d ",i); // 0
        printf("vet[%d] = %.1f ",i, vet[i]); // 1.1
        printf("*(f + %d) = %.1f ",i, *(f+i)); //1.1
        printf("&vet[%d] = %X ",i, &vet[i]); // endere�o
        printf("(f + %d) = %X ",i, f+i); // endere�o
    }


    return 0;
}

