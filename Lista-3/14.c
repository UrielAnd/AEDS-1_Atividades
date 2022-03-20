/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");

    int pessoas=0, idade, opiniao;
    float regular=0, otimo=0, bom=0;
    int aux=1;
    int calculo;
    float porcentagem;
    while(aux<=15)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("\n(3)Ótimo\n(2)Bom\n(1)Regular");
        printf("\nQual sua opinião em relação ao filme: ");
        scanf("%d", &opiniao);
        pessoas+=idade;
        
        if(opiniao==3)
        {
            otimo++;
        }
        else if(opiniao==2)
        {
            bom++;
        }
        else if(opiniao==1)
        {
            regular++;
        }
        else
        {
            printf("ERRO");
        }
        aux++;
    }
    
    aux--;
    calculo=pessoas/aux;
    printf("\nA média das idades dos individuos que responderam é %d anos.", calculo);
    printf("\nO número de pessoas que responderam regular foi de %.0f pessoas.", regular);

    porcentagem=(bom*100)/aux;
    printf("\nEntre todos os espectadores analisados, %.2f%% tiveram a opinião como BOM.", porcentagem);

    return 0;
}

