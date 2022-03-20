/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <stdlib.h>  //BIBLIOTECAS//
#include <time.h>   //BIBLIOTECAS//
int main()
{
    int vtAR[15];                                              //Declaração da Array.//
    int maior, cont=0, menor, aux=0;                           //variáveis auxiliares.//
    
    srand(time(NULL));
    
   printf("Esses são os elementos criado pelo programa para preencher o vetor 1:\n\n");     //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<15;repet++)       //Ciclo de repetição o programa criar os elementos do vetor.//
    {
        vtAR[repet]=rand() %100;
        printf("%d ", vtAR[repet]);                                     //INFO.//
    }
    printf("\n\n");                            //Salta linhas.//
    maior=vtAR[0];
    for(int repet=1;repet<15;repet++)          //Ciclo de repetição para achar o maior n° da array.//
    {
        if(vtAR[repet]>=maior)
        {
            maior=vtAR[repet];
            cont=repet;
        }
    }
    menor=vtAR[0];
    for(int repet=1;repet<15;repet++)         //Ciclo de repetição para achar o menor n° da array.//
    {
        if(vtAR[repet]<=menor)
        {
            menor=vtAR[repet];
            aux=repet;
        }
    }
//OUTPUT_________________________________________________________________________________________    
    printf("O maior n° desse vetor é %d e a posição que ele ocupa é %d", maior, cont);              //RESPOSTA.//      
    printf("\nO menor n° desse vetor é %d e a posição que ele ocupa é %d", menor, aux);             //RESPOSTA.//
    return 0;
}


