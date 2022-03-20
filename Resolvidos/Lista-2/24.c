/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT______________________________________________________________________    
    printf("Faça um programa que receba o preço, a categoria...");
    printf("\nDigite o codigo do produto comprado ");
    int codigo;
    scanf("%d", &codigo);
    
    printf("\nDigite a quantidade comprada do produto ");
    int quantidade;
    scanf("%d", &quantidade);
//PROCESSAMENTO____________________________________________________________________    
    if((codigo>=1)&&(codigo<=10))
    {
        float soma;
        soma=quantidade*10;
        //OUTPUT_________________________________________________________________________
        printf("\nO preço unitario do produto é 10 reais.");
        printf("\nO preço total da nota é %2.f reais.", soma);
        if((soma>0)&&(soma<=250))
        {
            float desconto;
            float resposta;
            desconto=soma*0.05;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if((soma>250)&&(soma<=500))
        {
            float desconto;
            float resposta;
            desconto=soma*0.1;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if(soma>500)
        {
            float desconto;
            float resposta;
            desconto=soma*0.15;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else
        {
            //OUTPUT_________________________________________________________________________
            printf("\nERRO");
        }
        
    }
    else if((codigo>=11)&&(codigo<=20))
    {
        float soma;
        soma=quantidade*15;
        //OUTPUT_________________________________________________________________________
        printf("\nO preço unitario do produto é 15 reais.");
        printf("\nO preço total da nota é %2.f reais.", soma);
        if((soma>0)&&(soma<=250))
        {
            float desconto;
            float resposta;
            desconto=soma*0.05;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if((soma>250)&&(soma<=500))
        {
            float desconto;
            float resposta;
            desconto=soma*0.1;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if(soma>500)
        {
            float desconto;
            float resposta;
            desconto=soma*0.15;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else
        {
            //OUTPUT_________________________________________________________________________
            printf("\nERRO");
        }
    }
    else if((codigo>=21)&&(codigo<=30))
    {
        float soma;
        soma=quantidade*20;
        //OUTPUT_________________________________________________________________________
        printf("\nO preço unitario do produto é 20 reais.");
        printf("\nO preço total da nota é %2.f reais.", soma);
        if((soma>0)&&(soma<=250))
        {
            float desconto;
            float resposta;
            desconto=soma*0.05;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if((soma>250)&&(soma<=500))
        {
            float desconto;
            float resposta;
            desconto=soma*0.1;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if(soma>500)
        {
            float desconto;
            float resposta;
            desconto=soma*0.15;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else
        {
            //OUTPUT_________________________________________________________________________
            printf("\nERRO");
        }
    }
    else if((codigo>=31)&&(codigo<=40))
    {
        float soma;
        soma=quantidade*30;
        //OUTPUT_________________________________________________________________________
        printf("\nO preço unitario do produto é 30 reais.");
        printf("\nO preço total da nota é %2.f reais.", soma);
        if((soma>0)&&(soma<=250))
        {
            float desconto;
            float resposta;
            desconto=soma*0.05;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if((soma>250)&&(soma<=500))
        {
            float desconto;
            float resposta;
            desconto=soma*0.1;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else if(soma>500)
        {
            float desconto;
            float resposta;
            desconto=soma*0.15;
            resposta=soma-desconto;
            //OUTPUT_________________________________________________________________________
            printf("\nO preço final da nota depois do desconto é %2.f reais.", resposta);
        }
        else
        {
            //OUTPUT_________________________________________________________________________
            printf("\nERRO");
        }
    }
    else
    {
        //OUTPUT_________________________________________________________________________
        printf("ERRO");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}
