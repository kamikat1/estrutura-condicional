#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if(c<a){
        int tmp;
        tmp=a;
        a=c;
        c=a;
    }
    if(b<a){
        int tmp;
        tmp=a;
        a=b;
        b=a;
    }
    if(c<b){
        int tmp;
        tmp=b;
        c=b;
        b=c;
    }
    printf("%d %d %d ", c, b, a);

    return 0;
}
