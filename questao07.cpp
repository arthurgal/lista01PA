#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int mat[4] = {6,2,3,4}, *p, x;

    cout << p << endl;


    p = mat + 1; //como p � um ponteiro, ele vai receber o endere�o de memoria que t� o vetor mat e vai somar 4 bit, isso deve
                 //retornar o endere�o de memoria da posi��o 2 do vetor

    cout << p << endl;

    //p = mat++ n�o se pode incrementar um ponteiro assim
    //p = ++mat n�o se pode decrementar um ponteiro assim

    x = (*mat)++; // aqui espero que o retorno seja o primeiro valor do vetor mat = 6

    cout << x << endl;

    return 0;
}
