/*11. A Google est´a desenvolvendo um novo sistema operacional para m´aquinas de venda de bolinhas
de borracha de R$1, 00 mas precisa realizar testes no Gerenciador de Mem´oria desse novo sistema. Vocˆe foi contratado para fazer um programa para verificar se o gerenciador de mem´oria
est´a funcionando corretamente. Seu programa dever´a ler 3 n´umeros inteiros, 3 n´umeros decimais, 3 letras, armazen´a-las em vari´aveis, e depois, atrav´es de ponteiros, trocar os seus valores,
substituindo todos os n´umeros inteiros pelo n´umero 2014, os decimais por 9.99, e as letras
por ’Y’. Depois da substitui¸c˜ao, o programa dever´a exibir o valor das vari´aveis j´a devidamente
atualizados.*/
#include <stdio.h>
#include <stdlib.h>
int main (){

int intei[3], i, *pinteiros;
float decimal[3], *pdecimais;
char letra[3], *pletras;

//input dos dados
for(i=0;i<3;i++){
    printf("Digite o %d numero inteiro: ",i+1);
    scanf("%d", &intei[i]);
}
printf("\n");
for(i=0;i<3;i++){
    printf("Digite o %d numero decimal: ",i+1);
    scanf("%f", &decimal[i]);
}
printf("\n");
for(i=0;i<3;i++){
    printf("Digite a %d letra: ",i+1);
    scanf(" %c", &letra[i]);
}

//imprimindo os dados ORIGINAIS digitados
printf("------------------------------------\n");
printf("\tVALORES DIGITADOS\n");
printf("------------------------------------\n");
for(i=0;i<3;i++){
    printf("%d numero inteiro: %d\n", i+1, intei[i]);
}
printf("------------------------------------\n");
for(i=0;i<3;i++){
    printf("%d numero decimal: %f\n", i+1, decimal[i]);
}
printf("------------------------------------\n");
for(i=0;i<3;i++){
    printf("%d letra: %c\n", i+1, letra[i]);
}
printf("------------------------------------\n");

//imprimindo os novos valores oriundos dos ponteiros
printf("------------------------------------\n");
printf("\tVALORES ATUALIZADOS\n");
printf("------------------------------------\n");
for(i=0;i<3;i++){
    pinteiros=&intei[i];
    *pinteiros=2014;
    printf("%d numero inteiro: %d\n", i+1, intei[i]);
}
printf("------------------------------------\n");
for(i=0;i<3;i++){
    pdecimais=&decimal[i];
    *pdecimais=9.99;
    printf("%d numero decimal: %.2f\n", i+1, decimal[i]);
}
printf("------------------------------------\n");
for(i=0;i<3;i++){
    pletras=&letra[i];
    *pletras='Y';
    printf("%d letra: %c\n", i+1, letra[i]);
}
printf("------------------------------------\n");

return 0;

}

