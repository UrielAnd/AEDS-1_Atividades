/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <stdlib.h>  //BIBLIOTECAS//
#include <time.h>   //BIBLIOTECAS//
int multi_matrizes(int matZ_1[2][3], int matZ_2[3][2], int matZ_resultado[2][2])            //Função para realizar a multiplicação das matrizes.//
{
//PROCESSAMENTO_______________________________________________________________________________________________ 
    for(int repet=0;repet<3;repet++)            
    {
        matZ_resultado[0][0]+=matZ_1[0][repet]*matZ_2[repet][0];
    }
    for(int repet=0;repet<3;repet++)
    {
        matZ_resultado[0][1]+=matZ_1[0][repet]*matZ_2[repet][1];
    }
    for(int repet=0;repet<3;repet++)
    {
        matZ_resultado[1][0]+=matZ_1[1][repet]*matZ_2[repet][0];
    }
    for(int repet=0;repet<3;repet++)
    {
        matZ_resultado[1][1]+=matZ_1[1][repet]*matZ_2[repet][1];
    }
    
}
int main()
{
    int matZ_1[2][3], matZ_2[3][2];                                 //Declaração daa matrizes.//
    int matZ_resultado[2][2]={0,0,0,0};                         //Declaração da matriz resultado.//
    
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz 1 criados pelo programa:\n\n");     //INFO.//
    
//PROCESSAMENTO_______________________________________________________________________________________________ 
    for(int repet=0;repet<2;repet++)        //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<3;aux++)
        {
            matZ_1[repet][aux]=rand() %50;
            printf("%d ", matZ_1[repet][aux]);                             //INFO.//
        }
        printf("\n");                                               //Salta linhas.//
    }
    printf("\nEsses são os n°(s) da matriz 2 criados pelo programa:\n\n");     //INFO.//
    
    for(int repet=0;repet<3;repet++)        //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<2;aux++)
        {
            matZ_2[repet][aux]=rand() %50;
            printf("%d ", matZ_2[repet][aux]);                             //INFO.//
        }
        printf("\n");                                               //Salta linhas.//
    }

    multi_matrizes(matZ_1,matZ_2,matZ_resultado);                    //Chamada de função.//
    printf("\nEssa é a matriz resultado da multiplicação das 2 matrizes anteriores:\n\n");        //INFO.//
    for(int repet=0;repet<2;repet++)                         //Ciclo para imprimir a matriz resultante.//
    {
        for(int aux=0;aux<2;aux++)
        {
        //OUTPUT________________________________________________________________________________________________      
            printf("%d ", matZ_resultado[repet][aux]);                             //RESPOSTA.//
        }
        printf("\n");                                               //Salta linhas.//
    }
    
    
    return 0;
}
