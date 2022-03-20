/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <stdlib.h>  //BIBLIOTECAS//
#include <time.h>   //BIBLIOTECAS//
void acha_maior(int matZ[10][10],int* cont)    //Sub-rotina para realizar a soma dos elemntos acima da diagonal principal da matriz.//
{
    srand(time(NULL));
    int help=0;         //Declaração da variável auxiliar.//
    printf("Esses são os n°(s) da matriz 1 criados pelo programa:\n\n");          //INFO.//
//PROCESSAMENTO________________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)        //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<10;aux++)
        {
            matZ[repet][aux]=rand() %100;
            printf("%d ", matZ[repet][aux]);                        //INFO.//
        }
        printf("\n");                           //Salta linhas.//
    }
    for(int repet=0;repet<10;repet++)       //Ciclo para somar os elementos acima da diagonal principal da matriz.//
    {
        for(int aux=1+help;aux<10;aux++)
        {
            (*cont)+=matZ[repet][aux];
        }
        help++;
    }
}
int main()
{
    int matZ[10][10];               //Declaração da matriz.//
    
    int cont=0;                     //Declaração da variavel para ser passada seu endereço para uum ponteiro que se localiza da sub-rotina.//
    
    acha_maior(matZ,&cont);         //Chamada da sub-rotina com seus parâmetros//
    
    printf("\n");                //Salta linhas.//
//OUTPUT_________________________________________________________________________________________    
    printf("A soma dos elementos acima da diagonal principal da matriz criada é: %d", cont);        //RESPOSTA.//
    
    return 0;
}
