/*9. Crie um programa que receba as notas de 4 provas de um aluno e calcule a sua m´edia. Use
uma fun¸c˜ao para calcular e retornar a m´edia.*/
#include <stdio.h>
#include <stdlib.h>

float calcMedia(float fp1, float fp2, float fp3, float fp4);

int main () {

float p1, p2, p3, p4, medianotas;

printf("Para saber a media do aluno primeiro insira as 4 notas\nNota 1: ");
scanf("%f", &p1);
while(p1<0){
    printf("ATENCAO, %.2f e uma nota invalida\nPor favor digite novamente(valor igual a 0 ou superior): ", p1);
    printf("\nNota 1: ");
    scanf("%f", &p1);
}
printf("Nota 2: ");
scanf("%f", &p2);
while(p2<0){
    printf("ATENCAO, %.2f e uma nota invalida\nPor favor digite novamente(valor igual a 0 ou superior): ", p2);
    printf("\nNota 2: ");
    scanf("%f", &p2);
}
printf("Nota 3: ");
scanf("%f", &p3);
while(p3<0){
    printf("ATENCAO, %.2f e uma nota invalida\nPor favor digite novamente(valor igual a 0 ou superior): ", p3);
    printf("\nNota 3: ");
    scanf("%f", &p3);
}
printf("Nota 4: ");
scanf("%f", &p4);
while(p4<0){
    printf("ATENCAO, %.2f e uma nota invalida\nPor favor digite novamente(valor igual a 0 ou superior): ", p4);
    printf("\nNota 4: ");
    scanf("%f", &p4);
}
printf("\nAs notas sao:\nNOTA 1: %.2f\nNOTA 2: %.2f\nNOTA 3: %.2f\nNOTA 4: %.2f", p1, p2, p3, p4);
medianotas = calcMedia(p1, p2, p3, p4);
printf("\n----------------------------------\nMEDIA: %.2f\n----------------------------------\n", medianotas);

return 0;

}

float calcMedia(float p1, float p2, float p3, float p4){
    float media=(p1+p2+p3+p4)/4;
    return media;
}