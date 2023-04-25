/*13. Uma empresa fabricante de brinquedos precisa reajustar o pre¸co para venda de v´arios itens do
seu cat´alogo, devido ao aumento do custo de produ¸c˜ao. Para isso, deve fazer um programa que
leia a quantidade de produtos que ser´a atualizada, o valor de cada um desses brinquedos e aplicar uma taxa de corre¸c˜ao. A taxa de corre¸c˜ao ´e a mesma para todos os brinquedos (5%). Fa¸ca
um programa que utilize um Vetor Dinˆamico para representar os brinquedos do cat´alogo dessa
ind´ustria que ter˜ao seu valor reajustado, ent˜ao pe¸ca para que o usu´ario informe a quantidade
de brinquedos e o valor de cada um, aplique a taxa de corre¸c˜ao e depois apresente os valores
corrigidos na tela.
Informa¸c˜oes a serem apresentadas:
 Quantidade de Produto para ser atualizado
 O valor de cada brinquedo
 Novo valor do brinquedo*/
#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, quant;
    float correcao, *pvalor, *pnovovalor;

    printf("Para reajustar os precos do catalogo, siga os passos abaixo\nPrimeiro Digite a porcentagem de correcao: ");
    scanf("%f", &correcao);
    printf("Agora Digite quantos produtos terao os seus valores reajustados: ");
    scanf("%d", &quant);

   
    pvalor=(float*)malloc(quant*sizeof(float));
    pnovovalor=(float*)malloc(quant*sizeof(float));

 if (pvalor == NULL && pnovovalor == NULL) {
        printf("Erro: Memoria insuficiente!\n");
    }
    
    else {
    
    for(i=0;i<quant;i++){
    printf("\nDigite o valor atual do produto %d : ", i+1);
    scanf("%f", &pvalor[i]);
    pnovovalor[i]=pvalor[i]+(pvalor[i]*(correcao/100));
    }

    printf("\n\n\n%d produtos terao os seus precos ajustados em %.2f porcento", quant, correcao);
    printf("\n----------------------------------------------");
    for(i=0;i<quant;i++){
    printf("\nO valor de entrada do produto %d e : %.2f\nO valor REAJUSTADO do produto %d e : %.2f ", i+1, pvalor[i], i+1, pnovovalor[i]);
    printf("\n----------------------------------------------");
    }
    printf("\n\n\n");
    
    }

    return 0;
}

