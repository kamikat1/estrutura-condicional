// A prefeitura de Contagem abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não
//poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação,
//e informar se o empréstimo pode ou não ser concedido.


#include <stdio.h>
#include <stdlib.h>

int main()
{   float sbruto, emprestimo, trinta;
    printf("entre com o salario bruto e em seguida com o valor do emprestimo desejado: ");
    scanf("%f %f", &sbruto, &emprestimo);
    trinta = (0.3*sbruto);
    if (emprestimo>trinta)
        printf("emprestimo nao pode ser concedido");
    else
        printf("emprestimo pode ser concedido");
    return 0;
}
