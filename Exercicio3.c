#include <stdlib.h>
#include <stdio.h>

void main(){
    
    int peso = 0, excesso = 0, multa = 0;

    printf("Ola Joao, insira o peso dos peixes que voce pescou hoje ");
    scanf("%d",&peso);

    if(peso <= 50)
    {
        printf("Sem nenhum excedente");
    }
    else if (peso > 50)
    {
        excesso = (peso - 50);
        multa = (excesso * 4);
        printf("O valor da multa a pagar pelo excedente eh: R$ %d", multa);  
    }

    return(0);
}