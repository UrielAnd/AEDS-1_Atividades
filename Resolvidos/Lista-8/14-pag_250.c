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
    int matZ[2][3];                                     //Declaração da matriz.//
    int cont=0;                                   //Declaração da variável auxiliar.//
    
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");     //INFO.//
    
//PROCESSAMENTO_______________________________________________________________________________________________ 
    for(int repet=0;repet<2;repet++)        //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<3;aux++)
        {
            matZ[repet][aux]=rand() %50;
            printf("%d ", matZ[repet][aux]);                             //INFO.//
        }
        printf("\n");                                               //Salta linhas.//
    }
    printf("\n");                                                   //Salta linhas.//
    for(int repet=0;repet<2;repet++)         //Ciclo para descobrir quantos n°(s) estão entre 5 e 15.//
    {
        for(int aux=0;aux<3;aux++)
        {
            if((matZ[repet][aux]>5)&&(matZ[repet][aux]<15))
            {
                cont++;
            }
        }
    }
//OUTPUT________________________________________________________________________________________________    
    printf(" A quantidade de elementos dessa matriz entre 5 e 15 é %d.", cont);    //RESPOSTA.//
    
    return 0;
}



