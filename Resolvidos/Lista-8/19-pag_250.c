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
    int matZ[8][6];                                                      //Declaração da matriz.//
    int soma=0, cont;                                             //Declaração das variáveis auxiliares//
    float media;                                            //Declaração da variável media pora fazer a média.//
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=0;repet<8;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.// 
    {
        for(int aux=0;aux<6;aux++)
        {
            matZ[repet][aux]=rand() %100;
             printf("%d ", matZ[repet][aux]);                                  //INFO.//          
        }
        printf("\n");                                                      //Salta linhas.//
    }
    for(int repet=0;repet<8;repet++)               //Ciclo para descobrir os n°(s) pares e fazer as devidas somas.//
    {
        for(int aux=0;aux<6;aux++)
        {
            if(repet%2==0)
            {
                soma+=matZ[repet][aux];
                cont++;
            }
        }
    }
    printf("\n");                                                            //Salta linhas.//
    media=(float)soma/(float)cont;
//OUTPUT_______________________________________________________________________________________________    
    printf("A média dos elementos das linhas pares da matriz é: %.2f", media);         //RESPOSTA.//

    return 0;
}

