/*14. Voce esta coordenando um processo seletivo para admiss˜ao de alunos em uma escola e precisa
cadastrar os dados dos candidatos. Para isso, você irá construir um programa que armazene o
nome, idade e cidade onde reside cada candidato. Armazene essas informa¸c˜oes em uma estrutura de dados 
e utilize alocação dinâmica de memória para inserir cada candidato informado pelo usu´ario.
O usuário é quem deverá informar a quantidade de candidatos.Dica: struct + vetor dinâmico*/
#include <stdio.h>
#include <stdlib.h>

typedef struct candidatos{
    char nome[40];
    int idade;
    char cidade[20];
}Candidatos;


int main () {

    Candidatos *pcanditados;
    int quant, i;
 
    //Usuario determina quantos candidatos serão registrados
    printf("Digite quantos candidatos serao inseridos: ");
    scanf("%d", &quant);

    pcanditados=(Candidatos*)malloc(quant*sizeof(Candidatos));

    //Entrada dos dados referentes a cada candidato
    printf("\nSera(ao) inserido(s) %d candidato(s)\n", quant);
    for(i=0;i<quant;i++){
        printf("\nDigite o nome do %d cadidato: ", i+1);
        scanf(" %[^\n]", pcanditados[i].nome);
        printf("\nDigite a idade do %d cadidato: ", i+1);
        scanf("%d", &pcanditados[i].idade);
        printf("\nDigite a cidade onde reside o %d cadidato: ", i+1);
        scanf(" %[^\n]", pcanditados[i].cidade);
        printf("\n------------------------------------------\n");
    }

    //Saida dos dados digitados pelo usuario referente a cada usuário
    printf("\n\t\tCandidatos\n");
    for(i=0;i<quant;i++){
        printf("\n------------------------------------------\n");
        printf("\nCandidato %d - NOME: %s\n", i+1, pcanditados[i].nome);
        printf("Candidato %d - IDADE: %d\n", i+1, pcanditados[i].idade);
        printf("Candidato %d - CIDADE: %s\n", i+1, pcanditados[i].cidade);
    }

    return 0;
    
    }
