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
    int matZ[3][5];                                                    //Declaração da matriz.//
    int cont=0;                                                  //Declaração da variável auxiliar.//
    
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=0;repet<3;repet++)                   //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<5;aux++)
        {
            matZ[repet][aux]=rand() %50;
            printf("%d ", matZ[repet][aux]);                                  //INFO.//          
        }
        printf("\n");                                                     //Salta linhas.//
    }
    printf("\n");                                                         //Salta linhas.//
    for(int repet=0;repet<3;repet++)                 //Ciclo para overificar quantos n°(s) na matriz está entre 15 a 20.// 
    {
        for(int aux=0;aux<5;aux++)
        {
            if((matZ[repet][aux]>15)&&(matZ[repet][aux]<20))
            cont++;
        }
    }
//OUTPUT________________________________________________________________________________________________    
    printf("A quantidade de n°(s) dessa matriz entre 15 e 20 é de %d. ", cont);         //RESPOSTA.//

    return 0;
}



