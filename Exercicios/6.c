/*6-Fa¸ca um programa em C que leia um vetor de 20 valores inteiros e copie os dados para outro
vetor na ordem inversa e no final exibe os elementos dos dois vetores.*/
#include <stdio.h>
#include <stdlib.h>


int main () {

int vetor[20], inverso[20], i, tam=20;

//Entrada dos elementos do vetor
for(i=0;i<20;i++){
    printf("Digite o %d elemento do vetor: ", i+1);
    scanf("%d", &vetor[i]);
}
//processo de inversão
for(i=0;i<20;i++){
    inverso[i]=vetor[tam-1];
    tam--;
}
//Impressão do vetor original
printf("\nO vetor original e: \n");
for(i=0;i<20;i++){
    printf("%d ", vetor[i]);
}
//Impressão vetor inverso
printf("\nO vetor inverso e: \n");
for(i=0;i<20;i++){
    printf("%d ", inverso[i]);
}

return 0;

}