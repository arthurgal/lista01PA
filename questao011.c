#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value; // estou atribuindo "value" para o endereço de memoria reservado para aloha[2]
    scanf("%f", &aloha); // aqui estou pedindo um valor para alocar no endereço de memoria que esta reservado para aloha
    //aloha = value"; // isso não vai funcionar pois tem uma aspa em aberto
    printf("%f", aloha);
    coisas[4][4] = aloha[3]; // aqui to atribuindo o valor de aloha[3] ao local de memoria reservado para coisas[4][4]
    //coisas[5] = aloha; // "coisas" é um array bidimensional, a declaração dele tá feita de forma errada
   // pf = value; // ponteiros recebem endereços de memoria e não valores
    pf = aloha; //pf que é um ponteiro para float começa a apontar para o endereço de memoria de aloha


    return 0;
}
