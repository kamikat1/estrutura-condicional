//Construa um programa que imprima qual o menor e qual o maior valor de dois números A e B, lidos através do teclado.


#include <stdio.h>
#include <stdlib.h>

int main()
{   float n1, n2;
    scanf("%f %f", &n1, &n2);
    if (n1>n2)
        printf("%f eh maior q %f", n1, n2);
    else
        printf("%.2f eh maior q %f", n2, n1);
    return 0;
}
