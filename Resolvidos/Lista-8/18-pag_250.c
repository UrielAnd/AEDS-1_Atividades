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
    int matZ[5][5];                                   //Declaração da matriz.//
    int cont=4, resp=0;                        //Declaração das variáveis auxiliares.//
    
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
    for(int repet=0;repet<5;repet++)              //Ciclo para realizar as somas da diagonal secundaria da matriz.//
    {
        for(int aux=cont;aux==cont;aux++)
        {
            resp+=matZ[repet][aux];
            if(cont>=0)
            {
                cont--;
            }
        }
    }
//OUTPUT_______________________________________________________________________________________________    
    printf("A soma dos elementos da diagonal secundaria da matriz é: %d", resp);     //RESPOSTA.//
    return 0;
}
