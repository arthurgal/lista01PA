#include <stdio.h>
#include <stdlib.h>

int comparaCrescente(const void *a, const void *b)
{
    if (*(int *)x == *(int *)y)         // converte do tipo void para int, acessa o elemento e compara
        return 0;                       // os dois valores são iguais.
    else if (*(int *)x - *(int *)y < 0) // mesma coisa do 'if' anterior
        return -1;                      // se 'x' for menor que 'y', 'x' vem antes de 'y'
    else
        return 1; // se 'x' for maior que 'y', 'x' vem depois de 'y'
} //Essa função é uma função de comparação.

int main()
{
    int n;
    float *e;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    e = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento: ");
        scanf("%f", &e[i]);
    }

    printf("Sequencia ordenada: ");
    qsort(e, n, sizeof(float), comparaCrescente); // chamada da função de ordenação qsort
    /* utilizou como parametro o ponteiro om os valores da sequencia digitada, numero de elementos recebido na entrada, tamanho em bytes
     e a função de comparação*/
    for (int i = 0; i < n; i++)
    {
        printf("%f "
               "",
               e[i]);
    }

    free(e);
    return 0;
}
