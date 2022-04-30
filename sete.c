// Escreva um programa que receba um número e imprima uma das mensagens: “é múltiplo de 3” ou “não é múltiplo de 3”.


#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    scanf("%d", &n);
    if (n%3==0)printf("%d eh multiplo de 3. ", n);
    else printf("%d nao eh multiplo de 3. ", n);
    return 0;
}
