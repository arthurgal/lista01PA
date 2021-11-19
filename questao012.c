#include <stdio.h>
#include <stdlib.h>

/* ponteiros para fun��o � a mesma coisa que um ponteiro � para um inteiro, ele guarda
  endere�o de uma fun��o, sendo poss�vel acessa-lo atravez de uma vari�vel do tipo ponteiro para fun��o
  ponteiro. O nde a funcao pode ser passadoa como argumentos para outras fun��es. */

// EXEMPLO

int valores[] = {50, 10, 100, 90, 30, 35};

int compare(const void *x, const void *y)
{
  return (*(int *)x - *(int *)y);
}//Fun��o compara��o

int main()
{
  int n;
  qsort(valores, 6, sizeof(int), compare);
  for (n = 0; n < 6; n++)
    printf("%d ", values[n]);
  return 0;
}//Fim c�digo
