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
    int vtAR1[10], vtAR2[10];                                              //Declaração das Arrays.//
    
    srand(time(NULL));
    
    printf("Digite 10 n(s)° inteiros para armazenar no vetor.\n");                 //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)          //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT____________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtAR1[repet]);
    }
    for(int repet=0;repet<10;repet++)         //Ciclo para fazer as devidas trocas dos vetores.//
    {
        vtAR2[repet]=vtAR1[repet];
        
        if(vtAR2[repet]==0)
        {
            vtAR2[repet]=rand() %100;
        }
    }
    printf("Esse é o vetor inserido por você:\n\n ");                   //INFO.//
    for(int repet=0;repet<10;repet++)
    {
    //OUTPUT____________________________________________________________________________________________    
        printf("%d ", vtAR1[repet]);                                //RESPOSTA.//
    }
    printf("\nEsse é o vetor com os n°(s) nulos do vetor digitado trocado por outros n(s):\n\n ");                  //INFO.//
    for(int repet=0;repet<10;repet++)
    {
    //OUTPUT____________________________________________________________________________________________    
        printf("%d ", vtAR2[repet]);                                //RESPOSTA.//
    }
    return 0;
}

