/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>       //BIBLIOTECAS//
#include <stdlib.h>     //BIBLIOTECAS//
int main()                             
{
    int tam_1,tam_2, cont=0, soma;                                          //Declaração das variáveis auxiliares.//
    
    printf("Digite o tamanho do primeiro vetor.");                                  //INFO.//
//IMPUT_________________________________________________________________________________________________________________________________    
    printf("\nDigite: ");
    scanf("%d", &tam_1);
    
    int vtAR_1[tam_1], add=tam_1;                                   //Declaração do vetor 1.//Declaração da variável auxiliar.//
    
    printf("Digite o tamanho do segundo vetor.");                                   //INFO.//
//IMPUT_________________________________________________________________________________________________________________________________        
    printf("\nDigite: ");
    scanf("%d", &tam_2);
    
    int vtAR_2[tam_2];                                  //Declaração do vetor 2.//
//PROCESSAMENTO_________________________________________________________________________________________________________________________________        
    for(int repet=0;repet<tam_1;repet++)                            //Ciclo de processamento do programa para fazer as devidas alteraçoes nos vetores.//
    {
        vtAR_1[repet]=cont;
        cont+=3;
    }
    
    for(int repet=0;repet<tam_2;repet++)                            //Ciclo de processamento do programa para fazer as devidas alteraçoes nos vetores.//
    {
        vtAR_2[repet]=tam_1+cont;   
        cont+=3;
    }
    
    soma=tam_1+tam_2;                                                        //Conta.//
    
    int* pt=(int*)calloc(soma,sizeof(int));
    
    for(int repet=0;repet<tam_1;repet++)                            //Ciclo de processamento do programa para fazer as devidas alteraçoes nos vetores.//
    {
        pt[repet]=vtAR_1[repet];
    }
    
    for(int repet=0;repet<soma;repet++)                         //Ciclo de processamento do programa para fazer as devidas alteraçoes nos vetores.//
    {
        pt[add]=vtAR_2[repet];
        add++;
    }
    
    printf("Esses são os elementos dos dois primeiros vetores ordenados em um unico vetor.\n\n");               //INFO.// 
    for(int repet=0;repet<soma;repet++)                                      //Ciclo para imprimir o vetor da alocação dinamica.//
    {
    //OUTPUT______________________________________________________________________________________________________________________________   
        printf("%d ", pt[repet]);                                                    //RESPOSTA.//
    }
    
    free (pt);                                                              //Libera memória alocada.//
    
    return 0;
}




