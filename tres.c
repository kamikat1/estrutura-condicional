//Construa um programa que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o valor inteiro: ");
    scanf("%d", &n);

    if (n%2==0){
        printf("%d eh par", n);
    }
    else printf("%d eh impar", n);
    return 0;
}

