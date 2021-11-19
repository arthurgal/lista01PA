#include <stdio.h>
#include <stdlib.h>

/* ponteiros para função é a mesma coisa que um ponteiro é para um inteiro, ele guarda
  endereço de uma função, sendo possível acessa-lo atravez de uma variável do tipo ponteiro para função
  ponteiro. O nde a funcao pode ser passadoa como argumentos para outras funções. */

// EXEMPLO

int valores[] = {50, 10, 100, 90, 30, 35};

int compare(const void *x, const void *y)
{
  return (*(int *)x - *(int *)y);
}//Função comparação

int main()
{
  int n;
  qsort(valores, 6, sizeof(int), compare);
  for (n = 0; n < 6; n++)
    printf("%d ", values[n]);
  return 0;
}//Fim código
