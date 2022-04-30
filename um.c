//Escreva um programa que leia um número e o imprima caso ele seja maior que 20.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float n;
    scanf("%f", &n);

    if (n>20){
        printf("%.2f", n);
    }
    return 0;
}


