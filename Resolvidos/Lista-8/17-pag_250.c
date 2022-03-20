/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>   //BIBLIOTECAS//
#include <stdlib.h> //BIBLIOTECAS//
#include <time.h>  //BIBLIOTECAS//
int main()
{
    int matZ[10][10];                                                   //Declaração da matriz .//
    int soma=0, cont=0;                                         //Declaração das variáveis auxiliares.//
    float media;                                           //Declaração da variável media pora fazer a média.//
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.// 
    {
        for(int aux=0;aux<10;aux++)
        {
            matZ[repet][aux]=rand() %100;
             printf("%d ", matZ[repet][aux]);                                  //INFO.//          
        }
        printf("\n");                                                      //Salta linhas.//
    }
    for(int repet=0;repet<10;repet++)           //Ciclo fazer a soma e contar os n°(s) da diagonal principal da matriz.//
    {
        for(int aux=repet;aux==repet;aux++)
        {
            soma+=matZ[repet][aux];
            cont++;
        }
    }
    media=(float)soma/(float)cont;                                       //CALCULO MÉDIA.//
//OUTPUT___________________________________________________________________________________________________    
    printf("\nA média dos elementos da diagonal principal da matriz é: %.2f", media);   //RESPOSTA.//
    return 0;
}
