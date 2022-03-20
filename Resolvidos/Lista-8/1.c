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
    int vtAR [6];                                          //Declaração da Array.//
    int cont=0;                                    //Declaração da variável inteira cont(auxiliar).//
    
    srand(time(NULL));
    
    printf("Esses são os elementos criado pelo programa para preencher o vetor:\n\n");     //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________
    for(int repet=0;repet<6;repet++)        //Ciclo de repetição o programa criar os elementos do vetor.//
    {
        vtAR[repet]=rand() %100;
        printf("%d ", vtAR[repet]);                                     //INFO.//
    }
    printf("\n");                            //Salta linhas.//
    //OUTPUT_________________________________________________________________________________________
    printf("\nnúmeros pares desse vetor são/é:\n\n");                     //INFO.//
    for(int repet=0;repet<6;repet++)    //Ciclo de repetição para verificar os n°s da array que é par.//
    {
        if(vtAR[repet]%2==0)
        {
        //OUTPUT_________________________________________________________________________________________
            printf("%d ", vtAR[repet]);                                 //RESPOSTA.//
            cont++;
        }
    }
//OUTPUT_________________________________________________________________________________________
    printf("\n%d n° desse vetor são/é par.\n", cont);                 //RESPOSTA.//
    cont=0;
    printf("\nnúmeros ímpares desse vetor são/é:\n\n");                //INFO.//
    for(int repet=0;repet<6;repet++)    //Ciclo de repetição para verificar os n°s da array que é ímpar.//
    {
        if(vtAR[repet]%2!=0)
        {
        //OUTPUT_________________________________________________________________________________________    
            printf("%d ", vtAR[repet]);                         //RESPOSTA.//
            cont++;
        }
    }
//OUTPUT_________________________________________________________________________________________
    printf("\n%d n° desse vetor são/é ímpares.", cont);         //RESPOSTA.//
    return 0;
}








