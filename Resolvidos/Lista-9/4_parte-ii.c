/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>      //BIBLIOTECAS//
#include <string.h>     //BIBLIOTECAS//
int verifica_palindromo(char palavra[46], int tam)      //Declaração da função para verificar se a palavra que o usuário digitou é um palindromo.//
{
    char palavra_inv[46];
    int cont=0;
    for(int repet=tam-1;repet>=0;repet--)                           //Ciclo para inverter a palavra que o usuário digitou.//
    {
        palavra_inv[cont]=palavra[repet];
        cont++;
    }
    cont=0;
    for(int repet=0;repet<tam;repet++)                              //Ciclo para verificar se a palavra é um palindromo.//
    {
        if(palavra[repet]==palavra_inv[repet])                      //Teste condicional.//
        {
            cont++;
        }
    }

    return cont;                            //Retorna para a função principal.//
}
int main()                          //Função principal.//
{
    char palavra[46];                   //Declaração da string.//
    int tam, resp;                        //Declaração da variável auxiliar.//
    printf("Digite uma frase para o programa verificar se ela é um palindromo.\n");                  //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("Digite: ");                 
    scanf("%s", palavra);
    
    tam=strlen(palavra);
    
    resp=verifica_palindromo(palavra,tam);           //Chamada da função.//
    
    if(resp==tam)               //Teste condicional.//
    {
    //OUTPUT____________________________________________________________________________________    
        printf("\nEssa palavra é um padindromo");               //RESPOSTA.//
    }
    else
    {
    //OUTPUT____________________________________________________________________________________    
        printf("\nEssa palavra não é um palindromo");               //RESPOSTA.//
    }
    return 0;
}
