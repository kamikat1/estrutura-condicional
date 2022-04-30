//Escreva um programa para determinar se um número A é divisível por um outro número B.
//Esses valores devem ser fornecidos pelo usuário.


#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b;
    printf("digite 2 numeros: ");
    scanf("%d %d", &a, &b);
    if (a%b==0)
        printf("%d eh divisivel por %d", a, b);
    else
        printf("%d nao eh divisivel por %d. ", a, b);
    return 0;
}
