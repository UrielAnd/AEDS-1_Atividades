/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>     //BIBLIOTECA//
int pesquisa(int vtAR[], int n, int valor)                  //Declaração de função para 
{
    int i=0;                                     //Declaração da variável auxiliar da função.//
    if(n==0)                                                //Teste condicional.//
    {
        if (vtAR[n]==valor)                                 //Teste condicional.//
        {
            i=1;
        }
        return i;
    }
    else
    {
        if (vtAR[n]==valor)                                  //Teste condicional.//
        {
            i=1;
        }
        return pesquisa(vtAR,n-1,valor);
    }
}
int main()                                  //Função principal.//
{
    int n, resp=0, valor=0;                                //Declaração das variáveis auxiliares.//
    float media;                                        //Declaração da variável auxiliare.//
//IMPUT_____________________________________________________________________________________________________
    printf("Qual o tamanho que você que criar o vetor: ");
    scanf("%d", &n);
    
    int vtAR[n];
    
    printf("Digite n°(s) inteiros para preencher o vetor de %d posições.\n", n);                       //INFO.//

    for(int repet=0;repet<n;repet++)                                    //Ciclo para o usuário inserir os elementos no vetor.//
    {
    //IMPUT_____________________________________________________________________________________________________    
        printf("Digite a posição %d do vetor: ", repet);
        scanf("%d", &vtAR[repet]);
    }

//IMPUT_____________________________________________________________________________________________________    
    printf("Digite um n° que deseja procurar no vetor: ");
    scanf("%d", &valor);

    resp=pesquisa(vtAR,n-1,valor);                  //Chamada da função.//

    if(resp==1)
    {
        printf("Esse n° se encontra no vetor\n");               //INFO.//
    //OUTPUT_____________________________________________________________________________________________________    
        printf("%d", resp);
    }
    else
    {
        printf("Esse n° não se encontra no vetor\n");             //INFO.//
    //OUTPUT_____________________________________________________________________________________________________       
        printf("%d", resp);
    }    

    return 0;
}
