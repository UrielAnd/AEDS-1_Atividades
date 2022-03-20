/******************************************************************************

Pergunta:
Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:

*******************************************************************************/
#include <stdio.h>

int main()
{
    int repet=1;
    float valor;
    char codigo;
    float vista=0;
    float prazo=0;
    float total;
    float parcela;
    while(repet<=15)
    {
        printf("Digite o valor da transação: ");
        scanf("%f", &valor);
        printf("\n(V)para transação à vista \t (P)para transação a prazo.");
        printf("\nDigite o codigo dessa transação: ");
        scanf("%s", &codigo);
        
        if((codigo=='V')||(codigo=='v'))
        {
            vista+=valor;
        }
        else if((codigo=='P')||(codigo=='p'))
        {
            prazo+=valor;
        }
        else
        {
            printf("CODIGO INVALIDO");   
        }
        
        repet++;
        
    }
    printf("\nO valor total de compras a vista foi de %.2f reais.", vista);
    printf("\nO valor total de compras a prazo foi de %.2f reais.", prazo);
    total=prazo+vista;
    printf("\nO valor total das compras efetuadas é de %.2f reais.", total);
    parcela=prazo/3.0;
    printf("\nO valor da primeira prestação das compras a prazo é de %.2f reais.", parcela);
    return 0;
}



