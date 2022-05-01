//Criar um programa que leia a data de nascimento e a data atual (dia, mês e ano). Em seguida o programa deve calcular a
//idade da pessoa, considerando se esta fez ou não aniversário
#include <stdio.h>
#include <stdlib.h>

int main()
{   int dianasc, mesnasc, anonasc, diaatual, mesatual, anoatual, atual=0;
    printf("digite a data atual: ");
    scanf("%d %d %d", &diaatual, &mesatual, &anoatual);
    printf("digite sua data de nascimento: ");
    scanf("%d %d %d", &dianasc, &mesnasc, &anonasc);
    if(mesnasc>mesatual){
        atual = anoatual-anonasc;
        printf("sua idade é %d, e vc ainda nao fez aniversario", atual-1);
    }
    else if(mesnasc<mesatual){
        atual = anoatual-anonasc;
        printf("sua idade é %d, e vc ja fez aniversario", atual);
    }

    return 0;
}
