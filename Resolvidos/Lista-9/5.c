/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECA//
#include <string.h>  //BIBLIOTECA//
int decobre_permutacao(char palavra_1[46], char palavra_2[46], int tam_1, int tam_2)     //Declaração da função para descobrir se uma palavra é permutação da outra.//
{
    int cont=0;         //Declaração da variável auxiliar.//
//PROCESSAMENTO_____________________________________________________________________________________________________    
    for(int repet=0;repet<tam_1;repet++)            //Ciclo para verificar sse uma palavra é permutação da outra.//
    {
        for(int aux=0;aux<tam_2;aux++)              //Ciclo para verificar sse uma palavra é permutação da outra.//
        {
            if(palavra_1[repet]==palavra_2[aux])                //Teste condicional.//
            {
                cont ++;
                break;
            }
        }
    }

    return cont;                    //Retorna para a função principal.//
}
int main()                          //Função principal.//
{
    char palavra_1 [46], palavra_2 [46];            //Declaração das strings.//
    int tam_1, tam_2, resp;                     //Declaração das variáveis auxiliares.//
    
    printf("Digite 2 palavrase para o programa analizar se uma é permutação da outra.\n");                  //INFO.//
//IMPUT_____________________________________________________________________________________________________________    
    printf("Digite a 1°palavra: ");
    scanf("%s", palavra_1);
//IMPUT_____________________________________________________________________________________________________________    
    printf("Digite a 2°palavra: ");
    scanf("%s", palavra_2);
    
    tam_1=strlen(palavra_1);
    tam_2=strlen(palavra_2);
    
    resp=decobre_permutacao(palavra_1,palavra_2,tam_1,tam_2);            //chamada da função.//
    
    if(resp==tam_2)                     //Teste condicional.//
    {
    //OUTPUT_____________________________________________________________________________________________________    
        printf("A primeira palavra é permutação da segunda");               //RESPOSTA.//
    }
    else
    {
    //OUTPUT_____________________________________________________________________________________________________    
        printf("A primeira palavra não é permutação da segunda");           //RESPOSTA.//
    }
    
    return 0;
}

