#include <stdlib.h>
#include <stdio.h>

void main(){

    int precoH = 0, numeroH = 0, operacao = 0, totalS = 0;

    printf("Insira quanto voce ganha por hora: ");
    scanf("%d",&precoH);
    printf("Insira o numero de horas que voce trabalha por mes: ");
    scanf("%d",&numeroH);

    operacao = (precoH * numeroH);
    totalS = (operacao);

    printf("O total do seu salario por mes eh: R$ %d", totalS);

    return(0);
}