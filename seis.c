//Escreva um programa que leia um número e imprima o valor absoluto desse número.

#include <stdio.h>
#include <stdlib.h>

int main()
{   float n;
    scanf("%f", &n);
    if (n<0)printf("%f", -n);
    else printf("%f", n);
    return 0;
}
