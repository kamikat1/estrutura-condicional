//Construa um programa que leia dois valores numéricos inteiros e efetue a adição; caso o resultado seja
//maior que 10, apresentá-lo.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, soma;
    printf("Digite 2 valores inteiros: ");
    scanf("%d %d", &n1, &n2);
    soma=n1+n2;

    if (soma>10){
        printf("%d", soma);
    }
    return 0;
}
