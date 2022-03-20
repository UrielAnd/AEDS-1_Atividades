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
    int matZ[3][3], matZ_resultante[3][3];                          //Declaração da matriz inicial e da matriz resultante.//
    int valor;                                                      //Declaração da variável que o usuário vai inserir um n°.//
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");                      //INFO.//
//PROCESSAMENTO____________________________________________________________________________________________________    
    for(int repet=0;repet<3;repet++)                                //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<3;aux++)
        {
            matZ[repet][aux]=rand() %100;
            printf("%d ", matZ[repet][aux]);                                                 //INFO.//
        }
        printf("\n");                                                                    //Salta linhas.//
    }
//IMPUT____________________________________________________________________________________________________________    
    printf("Digite um n° que deseja multiplicar toda a matriz: ");
    scanf("%d", &valor);
    printf("Essa é a matriz resultante da multiplicação da matriz criada pelo n° inserido por você:\n\n ");                 //INFO.//
//PROCESSAMENTO____________________________________________________________________________________________________        
    for(int repet=0;repet<3;repet++)                  //Ciclo para multiplicar os itens da matriz pelo n° que o usuário inseriu.//
    {
        for(int aux=0;aux<3;aux++)
        {
            matZ_resultante[repet][aux]=matZ[repet][aux]*valor;
        //OUTPUT________________________________________________________________________________________________   
            printf("%d ", matZ_resultante[repet][aux]);                             //RESPOSTA.//
        }
        printf("\n");                                                            //Salta linhas.//
    }
    
    return 0;
}


