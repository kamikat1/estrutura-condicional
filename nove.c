//Escreva um programa que leia um número e informe se ele está no intervalo de 100 até 150.
//vou considerar q o intervalo é "fechado" e inclui os dois numeros das extremidades

#include <stdio.h>
#include <stdlib.h>

int main()
{   float n;
    scanf("%f", &n);
    if (100<=n && n<=150)
        printf("%f esta entre 100 e 150", n);
    else
        printf("%.2f nao esta entre 100 e 150", n);
    return 0;
}
