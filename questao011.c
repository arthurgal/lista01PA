#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value; // estou atribuindo "value" para o endere�o de memoria reservado para aloha[2]
    scanf("%f", &aloha); // aqui estou pedindo um valor para alocar no endere�o de memoria que esta reservado para aloha
    //aloha = value"; // isso n�o vai funcionar pois tem uma aspa em aberto
    printf("%f", aloha);
    coisas[4][4] = aloha[3]; // aqui to atribuindo o valor de aloha[3] ao local de memoria reservado para coisas[4][4]
    //coisas[5] = aloha; // "coisas" � um array bidimensional, a declara��o dele t� feita de forma errada
   // pf = value; // ponteiros recebem endere�os de memoria e n�o valores
    pf = aloha; //pf que � um ponteiro para float come�a a apontar para o endere�o de memoria de aloha


    return 0;
}
