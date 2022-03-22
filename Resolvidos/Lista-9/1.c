/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
int criptografa_frase(char frase[256],int tam)             //Função para criptografar frases.//
{
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=tam-2;repet>=0;repet--)               //Ciclo para trocar as consoantes da frase para #.//
    {
        if((frase[repet]=='a')||(frase[repet]=='A')||(frase[repet]=='e')||(frase[repet]=='E')||(frase[repet]=='i')||(frase[repet]=='I')||(frase[repet]=='o')||(frase[repet]=='O')||(frase[repet]=='u')||(frase[repet]=='U')||(frase[repet]==' '))           //Teste condicional.//
        {

        }
        else
        {
            frase[repet]='#';       //Substitui as consoantes por #.//
        }
    }
}
int main()              //Função principal.//
{
    char frase[256];             //Declaração da string.//
    int tam;                //Declaração da variável auxiliar.//

    printf("Escreva uma frase para o programa criptografar pra você.");                 //INFO.//
//IMPUT_____________________________________________________________________________________________________    
    printf("\nEscreva: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);

    criptografa_frase(frase,tam);           //Chamada da Função criptografa_frase.//

    for(int repet=tam-2;repet>=0;repet--)           //Ciclo para imprimir a frase criptografada.//
    {
    //OUTPUT__________________________________________________________________________________________________    
        printf("%c", frase[repet]);             //RESPOSTA.//
    }
    return 0;
}




