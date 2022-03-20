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
    int matZM[4][6], matZN[6][4];                                     //Declaração das matrizes.//
    
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=0;repet<4;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.// 
    {
        for(int aux=0;aux<6;aux++)
        {
            matZM[repet][aux]=rand() %50;
             printf("%d ", matZM[repet][aux]);                                  //INFO.//          
        }
        printf("\n");                                                      //Salta linhas.//
    }
     printf("\n");                                                         //Salta linhas.//
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");         //INFO.//
    for(int repet=0;repet<6;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.// 
    {
        for(int aux=0;aux<4;aux++)
        {
            matZN[repet][aux]=rand() %50;
             printf("%d ", matZN[repet][aux]);                                  //INFO.//          
        }
        printf("\n");                                                       //Salta linhas.//
    }
     printf("\n");                                                          //Salta linhas.//
     printf("Matriz respostas:\n");                                             //INFO.//
    for(int repet=0;repet<4;repet++)                  //Ciclo para somar a linha por coluna na da matriz M pela matriz N.// 
    {
        printf("\n");
        for(int aux=0;aux<6;aux++)
        {
        //OUTPUT__________________________________________________________________________________________________    
            matZM[repet][aux]+=matZN[aux][repet];
            printf("  %d ", matZM[repet][aux]);                            //RESPOSTA.//
        }
    }
   
    
    return 0;
}


