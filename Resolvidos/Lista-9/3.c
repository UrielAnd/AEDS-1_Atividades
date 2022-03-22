/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>      //BIBLIOTECA//
#include <string.h>    //BIBLIOTECA//
void retira_espacos_frase(char frase[256], int tam)              //Sub-rotina para retirar espaços da frase.//
{
//PROCESSAMENTO_________________________________________________________________________________________________    
    for(int repet=0;repet<tam;repet++)                           //Ciclo para retirar os espaços da frase.//
    {
        if(frase[repet]==' ')                                              //Teste condicional.//
        {
            
        }
        else
        {
        //OUTPUT________________________________________________________________________________________________    
            printf("%c", frase[repet]);                                        //RESPOSTA.//
        }
    }
}


int main()                          //Função principal.//
{
    char frase[256];              //Declaração da string.//
    int tam;                //Declaração da variável auxiliar.//

    printf("Escreva uma frase para o programa criptografar pra você.");                 //INFO.//
//IMPUT_________________________________________________________________________________________________________    
    printf("\nEscreva: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);

    retira_espacos_frase(frase,tam);                                //Chamada de sub-rotina.//
    
    return 0;
}
