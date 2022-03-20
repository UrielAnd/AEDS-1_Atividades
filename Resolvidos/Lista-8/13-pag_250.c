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
    int matZ[6][4];                                                   //Declaração da matriz.//
    int maior=0;                             //Declaração da variável para a identificação dos maiores n°(s) de uma linha da matriz.//
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=0;repet<6;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.// 
    {
        for(int aux=0;aux<4;aux++)
        {
            matZ[repet][aux]=rand() %50;
             printf("%d ", matZ[repet][aux]);                                 //INFO.//          
        }
        printf("\n");                                                      //Salta linhas.//
    }
    printf("\n");                                                         //Salta linhas.//
    printf("Essa matriz resultante da matriz multiplicada pelo maior n° dela é:\n");
    for(int repet=0;repet<6;repet++)                //Ciclo para a identificação do maior n em cada linha da matriz.//
    {
        maior=0;
        printf("\n");                                                      //Salta linhas.//
        for(int aux=0;aux<4;aux++)
        {
            if(matZ[repet][aux]>maior)
            {
                maior=matZ[repet][aux];                                       //conta.//
            }
        }
        for(int aux=0;aux<4;aux++)     //Ciclo para fazer a multiplicação dos maior n de cada linha com os demais da mesma linha.//
        {
            matZ[repet][aux]*=maior;
        //OUTPUT________________________________________________________________________________________________    
            printf("%d ", matZ[repet][aux]);                          //Impressão da resposta.//
        }
    }
    
    
    
    return 0;
}



