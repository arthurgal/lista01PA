#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int pulo[5] = {1,2,3,4,5};
    cout << (*(pulo + 2)); //aqui ele pega o endereço de memoria do vetor e soma mais 8 bits que leva pra casa 3 que está com o valor 3



    return 0;
}
