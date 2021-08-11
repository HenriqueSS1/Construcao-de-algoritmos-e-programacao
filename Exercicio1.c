#include <stdlib.h>
#include <stdio.h>

void main(){
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0, soma = 0;

    printf("Insira a primeira nota: ");
    scanf("%d",&n1);

    printf("Insira a segunda nota: ");
    scanf("%d",&n2);

    printf("Insira a terceira nota: ");
    scanf("%d",&n3);

    printf("Insira a quarta nota: ");
    scanf("%d",&n4);

    soma = (n1 + n2 + n3 + n4);
    media = (soma / 4);

    printf("A media das notas eh: %d", media);

    return(0);
}