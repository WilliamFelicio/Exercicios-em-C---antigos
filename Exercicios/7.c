/*7. Crie um programa que leia uma matriz de inteiros 5x5 e depois imprima s´o os n´umeros ´ımpares,
exibindo tamb´em a posi¸c˜ao (´ındice) em que ele se encontra na matriz.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {

int matriz[5][5], l,c;

//Gerando os valores da Matriz
for(l=0;l<5;l++){
    for(c=0;c<5;c++){
        printf("Linha %d Coluna %d = ", l+1, c+1);
        scanf("%d", &matriz[l][c]);
    }
}

//Imprimindo a Matriz gerada
printf("\nMatriz Gerada:\n");
for(l=0;l<5;l++){
    for(c=0;c<5;c++){
        printf("%2d ", matriz[l][c]);
    }
printf("\n");
}

//Imprimindo apenas os números impares da Matriz exibindo a posição(indice)
printf("\nEsses sao os numeros impares da Matriz e suas respectivas posicoes:\n\n");
for(l=0;l<5;l++){
    for(c=0;c<5;c++){
        if(matriz[l][c]%2!=0){
        printf("Linha %d Coluna %d: %2d ", l+1, c+1, matriz[l][c]);
        }
    }
printf("\n");
}

//Imprimindo a matriz só com os números impares
printf("\nApenas os Numeros impares da Matriz :\n\n");
for(l=0;l<5;l++){
    for(c=0;c<5;c++){
        if(matriz[l][c]%2!=0){
        printf("%2d ", matriz[l][c]);
        }
    }
printf("\n");
}

    return 0;
}