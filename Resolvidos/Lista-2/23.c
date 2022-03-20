/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_________________________________________________________________________    
    printf("Faça um programa que receba o preço, a categoria....");
    
    printf("\nDigite o preço do produto ");
    float preco;
    scanf("%f", &preco);
    printf("\nOpçoes:");
    printf("\n1 — limpeza; 2 — alimentação; 3 — vestuário");

    printf("\nDigite a categoria do produto ");
    int categ, situacao;
    scanf("%d", &categ);
    
    printf("\nOpções:");
    printf("\n1 — produtos que necessitam de refrigeração; 2 — produtos que não necessitam de re-frigeração.");
    printf("\nDigite a situação do produto ");
    
    scanf("%d", &situacao);
//PROCESSAMENTO____________________________________________________________________    
    if(situacao==1)
    {
        if(preco<=25)
        {
            if(categ==1)
            {
                float resp, soma, posto;
                soma=preco*0.05;
                posto=preco*0.08;
                //OUTPUT________________________________________________________________________
                printf("\nO valor do aumento será de %.2f reais", soma);
                printf("\nO valor do imposto será de %.2f reais", posto);
            }
            else if(categ==2)
            {
                float resp, soma, posto;
                soma=preco*0.08;
                posto=preco*0.05;
                //OUTPUT________________________________________________________________________
                printf("\nO valor do aumento será de %.2f reais", soma);
                printf("\nO valor do imposto será de %.2f reais", posto);
            }
            else if(categ==3)
            {
                float resp, soma, posto;
                soma=preco*0.1;
                posto=preco*0.08;
                //OUTPUT________________________________________________________________________
                printf("\nO valor do aumento será de %.2f reais", soma);
                printf("\nO valor do imposto será de %.2f reais", posto);
            }
            else
            {
                //OUTPUT________________________________________________________________________
                printf("ERRO");
            }
            
        }
        else if(preco>25)
        {
            if(categ==1)
            {
                float resp, soma, posto;
                soma=preco*0.12;
                posto=preco*0.08;
                //OUTPUT________________________________________________________________________
                printf("\nO valor do aumento será de %.2f reais", soma);
                printf("\n valor do imposto será de %.2f reais", posto);
            }
            else if(categ==2)
            {
                float resp, soma, posto;
                soma=preco*0.15;
                posto=preco*0.05;
                //OUTPUT________________________________________________________________________
                printf("\nO valor do aumento será de %.2f reais", soma);
                printf("\nO valor do imposto será de %.2f reais", posto);
            }
            else if(categ==3)
            {
                float resp, soma, posto;
                soma=preco*0.18;
                posto=preco*0.08;
                //OUTPUT________________________________________________________________________
                printf("\nO valor do aumento será de %.2f reais", soma);
                printf("\nO valor do imposto será de %.2f reais", posto);
            }
            else
            {
                //OUTPUT________________________________________________________________________
                printf("ERRO");
            }
        }
    }
    else if(situacao==2)
    {
        if(preco<=25)
        {
            if(categ==1)
            {
                float resp, soma, posto;
                soma=preco*0.05;
                posto=preco*0.08;
                resp=(preco+soma)-posto;
                //OUTPUT________________________________________________________________________
                printf("\nO novo preço desse produto é %.2f", resp);
                if(resp<=50)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nBarato");
                }
                else if((resp>50)&&(resp<120))
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nNormal");
                }
                else if(resp>=120)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nCaro");
                }
            }
            else if(categ==2)
            {
                float resp, soma, posto;
                soma=preco*0.08;
                posto=preco*0.05;
                resp=(preco+soma)-posto;
                //OUTPUT________________________________________________________________________
                printf("\nO novo preço desse produto é %.2f", resp);
                if(resp<=50)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nBarato");
                }
                else if((resp>50)&&(resp<120))
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nNormal");
                }
                else if(resp>=120)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nCaro");
                }
            }
            else if(categ==3)
            {
                float resp, soma, posto;
                soma=preco*0.1;
                posto=preco*0.08;
                resp=(preco+soma)-posto;
                //OUTPUT________________________________________________________________________
                printf("\nO novo preço desse produto é %.2f", resp);
                if(resp<=50)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nBarato");
                }
                else if((resp>50)&&(resp<120))
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nNormal");
                }
                else if(resp>=120)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nCaro");
                }
            }
            else
            {
                //OUTPUT________________________________________________________________________
                printf("ERRO");
            }
        }
        else if(preco>25)
        {
            if(categ==1)
            {
                float resp, soma, posto;
                soma=preco*0.12;
                posto=preco*0.08;
                resp=(preco+soma)-posto;
                //OUTPUT________________________________________________________________________
                printf("\nO novo preço desse produto é %.2f", resp);
                if(resp<=50)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nBarato");
                }
                else if((resp>50)&&(resp<120))
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nNormal");
                }
                else if(resp>=120)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nCaro");
                }
            }
            else if(categ==2)
            {
                float resp, soma, posto;
                soma=preco*0.15;
                posto=preco*0.05;
                resp=(preco+soma)-posto;
                //OUTPUT________________________________________________________________________
                printf("\nO novo preço desse produto é %.2f", resp);
                if(resp<=50)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nBarato");
                }
                else if((resp>50)&&(resp<120))
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nNormal");
                }
                else if(resp>=120)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nCaro");
                }
            }
            else if(categ==3)
            {
                float resp, soma, posto;
                soma=preco*0.18;
                posto=preco*0.08;
                resp=(preco+soma)-posto;
                //OUTPUT________________________________________________________________________
                printf("\nO novo preço desse produto é %.2f", resp);
                if(resp<=50)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nBarato");
                }
                else if((resp>50)&&(resp<120))
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nNormal");
                }
                else if(resp>=120)
                {
                    //OUTPUT________________________________________________________________________
                    printf("\nCaro");
                }
            }
            else
            {
                //OUTPUT________________________________________________________________________
                printf("ERRO");
            }
        }
        else
        {
            //OUTPUT________________________________________________________________________
            printf("ERRO");
        }
    }
    else
    {
        //OUTPUT________________________________________________________________________
        printf("ERRO");
    }
    return 0;
}



