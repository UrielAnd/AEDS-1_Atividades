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
    int vtAR1[10],vtAR2[5];                                     //Declaração das Array.//
    int vtAR_resultante1[1], vtAR_resultante2[1];          //Declaração da Array resultantes.//
    int cont=0;                                                   //Variável auxiliar//
    
    srand(time(NULL));
    
    printf("Esses são os elementos criado pelo programa para preencher o vetor 1:\n\n");     //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)       //Ciclo de repetição o programa criar os elementos do vetor.//
    {
        vtAR1[repet]=rand() %100;
        printf("%d ", vtAR1[repet]);                                     //INFO.//
    }
    printf("\n\n");                            //Salta linhas.//
    printf("Esses são os elementos criado pelo programa para preencher o vetor 2:\n\n");     //INFO.//
    for(int repet=0;repet<5;repet++)       //Ciclo de repetição o programa criar os elementos do vetor.//
    {
        vtAR2[repet]=rand() %100;
        printf("%d ", vtAR2[repet]);                                     //INFO.//
    }
    printf("\n\n");                            //Salta linhas.//
    for(int repet=0;repet<10;repet++)               //Ciclo para o primeiro vetor resultante.//
    {
        vtAR_resultante1[0]=0;
        if(vtAR1[repet]%2==0)
        {
            vtAR_resultante1[0]+=vtAR1[repet];
            for(int aux=0;aux<5;aux++)
            {
                vtAR_resultante1[0]+=vtAR2[aux];
            }
        //OUTPUT_________________________________________________________________________________________    
            printf("%d ", vtAR_resultante1[0]);                 //RESPOSTA.//
        }
        else
        {
            
        }
    }
    printf("\n");                                        //Salta linhas.//
    for(int repet=0;repet<10;repet++)        //Ciclo para o primeiro vetor resultante//
    {
        vtAR_resultante2[0]=0;
        if(vtAR1[repet]%2==1)
        {
            for(int aux=0;aux<5;aux++)
            {
                if(vtAR1[repet]%vtAR2[aux]==0)
                {
                    vtAR_resultante2[0]+=1;
                }
            }
        //OUTPUT_________________________________________________________________________________________    
            printf("%d ", vtAR_resultante2[0]);             //RESPOSTA.//
            if(vtAR_resultante2[0]==0)
            {
            //OUTPUT_________________________________________________________________________________________        
                printf("0 ");                           //RESPOSTA.//
            }
        }
    }
    

    return 0;
}






