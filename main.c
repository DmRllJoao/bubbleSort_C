#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    int numeros[TAM];
    int i, aux, contador;
    int contador_numero = 1;


    printf("Digite os números para preencher a lista:\n");
    for (i = 0; i < TAM; i++){
        printf("Digite o número %d:",contador_numero);
        scanf("%d", &numeros[i]);
        contador_numero = contador_numero + 1;
    }
    printf("A lista ficou definida da seguinte forma:\n");
    for (i = 0; i < TAM; i++){
        printf(" %d\n", numeros[i]);
    }

    // Algoritmo bubbleSort

    for(contador = 1; contador < TAM; contador++){
        for(i = 0; i < TAM - 1; i++){
            if (numeros[i] > numeros[i+1]){
                aux=numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i + 1] = aux;
            }
        }
    }

    printf("A lista ordenada ficou da seguinte forma:\n");
    for(i = 0; i < TAM; i++){
        printf(" %d", numeros[i]);
    }


}
