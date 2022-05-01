//Criar um programa que leia a data de nascimento e a data atual (dia, mês e ano). Em seguida o programa deve calcular a
//idade da pessoal, considerando se esta fez ou não aniversário
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float peso, altura, imc;
    printf("digite o peso e em seguida a altura. (usando ponto ao inves de virgula) ");
    scanf("%f", &peso);
    scanf("%f", &altura);
// LEMBRAR Q LINGUAGEM C USA PONTO AO INVES DE VIRGULA
    imc = peso/(altura*altura);

    if(imc<20){
        printf("Abaixo do peso.");
    }
    if(imc<=20 && peso<25){
        printf("peso normal.");
    }
    if(imc<=25 && peso<30){
        printf("sobre peso.");
    }
    if(imc<=30 && peso<40){
        printf("obeso.");
    }
    if(imc>=40){
        printf("obeso morbido.");

    }

    return 0;
}
