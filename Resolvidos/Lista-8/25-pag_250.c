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
    float vtAR[10];                                         //Declaração da Array.//
    int matZ[5][10];                                        //Declaração da matriz.//
    int soma, maior=0, cont, menor;                   //Declaração das variáveis auxiliares.//
    float multi;                                       //Declaração da variável auxiliar//
    
    srand(time(NULL));
    
    printf("Digite o preço de 10 produtos.\n");                   //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________ 
    for(int repet=0;repet<10;repet++)       //Ciclo para o programa fazer as devidas interções com o usuário para preencher o vetor.//
    {
    //OUTPUT__________________________________________________________________________________________________    
        printf("Digite: ");
        scanf("%f", &vtAR[repet]);
    }
    printf("\n");                                                   //Salta linhas.//
    for(int repet=0;repet<5;repet++)            //Ciclo para o programa criar e colocar os n°(s) na matriz.//
    {
        for(int aux=0;aux<10;aux++)
        {
            matZ[repet][aux]=rand() %100;
            printf("%d ", matZ[repet][aux]);
        }
        printf("\n");                                       //Salta linhas.//
    }
//PROCESSAMENTO_______________________________________________________________________________________________     
    for(int repet=0;repet<5;repet++)            //Ciclo para ver a quantidade de itens em cada armazem.//
    {
        soma=0;
        for(int aux=0;aux<10;aux++)
        {
            soma+=matZ[repet][aux];
        }
    //OUTPUT__________________________________________________________________________________________________       
        printf("\nA quantidade de produtos estocados no armazem %d é: %d", repet, soma);                                    //RESPOSTA.//
    }
    printf("\n");                                                               //Salta linhas.//
    for(int repet=0;repet<10;repet++)               //Ciclo para ver a quantidade de produto em cada um dos armazem.//
    {
        soma=0;
        for(int aux=0;aux<5;aux++)
        {
            soma+=matZ[aux][repet];
        }
    //OUTPUT__________________________________________________________________________________________________       
        printf("\nA quantidade do produto %d em cada um dos armazéns é: %d", repet, soma);                                          //RESPOSTA.//
    }
    printf("\n\n");                                                         //Salta linhas.//
    for(int repet=0;repet==0;repet++)                   //Ciclo para ver a quantidade do maior produto e devolver seu preço.//
    {
        for(int aux=0;aux<10;aux++)
        {
            if(matZ[repet][aux]>maior)
            {
                maior=matZ[repet][aux];
                cont=aux;
            }
        }
    }
    for(int repet=cont;repet==cont;repet++)                 //Ciclo para imprimir a resposta do ciclo a cima.//
    {
    //OUTPUT__________________________________________________________________________________________________       
        printf("O preço do produto que possui o maior armazenamento no armazem 0 é de: %.2f reais.", vtAR[repet]);                              //RESPOSTA.//
    }
    menor=matZ[0][0];
    for(int repet=0;repet<5;repet++)                //Ciclo para ver o menor estoque armazenado.//
    {
        for(int aux=0;aux<10;aux++)
        {
            if(matZ[repet][aux]<menor)
            {
                menor=matZ[repet][aux];
            }
        }
    }
    printf("\n\n");                                                                     //Salta linhas.//
//OUTPUT__________________________________________________________________________________________________       
    printf("O menor estoque armazenado é de: %d", menor);                       //RESPOSTA.//
    for(int repet=0;repet<5;repet++)                    //Ciclo para ver o custo de cada armazem.//
    {
        multi=0;
        for(int aux=0;aux<10;aux++)
        {
            multi+=(matZ[repet][aux]*vtAR[aux]);
        }
    //OUTPUT__________________________________________________________________________________________________    
        printf("\nO custo do armazem %d é de: %.2f reais.", repet, multi);          //RESPOSTA.//
    }
    

    return 0;
}

