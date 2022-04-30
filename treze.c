//Construa um programa que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.
//resolução mais brute force possivel

#include <stdio.h>
#include <stdlib.h>

int main()

{   float a=1, b=2, c=3, d=4, maior, menor;


    if ((a > b)&&(a>c)&&(a>d)){
        maior= a;
    }
    else if ((b > a)&&(b>c)&&(b>d)){
        maior= b;
    }
    else if ((c > a)&&(c>b)&&(c>d)){
        maior= c;
    }
    else if ((d > a)&&(d>b)&&(d>c)){
        maior= d;
    }



    if ((a < b)&&(a<c)&&(a<d)){
        menor= a;
    }
    else if ((b < a)&&(b<c)&&(b<d)){
        menor= b;
    }
    else if ((c < a)&&(c<b)&&(c<d)){
        menor= c;
    }
    else if ((d < a)&&(d<b)&&(d<c)){
        menor= d;
    }


    printf("%.1f eh o maior numero\n", maior);
    printf("%.1f eh o menor numero", menor);

    return 0;
}
