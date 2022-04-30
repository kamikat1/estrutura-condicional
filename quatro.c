//Escreva um programa para determinar se um dado número N (recebido através do teclado) é POSITIVO, NEGATIVO ou NULO.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o valor inteiro: ");
    scanf("%d", &n);

    if (n>0){
        printf("%d eh positivo", n);
    }
    else if (n<0){
        printf("%d eh negativo", n);
    }
    else printf("%d eh nulo", n);
    return 0;
}
