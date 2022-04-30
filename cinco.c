//Construir um programa que leia dois números e efetue a adição. Caso o valor somado seja maior que 20,
//este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá
//ser apresentado subtraindo-se 5.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, soma;
    printf("Digite o valor: ");
    scanf("%f %f", &n1, &n2);
    soma=n1+n2;

    if (soma>20){
        printf("%f", soma+8);
    }
    else if (soma<=20){
        printf("%f", soma-5);
    }
    return 0;
}

