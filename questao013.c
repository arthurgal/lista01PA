#include <stdio.h>
#include <stdlib.h> //pra incluir o malloc()

void recebeValores(float *array, int n){
    for(int i = 0; i<n; i++){
        scanf("%f", &array[i]);
    }
}
void ordenar(float *array, int n){
    float aux;
    int c;
    for(int i = 0;i < n;i++){
        for(c = i+1;c < n;c++){
            if(array[i] > array[c]){
                aux = array[i];
                array[i] = array[c];
                array[c] = aux;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    float *vetor;
    vetor = malloc(n*sizeof(float)); //aloca memoria para o tamanho desejado no array
    recebeValores(vetor, n);
    printf("Antes:\n");
    for(int i = 0; i< n; i++){
        printf("%4.2f\n", vetor[i]);
    }
    ordenar(vetor, n);
    printf("Depois:\n");
    for(int i = 0; i< n; i++){
        printf("%4.2f\n", vetor[i]);
    }
    free(vetor); //libera a memoria
    return 0;
}
