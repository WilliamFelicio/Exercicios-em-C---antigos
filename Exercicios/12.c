/*12. O laborat´orio de agropecu´aria da Universidade Federal do Capa Bode tem um termˆometro
de extrema precis˜ao, utilizado para aferir as temperaturas de uma estufa onde cultivam uma
variedade de jaca transgˆenica, com apenas um caro¸co do tamanho de uma semente de laranja.
O problema ´e que este termˆometro d´a os resultados na escala Kelvin (K) e os pesquisadores que
atuam perto da estufa s˜ao americanos, acostumados com a escala Fahrenheit (F). Vocˆe deve
criar um programa para pegar uma lista de 24 temperaturas em Kelvin e convertˆe-las para
Fahrenheit. O problema maior ´e que esses pesquisadores querem que vocˆe fa¸ca essa convers˜ao e
imprima os resultados utilizando ponteiros, e n˜ao as variaveis.*/
#include <stdio.h>
#include <stdlib.h>

int main () {

int i;
float kelvin[24], *ponteirof;

//Input dos dados
printf("INSIRA AS 24 TEMPERATURAS EM KELVIN\n");
for(i=0;i<24;i++){
    printf("Digite a %d temperatura: ", i+1);
    scanf("%f", &kelvin[i]);
}

//Imprimindo os valores digitados
printf("\nAS TEMPERATURAS EM KELVIN SAO:");
for(i=0;i<24;i++){
    printf("\n%d temperatura em Kelvin: %.2f", i+1, kelvin[i]);
}

//Conversão e impressão dos dados para Fahrenheit
printf("\n\n\nCONVERSAO DAS TEMPERATURAS EM KELVIN PARA FAHRENHEIT:\n------------------------------------");
for(i=0;i<24;i++){
    ponteirof=&kelvin[i];
    *ponteirof=((kelvin[i]-273)*1.8)+32;
    printf("\n%d temperatura em Fahrenheit: %.2f", i+1, *ponteirof);
    printf("\n------------------------------------");
}

    return 0;

}