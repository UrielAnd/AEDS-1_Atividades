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
    int matZ_1[3][8], matZ_2[3][8];                 //Declaração das matrizes.//
    int matZ_resultante_1[3][8], matZ_resultante_2[3][8];                   //Declaração das matrizes resultantes.//
    
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz 1 criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________________    
    for(int repet=0;repet<3;repet++)            //Ciclo para o programa criar e colocar os n°(s) na matriz 1.//
    {
        for(int aux=0;aux<8;aux++)
        {
            matZ_1[repet][aux]=rand() %100;
            printf("%d ", matZ_1[repet][aux]);                          //INFO.//
        }
        printf("\n");                               //Salta linhas.//
    }
    printf("\n");                                    //Salta linhas.//
    printf("Esses são os n°(s) da matriz 2 criados pelo programa:\n\n");          //INFO.//
    for(int repet=0;repet<3;repet++)            //Ciclo para o programa criar e colocar os n°(s) na matriz 2.//   
    {
        for(int aux=0;aux<8;aux++)
        {
            matZ_2[repet][aux]=rand() %100;
            printf("%d ", matZ_2[repet][aux]);              //INFO//
        }
        printf("\n");                           //Salta linhas.//
    }
    for(int repet=0;repet<3;repet++)                        //Ciclo para fazer a soma das matrizes.//
    {
        for(int aux=0;aux<8;aux++)
        {
            matZ_resultante_1[repet][aux]=matZ_1[repet][aux]+matZ_2[repet][aux];
        }
    }
    printf("\n");                           //Salta linhas.//
    printf("Essa é o resultado da soma das duas matrizes:\n\n");                //INFO.//
    for(int repet=0;repet<3;repet++)                //Ciclo para imprimir o resultado.//
    {
        for(int aux=0;aux<8;aux++)
        {
        //OUTPUT_________________________________________________________________________________________________    
            printf("%d ", matZ_resultante_1[repet][aux]);               //RESPOSTA.//
        }
        printf("\n");                           //Salta linhas.//
    }
    for(int repet=0;repet<3;repet++)                //Ciclo para fazer a diferença das matrizes.//
    {
        for(int aux=0;aux<8;aux++)
        {
            matZ_resultante_2[repet][aux]=matZ_1[repet][aux]-matZ_2[repet][aux];
        }
    }
    printf("\n");                   //Salta linhas.//
    printf("Essa é o resultado da diferença das duas matrizes:\n\n");           //INFO.//
    for(int repet=0;repet<3;repet++)                        //Ciclo para imprimir o resultado.//
    {
        for(int aux=0;aux<8;aux++)
        {
        //OUTPUT_________________________________________________________________________________________________    
            printf("%d ", matZ_resultante_2[repet][aux]);               //RESPOSTA.//
        }
        printf("\n");                   //Salta linhas.//
    }
    return 0;
}

