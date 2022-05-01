//) Construa um programa que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.

#include <stdio.h>
#include <stdlib.h>

int main()
{   float a, b, c, d, maior=0, menor=0;
    scanf("%f %f %f %f", &a, &b, &c, &d);
 
    menor=a;
 
    if(a>maior)
        maior=a;
    else if (a<menor)
        menor=a;

 
    if(b>maior)
        maior=b;
    else if (b<menor)
        menor=b;

 
    if(c>maior)
        maior=c;
    else if (c<menor)
        menor=c;

 
    if(d>maior)
        maior=d;
    else if (d<menor)
        menor=d;

 
    printf("%f %f", maior, menor);
    return 0;
}

    else if ((d < a)&&(d<b)&&(d<c)){
        menor= d;
    }


    printf("%.1f eh o maior numero\n", maior);
    printf("%.1f eh o menor numero", menor);

    return 0;
}
