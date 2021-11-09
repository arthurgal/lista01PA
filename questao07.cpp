#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int mat[4] = {6,2,3,4}, *p, x;

    cout << p << endl;


    p = mat + 1; //como p é um ponteiro, ele vai receber o endereço de memoria que tá o vetor mat e vai somar 4 bit, isso deve
                 //retornar o endereço de memoria da posição 2 do vetor

    cout << p << endl;

    //p = mat++ não se pode incrementar um ponteiro assim
    //p = ++mat não se pode decrementar um ponteiro assim

    x = (*mat)++; // aqui espero que o retorno seja o primeiro valor do vetor mat = 6

    cout << x << endl;

    return 0;
}
