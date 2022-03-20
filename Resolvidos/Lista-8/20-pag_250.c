/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <stdlib.h>  //BIBLIOTECAS//
#include <time.h>   //BIBLIOTECAS//
int main()
{
    int matZ[5][5];                                  //Declaração da matriz.//
    int maior=0;                //Declaração da variável para a identificação do maior n° da matriz.//
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");          //INFO.//
    srand(time(NULL));
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=0;repet<5;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<5;aux++)
        {
            matZ[repet][aux]=rand() %100;
            printf("%d ", matZ[repet][aux]);                                 //INFO.//
        }
        printf("\n");                                                    //Salta linhas.//
    }
    
    for(int repet=0;repet<5;repet++)                        //Ciclo para descobrir o maior n° da matriz.//
    {
        for(int aux=0;aux<5;aux++)
        {
            if(matZ[repet][aux]>maior)
            {
                maior=matZ[repet][aux];
            }
        }
    }
    for(int repet=0;repet<5;repet++)                //Ciclo para fazer as devidas contas com a matriz.//
    {
        for(int aux=repet;aux==repet;aux++)         
        {
            matZ[repet][aux]*=maior;
        }
    }
    printf("\nA matriz resultante é:\n\n");                             //INFO.//
    for(int repet=0;repet<5;repet++)                       //Ciclo para imprimir a resposta.//
    {
        for(int aux=0;aux<5;aux++)
        {
        //OUTPUT_______________________________________________________________________________________________    
            printf("%d ", matZ[repet][aux]);                         //RESPOSTA.//
        }
        printf("\n");                                             //Salta linhas.//
    }
    return 0;
}

