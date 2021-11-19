#include <stdio.h>
#include <stdlib.h> // adicionada biblioteca para a funcao qsort()

/*
   funcao compara_int, compara o valor de x e y,
   se caso o valor de x for maior que o de y retorna
   um numero maior que 0, se y for maior que a ele retorna
   um valor menor que 0, e se forem iguais retora 0.
*/
int compara_int(const void *x, const void *y)
{
    return (*(int *)x - *(int *)y);
}

int main()
{
    int n;
    printf("Digite o tamanho do vetor: ");

    // pegando o tamanho do vetor do usuario
    scanf("%d", &n);
    int v[n];

    printf("Digite os valores do vetor: ");

    // pegandos os valores do vetor do usuario
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    /*
        A funçao qsort recebe como parâmetro o endereço do primeiro
        elemento do vetor, depois o tamanho do vetor, e terceiro parametro
        é o tamanho em bytes do tipo de cada elemento do vetor e o ultimo
        parametro um ponteiro para funcao que compara os elementos do vetor
        como destrito la em cima.
    */

    qsort(v, n, sizeof(int), compara_int);

    // imprimindo o vetor ja ordenado
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}
