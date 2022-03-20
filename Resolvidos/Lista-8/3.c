/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>   //BIBLIOTECAS//
#include <stdlib.h> //BIBLIOTECAS//
#include <time.h>  //BIBLIOTECAS//
int main()
{
    int vtAR_codigo[10],vtAR_estoque[10];                       //Declaração das Array.//
    int cliente, produto, qnt;                       //Declaração das variáveis de interação com os usuários.//
    
    srand(time(NULL));
    
    printf("Estoque de produtos:\n\n");                                     //INFO.//
//PROCESSAMENTO_____________________________________________________________________________________________
    for(int repet=0;repet<10;repet++)               //Ciclo de repetição o programa criar os elementos dos vetores.//
    {
        vtAR_codigo[repet]=repet+1;
        vtAR_estoque[repet]=rand() %100;
        printf("%d ", vtAR_estoque[repet]);                                 //INFO.//
    }
    
    while(cliente!=0)           //Ciclo para a interação continua com o usuário ate ser digitado 0 no codigo de cliente.//
    {
        printf("\n\nCódigos de produto:\n\n");
        for(int repet=0;repet<10;repet++)
        {
            printf("%d ", vtAR_codigo[repet]);                              //IMFO.//
        }
        printf("\n\nOBS: código do cliente igual a 0 sai do programa.");   //INFO.//
    //IMPUT_____________________________________________________________________________________________
        printf("\nDigite seu código de cliente:");
        scanf("%d", &cliente);
        
        if(cliente!=0)                       //Teste condicional.//
        {
        //IMPUT_____________________________________________________________________________________________    
            printf("Digite o código do produto que deseja comprar: ");
            scanf("%d", &produto);
            if((produto>0)&&(produto<11))                       //Teste condicional.//
            {   
            //IMPUT_____________________________________________________________________________________________    
                printf("Qual a quantidade que deseja comprar desse produto: ");
                scanf("%d", &qnt);
                for(int repet=0;repet<10;repet++)               //Ciclo para pecorrer o vetor.//
                {
                    if(vtAR_codigo[repet]==produto)                         //Teste condicional.//
                    {
                        if(vtAR_estoque[repet]-qnt<0)                       //Teste condicional.//
                        {
                            printf("\nNão temos estoque suficiente para essa mercadoria.\n");                   //INFO.//
                        }
                        else
                        {
                            vtAR_estoque[repet]-=qnt;
                            printf("\nPedido atendido. Obrigado e volte sempre!\n");                            //INFO.//
                        }
                    }
                }
            }
            else
            {
                printf("\nCódigo inexistente.\n");                                  //INFO.//
            }
        }   
        else
        {
            printf("Obrigado!\nAqui está o codigo dos produtos e seus estoques atualizados respectivamente:\n");            //INFO.//
        }
    }
//OUTPUT_____________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)
    {
        printf("%d ", vtAR_codigo[repet]);                      //INFO.//
    }
    printf("\n");                                           //Salta linhas.//
    for(int repet=0;repet<10;repet++)
    {
        printf("%d ", vtAR_estoque[repet]);                     //INFO.//
    }
    return 0;
}