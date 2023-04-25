/*10. Elabore um programa que solicite os valores do peso e a altura de uma pessoa. Fa¸ca uma
fun¸c˜ao que receba esses dois n´umeros e retorne o valor do IMC (´ındice de massa corporal)
dessa pessoa. Formula: IMC = peso/altura^2*/
#include <stdio.h>
#include <stdlib.h>

float calcImc(float fpeso, float faltura);

int main () {

float peso, altura, imc;

printf("Bem vindo ao calculo rapido IMC\nPara saber o seu IMC digite:\nSeu Peso: ");
scanf("%f", &peso);
printf("Sua altura: ");
scanf("%f", &altura);
imc=calcImc(peso, altura);
printf("\n\nO seu IMC e : %f\nPara mais informacoes consulte as tabelas e verifique onde se encaixa\n\n", imc);

return 0;

}

float calcImc(float peso, float altura){
    float resultadoimc=peso/(altura*altura);
    return resultadoimc;
}