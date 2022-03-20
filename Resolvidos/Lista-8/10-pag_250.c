/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECAS//
#include <stdlib.h>  //BIBLIOTECAS//
#include <time.h>  //BIBLIOTECAS//
int main()
{
    int matZ[5][5];                             //Declaração da matriz.//
    int soma=0, cont=4;                 //Declaração das variáveis auxiliares.//
    srand(time(NULL));
    
    printf("Essa é a matriz criada pelo programa: \n");                  //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________        
    for(int repet=0;repet<5;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<5;aux++)
        {
            matZ[repet][aux]=rand() %100;
            printf("%d ", matZ[repet][aux]);                             //INFO.//
        }
        printf("\n");                                               //Salta linhas.//
    }
    
    for(int repet=3;repet==3;repet++)                   //Ciclo para somar os elementos da linha 4.//
    {
        for(int aux=0;aux<5;aux++)
        {
            soma+=matZ[repet][aux];                                    //CONTA.//
        }
    }
    //OUTPUT_______________________________________________________________________________________________    
    printf("\nA soma dos elementos da linha 4 é: %d", soma);            //RESPOSTA.//
    soma=0;
    for(int repet=0;repet<5;repet++)                   //Ciclo para somar os elementos da coluna 2.//
    {
        for(int aux=1;aux==1;aux++)
        {
            soma+=matZ[repet][aux];                                     //CONTA.//
        }
    }
    //OUTPUT_______________________________________________________________________________________________    
    printf("\nA soma dos elementos da coluna 2 é: %d", soma);               //RESPOSTA.//
    soma=0;
    for(int repet=0;repet<5;repet++)            //Ciclo para somar os elementos da diagonal principal da matriz.//
    {
        for(int aux=repet;aux==repet;aux++)
        {
            soma+=matZ[repet][aux];                                     //CONTA.//
        }
    }
    //OUTPUT_______________________________________________________________________________________________    
    printf("\nA soma dos elementos da diagonal principal é: %d", soma);     //RESPOSTA.//
    soma=0;
    for(int repet=0;repet<5;repet++)            //Ciclo para somar os elementos da diagonal secundaria da matriz.//
    {
        for(int aux=cont;aux==cont;aux++)
        {
            soma+=matZ[repet][aux];                                     //CONTA.//
            if(cont>=0)
            {
                cont--;
            }
        }
    }
    //OUTPUT_______________________________________________________________________________________________    
    printf("\nA soma dos elementos da diagonal secundaria é: %d", soma);    //RESPOSTA.//


    return 0;
}
