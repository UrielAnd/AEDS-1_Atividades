/******************************************************************************

Pergunta:
Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:

*******************************************************************************/
#include <stdio.h>

int main()
{
    int repet=1;
    int quantidade=0;
    int idade;
    float altura;
    float peso;
    float conta=0;
    int pessoas=0;
    int kg=0;
    float resp;
    float media;
    while(repet<=5)
    {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        printf("\nDigite a altura: ");
        scanf("%f", &altura);
        printf("\nDigite a peso: ");
        scanf("%f", &peso);
        printf("\nproxima pessoa");
        if(idade>50)
        {
            quantidade++;
        }
        else if((idade>=10)&&(idade<=20))
        {
            conta+=altura;
            pessoas++;
        }
        else if(peso<40)
        {
            kg++;
        }
        repet++;
    }
    media=conta/pessoas;
    resp=(kg*100)/5.0;
    printf("\nA quantidade de pessoas com idade superior a 50 é de %d.", quantidade);
    printf("\nA media das alturas das pessoas com idade entre 10 e 20 anos é de %.2f.", media);
    printf("\nA porcentagem de pessoas com peso inferior a 40 é de %.2f porcento.", resp);
    return 0;
}

