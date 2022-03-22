/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
int criptografa_com_num(char frase[256], int tam)               //Declaração da função para criptografa uma frase, trocamdo suas vogais por n°(s) determinados.//
{
//PROCESSAMENTO___________________________________________________________________________________________________    
    for(int repet=0;repet<tam;repet++)                  //Ciclo para criptografa as vogais de uma frase.//
    {
        if((frase[repet]=='a')||(frase[repet]=='A'))            //Teste condicional.//
        {
            frase[repet]='1';                   //TROCA.//
        }
        else if((frase[repet]=='e')||(frase[repet]=='E'))
        {
            frase[repet]='2';                   //TROCA.//
        }
        else if((frase[repet]=='i')||(frase[repet]=='I'))
        {
            frase[repet]='3';                   //TROCA.//
        }
        else if((frase[repet]=='o')||(frase[repet]=='O'))
        {
            frase[repet]='4';                   //TROCA.//
        }
        else if((frase[repet]=='u')||(frase[repet]=='U'))
        {
            frase[repet]='5';                   //TROCA.//
        }
    }
}

int main()              //Função principal.//
{
    char frase[256];                //Declaração da string.//
    int tam;                  //Declaração da variável auxiliar.//
    
    printf("Digite uma frase para ser criptografada pelo programa. ");              //INFO.//
//IMPUT________________________________________________________________________________________________    
    printf("\nDigite: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    criptografa_com_num(frase,tam);                 //Chamada de função.//
//OUTPUT_______________________________________________________________________________________________    
    printf("%s", frase);                    //RESPOSTA.//
    
    return 0;
}



