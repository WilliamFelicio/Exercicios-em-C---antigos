/*8. Crie um programa que simule uma agenda telefonica. Para cada pessoa, deve-se ter os seguintes
dados:
 Nome
 E-mail
 Telefone
O programa deve ser capaz de ler at´e 10 entradas. Ap´os a leitura, liste na tela os registros
existentes.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct agenda{
    char nome[30];
    char email[30];
    int tell;
}Agenda;


int main () {

printf("Bem vindo a AGENDA\n");
printf("Sera possivel agendar ate 10 pessoas\n");

{
    Agenda agen[10];
    
    int quant, i;

    printf("Para isso, PRIMEIRO\nDigite quantas pessoas deseja agendar: ");
    scanf("%d", &quant);
    while(quant<=0 || quant>10){
        printf("\n%d e uma quantidade invalida, por favor digite novamente um valor entre 1 e 10: ", quant);
        scanf("%d", &quant);
    }
    
    for(i=0;i<quant;i++){
        printf("\nDigite o Nome da %d pessoa: ", i+1);
        scanf(" %[^\n]", agen[i].nome);
        printf("Digite o email da %d pessoa: ", i+1);
        scanf(" %[^\n]", agen[i].email);
        printf("Digite o telefone da %d pessoa: ", i+1);
        scanf("%d", &agen[i].tell);
    }
    for(i=0;i<quant;i++){
        printf("\n------------------------------------------\n");
        printf("\nNome da %d pessoa: %s\n", i+1, agen[i].nome);
        printf("eMail da %d pessoa: %s\n",  i+1, agen[i].email);
        printf("Telefone da %d pessoa: %d\n", i+1, agen[i].tell);
    }
}

return 0;
   
}