/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
void separa_palavras(char frase[256], int tam)              //Sub-rotina para separar as palavras da frase.//
{
    printf("\n");               //Salta linahs.//
//PROCESSAMENTO_____________________________________________________________________________________________    
    for(int repet=0;repet<=tam-2;repet++)       //Ciclo para separar as palavras.//
    {
    //OUTPUT________________________________________________________________________________________________    
        printf("%c", frase[repet]);                         //RESPOSTA.//
        
        if(frase[repet]==' ')           //Teste condicional.//
        {
            printf("\n");                       //Salta linahs.//
        }
    }
}
int main()              //Função principal.//
{
    char frase[256];                     //Declaração da string.//
    int tam;                        //Declaração da variável auxiliar.//
    
    printf("Digite uma frase para o programa separar as palavras.");                //INFO.//
//IMPUT_____________________________________________________________________________________________________      
    printf("\nEscreva: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    separa_palavras(frase, tam);        //Chamada da sub-rotina.//
    
    return 0;
}


