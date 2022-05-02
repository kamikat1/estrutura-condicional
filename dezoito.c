#include <stdio.h>
#include <stdlib.h>

int main () {
    int y;
    printf ("Digite o ano :");
    scanf ("%d", &y);
    if (((y%4==0) && (y%100!=0)) || (y%400==0)
        printf("eh um ano bissexto");
    else printf("N eh");
    return 0;
}
