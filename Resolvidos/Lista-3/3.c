/******************************************************************************

Pergunta:
Faça um programa que receba a idade de oito pessoas, calcule e mostre:

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int idade;
    int faixa_etaria=0;
    int faixa_etaria1=0;
    int faixa_etaria2=0;
    int faixa_etaria3=0;
    int faixa_etaria4=0;
    int repet=1;
    int porcentagem;
    int porcentagem1;
    while(repet<=8)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if((idade>0)&&(idade<=15))
        {
            faixa_etaria++;
        }
        else if((idade>15)&&(idade<=30))
        {
            faixa_etaria1++;
            
        }
        else if((idade>30)&&(idade<=45))
        {
            faixa_etaria2++;
        }
        else if((idade>45)&&(idade<=60))
        {
            faixa_etaria3++;
        }
        else if(idade>60)
        {
            faixa_etaria4++;
        }
        repet++;
    }
    printf("\nA quantidade de pessoas na primeira faixa etária é %d.", faixa_etaria);
    printf("\nA quantidade de pessoas na segunda faixa etária é %d.", faixa_etaria1);
    printf("\nA quantidade de pessoas na terceira faixa etária é %d.", faixa_etaria2);
    printf("\nA quantidade de pessoas na quarta faixa etária é %d.", faixa_etaria3);
    printf("\nA quantidade de pessoas na quinta faixa etária é %d.", faixa_etaria4);
    porcentagem=(faixa_etaria/8.0)*100;
    printf("\nA porcentagem de pessoas na primeira faixa etária é de %d porcento", porcentagem);
    porcentagem1=(faixa_etaria4/8.0)*100;
    printf("\nA porcentagem de pessoas na primeira faixa etária é de %d porcento", porcentagem1);
    
    
    

    
    
    
    
    return 0;
}

