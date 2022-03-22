/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
int calcula_palavras(char frase[256], int tam)        //Declaração da função para contar quantas palavras tem na frase.//
{
//PROCESSAMENTO___________________________________________________________________________________________________    
    int cont=1;
    for(int repet=0;repet<tam;repet++)                  //Ciclo para contar quantas palavrase tem na frase.//
    {
        if(frase[repet]==' ')                                   //Teste condicional.//
        {
            cont++;
        }
    }
    return cont;                                //Retorna valor para a função principal.//
}
int main()                      //Função principal.//
{
    char frase[256];                //Declaração da string.//
    int tam, cont;            //Declaração das variável auxiliar.//
    
    printf("Digite uma frase para ser criptografada pelo programa. ");              //INFO.//
//IMPUT______________________________________________________________________________________________________    
    printf("\nDigite: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    cont=calcula_palavras(frase,tam);           //Chamada de função.//

//OUTPUT_____________________________________________________________________________________________________
    printf("A quantidade de palavras nessa frase é de %d palavras.", cont);                     //RESPOSTA.//
    return 0;
}
