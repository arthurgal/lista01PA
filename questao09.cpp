#include <stdio.h>

int main()
{
    char x[4];

    printf("x = %d \n", x + 1); // 4093 soma 1
    printf("x = %d \n", x + 2); // 4094 soma 2
    printf("x = %d \n", x + 3); // 4095 soma 3
    printf("######################################## \n");

    /*int x[4];

    printf("x = %d \n", x + 1); // 4094 soma 2
    printf("x = %d \n", x + 2); // 4096 soma 4
    printf("x = %d \n", x + 3); // 4098 soma 6
    printf("######################################## \n");
    */

    /*
    float x[4];
    printf("x = %d \n", x + 1); // 4096 soma 4
    printf("x = %d \n", x + 2); // 4100 soma 8
    printf("x = %d \n", x + 3); // 4104 soma 12
    printf("######################################## \n");
    */

    /*
    double x[4];
    printf("x = %d \n", x + 1); // 4100 soma 8
    printf("x = %d \n", x + 2); // 4108 soma 16
    printf("x = %d \n", x + 3); // 4116 soma 24
    */

    /*

    como o char ocupa 1 byte, o int 2 bytes, o float 4 bytes e o double 8 bytes
    se espera esses resultados supondo que o valor inical de x[0] seja 4092

    */


    return 0;
}
