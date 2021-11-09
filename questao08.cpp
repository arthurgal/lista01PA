#include <stdio.h>

int main()
{
    // o esperado é que seja gerado os valores do vetor
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%d ",*(vet+i));
    }
    printf("\n");

    printf("####################################### \n");
    // o esperado é que seja gerado os valores do endereço de memoria em hexadecimal
    for(i=0; i<3; i++)
    {
        printf("%X ",vet+i);

    }
    return 0;
}
