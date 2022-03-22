/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
int calcula_subsequencia (char frase[256],int tam)      //Declaração da função para contar subsequêcias de letras.//                
{
    char letra, letter;                                          //Declaração de char auxiliar.//
    int maior=0, cont=0;                                     //Declaração de variáveis auxiliares.//
    letra=frase[0];                                                     //Atribuição.//
    
//PROCESSAMENTO_____________________________________________________________________________________________________ 
    for(int repet=0;repet<tam;repet++)                      //Ciclo para verificar a maior subsequência.//
    {
        if(frase[repet]==letra)                                      //Teste condicional.//
        {
            maior++;
        }
        else
        {
            if(maior>cont)                                          //Teste condicional.//
            {
                cont=maior;                                         //ATRIBUIÇÕES.//
                letter=letra;                                      //ATRIBUIÇÕES.//
            }
            maior=1;                                             //ATRIBUIÇÕES.//
            letra=frase[repet];                                 //ATRIBUIÇÕES.//
        }
    }
//OUTPUT______________________________________________________________________________________________________________ 
    printf("A letra/num que ocorre na maior subsequência é a: %c.", letter);                    //RESPOSTA.//
    
    return cont;                                //Retorno para a função principal.//
    
}   
int main()                                          //função principal.//
{
    char frase[256];                            //Declaração da string.//
    int tam, resp;                      //Declaração das variáveis auxiliares.//
    
    printf("Digite uma frase para o programa contar a maior subseguencia de letras exitente.");                               //INFO.//
//IMPUT_______________________________________________________________________________________________________________ 
    printf("\nDigite: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);

    resp=calcula_subsequencia(frase,tam);                                           //Chamada da função.//
//OUTPUT______________________________________________________________________________________________________________ 
    printf("\nO tamanho dessa subsequência é de: %d.", resp);                           //RESPOSTA.//
    
    return 0;
}

