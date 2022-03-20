/******************************************************************************

Pergunta:
Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize di-
gitando idade igual a zero.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int quantidade;
    float idades;
    int vezes=1;
    float soma=0;
    float resposta;
    
    printf("Digite quantas idades de pessoas você quer incerir: ");
    scanf("%d", &quantidade);
    
    while(vezes<=quantidade)
    {
        printf("Digite a idade: ");
        scanf("%f", &idades);
        soma+=idades;
        vezes++;
    }
   
    resposta=soma/quantidade;
    printf("A media dessas idades é de %.2f.", resposta);
    printf("Idade igual a zero");
    
    return 0;
}
