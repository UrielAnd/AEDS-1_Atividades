/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>   //BIBLIOTECAS//
#include <stdlib.h> //BIBLIOTECAS//
#include <time.h>  //BIBLIOTECAS//

int main()
{
    int matZ[2][4];                                                 //Declaração da matriz.//
    int cont;                                                 //Declaração da variável auxiliar.//
    int soma=0,media=0;                                  //Decçarção das variáveis para usar na media.//
    float resp;                                   //Decçarção da variável para ser a resposta do calcúlo da média.//
    
    srand(time(NULL));
    
    printf("Esses são os n°(s) da matriz criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=0;repet<2;repet++)                //Ciclo para o programa criar e colocar os n°(s) na matriz.// 
    {
        for(int aux=0;aux<4;aux++)
        {
            matZ[repet][aux]=rand() %50;
             printf("%d ", matZ[repet][aux]);                                  //INFO.//          
        }
        printf("\n");                                                      //Salta linhas.//
    }
    printf("\n");                                                          //Salta linhas.//
    for(int repet=0;repet<2;repet++)        //Ciclo descobrir os n°(s) entre 12 e 20 das determinadas linhas e a médio dos elementos pares da matriz.// 
    {
        cont=0;
        for(int aux=0;aux<4;aux++)                                                           
        {                                                                  
            if((matZ[repet][aux]>12)&&(matZ[repet][aux]<20))                                                              
            cont++;                                                             
             
            if(matZ[repet][aux]%2==0)                                                           
            {                                                              
                soma+=matZ[repet][aux];                                                                                      
                media++;                                                   
            }
        }
    //OUTPUT________________________________________________________________________________________________    
        printf("Na linha %d tem %d n°(s) entre 12 e 20.\n", repet, cont);                 //RESPOSTA.//
    }
    resp=(float)soma/(float)media;
//OUTPUT________________________________________________________________________________________________    
    printf("A média dos elemntos pares da matriz é %.2f.", resp);                        //RESPOSTA.//

    return 0;
}




