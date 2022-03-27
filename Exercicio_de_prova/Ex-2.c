/******************************************************************************

Uma pesquisa está sendo feita para contar o número de telespectadores de alguns programas de televisão. 
Faça um programa que apresente o menu de opções com os seguintes programas de TV para o telespectador escolher:

1 - Domingão do Faustão

2 - Luciano Hulk

3 - The Voice Brasil

4 - Sair

Além da opção do menu o usuário deverá receber a idade (de 0 a 150 anos) e o sexo (1- Feminino e 2- Masculino) do telespectador. 
A sequência da entrada deverá ser: opção do menu, idade e sexo. Valide as entradas de dados (opção, idade e sexo). 
Caso o usuário digite algo inválido, mostre a mensagem “Opção Inválida!”.

Ao final do programa, exiba, inclusive na ordem abaixo:

O programa de TV que teve maior número de votos femininos.
A média das idades dos telespectadores do programa The Voice Brasil (considere apenas o sexo masculino).
A porcentagem de telespectadores do Domingão do Faustão com idade entre 18 e 28 anos (considere 18 e 28) com 
relação ao total de telespectadores do Domingão do Faustão.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float voto;
    float idade;
    int sexo;
    float fausto=0, hulk=0, thev=0;
    float faustom=0, hulkm=0, thevm=0;
    float soma;
    float mediana=0;
    float qnt;
    float total;
    float resp=0;
    soma=0;
while(voto!=4)
{
    printf("\n1 - Domingão do Faustão");
    printf("\n2 - Luciano Hulk");
    printf("\n3 - The Voice Brasil");
    printf("\n4 - Sair");
    
    printf("\nDeseja votar em qual programa: ");
    scanf("%f", &voto);
    if((voto!=4)&&(voto>=1)&&(voto<=3))
    {
        printf("Digite sua idade: ");
        scanf("%f", &idade);
        printf("Digite seu sexo\n(1-feminino)\n(2-masculino)\n ");
        scanf("%d", &sexo);
        if(sexo==1)
        {
            if((idade>18)&&(idade<28)&&(voto==1));
            {
                qnt++;
            }
            if(voto==1)
            {
                fausto++;
            }
            else if(voto==2)
            {
                hulk++;
            }
            else if(voto==3)
            {
                thev++;
            }
        }
        else if(sexo==2)
        {
            if((idade>18)&&(idade<28)&&(voto==1));
            {
                qnt++;
            }
            if(voto==1)
            {
                faustom++;
            }
            else if(voto==2)
            {
                hulkm++;
            }
            else if(voto==3)
            {
                soma+=idade;
                thevm++;
            }   
        } 
        else
        {
            printf("INVALIDO");
        }
    }
    else if(voto!=4)
    {
        printf("INVALIDO");
    }
}   
    total=fausto+faustom;
    
    resp=(qnt*100)/total;
    
    
    if(soma>0)
    {
        mediana=soma/thevm;
    }
    if((fausto>hulk)&&(fausto>thev))
    {
        printf("\nO programa de TV que teve maior número de votos femininos foi o Domingão do Faustão.");
    }
    else if((hulk>fausto)&&(hulk>thev))
    {
        printf("\nO programa de TV que teve maior número de votos femininos foi o Luciano Hulk.");
    }
    else if((thev>fausto)&&(thev>hulk))
    {
        printf("\nO programa de TV que teve maior número de votos feminino The Voice Brasil.");
    }
    
    
    printf("\nA media das idades dos telespectadores do programa The Voice Brasil é %.2f", mediana);
    
    printf("\n A porcentagem de telespectadores do Domingão do Faustão com idade entre 18 e 28 anos é de %.2f%%", resp);
    
    
    
    return 0;
}

