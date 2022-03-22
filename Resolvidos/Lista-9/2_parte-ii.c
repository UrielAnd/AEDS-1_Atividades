/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
void inverte_frase(char frase[256],int tam)                 //Declaração da sub-rotina, para inverter os caracteres de uma frase.//
{
//PROCESSAMENTO_______________________________________________________________________________________________    
    for(int repet=tam-2;repet>=0;repet--)           //Ciclo para imprimir a frase criptografada.//
    {
    //OUTPUT__________________________________________________________________________________________________    
        printf("%c", frase[repet]);             //RESPOSTA.//
    }

}
int main()
{
    char frase[256];             //Declaração da string.//
    int tam;                //Declaração da variável auxiliar.//

    printf("Escreva uma frase para o programa criptografar pra você.");                 //INFO.//
//IMPUT_____________________________________________________________________________________________________    
    printf("\nEscreva: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    inverte_frase(frase,tam);                       //Chamada da sub-rotina.//
    
    return 0;
}
