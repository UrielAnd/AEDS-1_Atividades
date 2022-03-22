/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
void duplica_caracteres(char frase[256],int tam)        //Declaração da sub-rotina, para duplicar cracteres de frases.//
{
//PROCESSAMENTO_____________________________________________________________________________________________    
    for(int repet=0;repet<tam;repet++)
    {
        for(int aux=0;aux<2;aux++)              //Ciclo para duplicar os caracteres da frase.//
        {
            if(frase[repet]!=' ')                           //Teste condicional.//
            {
            //OUTPUT_______________________________________________________________________________________    
                printf("%c",frase[repet]);                              //RESPOSTA.//
            }
            else if(frase[repet]==' ')
            {
            //OUTPUT_______________________________________________________________________________________     
                printf("%c",frase[repet]);                              //RESPOSTA.//
                aux++;
            }
            else
            {
            //OUTPUT_______________________________________________________________________________________     
                printf("%c",frase[repet]);                              //RESPOSTA.//
            }
            
            
        }
    }
}
int main()                  //Função principal.//
{
    char frase[256];                //Declaração da string.//
    int tam;                  //Declaração da variável auxiliar.//
    
    printf("Digite a frase para o programa criar uma copia duplicando as letras.");                         //INFO.//
//IMPUT____________________________________________________________________________________________________    
    printf("\nDigite: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);

    duplica_caracteres(frase,tam);                      //Chamada da sub-rotina.//

    return 0;
}
