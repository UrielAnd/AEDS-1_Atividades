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
    int vtAR[7];                                            //Declaração da Array.//
    
    srand(time(NULL));
    
    printf("Esses são os elementos criado pelo programa para preencher o vetor:\n\n");     //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<7;repet++)       //Ciclo de repetição o programa criar os elementos do vetor.//
    {
        vtAR[repet]=rand() %100;
        printf("%d ", vtAR[repet]);                                     //INFO.//
    }
    printf("\n");                            //Salta linhas.//
    printf("\nOs n°(s) multiplos de 2 são/é:\n ");
    for(int repet=0;repet<7;repet++)    //Ciclo de repetição para verificar os n°s da array que é multiplo de 2.//
    {
        if(vtAR[repet]%2==0)
        {
        //OUTPUT_________________________________________________________________________________________
            printf("%d ", vtAR[repet]);
        }
    }
//OUTPUT_______________________________________________________________________________________________    
    printf("\nOs n°(s) multiplos de 3 são/é:\n ");
    for(int repet=0;repet<7;repet++)    //Ciclo de repetição para verificar os  n°s da array que é multiplo de 3.//
    {
        if(vtAR[repet]%3==0)
        {
        //OUTPUT_________________________________________________________________________________________
            printf("%d ", vtAR[repet]);
        }
    }
//OUTPUT________________________________________________________________________________________________    
    printf("\nOs n°(s) multiplos de 2 e 3 são:\n ");
    for(int repet=0;repet<7;repet++)    //Ciclo de repetição para verificar os n°s da array que é multiplo de 2 e 3.//
    {
        if(vtAR[repet]%2==0)
        {
        //OUTPUT_________________________________________________________________________________________
            printf("%d ", vtAR[repet]);                 //RESPOSTA.//
        }
        else if(vtAR[repet]%3==0)
        {
        //OUTPUT_________________________________________________________________________________________
            printf("%d ", vtAR[repet]);                 //RESPOSTA.//
        }
    }
    

    return 0;
}




