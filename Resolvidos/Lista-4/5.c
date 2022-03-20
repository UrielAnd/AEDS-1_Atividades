/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#Pergunta:
    Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) 
e imprimir apalavra PROGRAMACAO N vezes.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <stdio.h>

int main()
{
    int repet, vezes;                                                   //Variável de repetição & Variável de condição.//
    repet=1;
//IMPUT__________________________________________________________________________________________    
    printf("Digite quantas vezes você quer repetir a palavra programação: ");
    scanf("%d", &vezes);                                      //Scanea o valor que o usuario quer repetir a palavra PROGRAMAÇÂO.//
//PROCESSAMENTO__________________________________________________________________________________________        
    if(vezes>0)                                                        //Condição1.//
    {
        while(repet<+vezes)
        {
        //OUTPUT__________________________________________________________________________________________    
            printf("PROGRAMAÇÂO.\n");
            repet++;                                          //Incremento.//
        }
    }
    else                                                              //condição2.//
    {
    //OUTPUT_______________________________________________________________________________________________ 
        printf("Erro");
        printf("\nApenas números inteiros positivos são permitidos.");                  //INFO.//
    }
    return 0;
}

