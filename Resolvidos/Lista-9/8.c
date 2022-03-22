/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS.//
#include <string.h>  //BIBLIOTECAS.//
int descobre_letra(char frase[256],int tam,char carac[1])           //Declaração da função que descobre se a letra escolhida se encontra na fase e quantas vezes ela se enconta.//
{
    int cont=0;
    for(int repet=0;repet<tam;repet++)          //Ciclo para ver quantos vezes o caracter digitado aparece na frase.//
    {
        if(frase[repet]==carac[0])                             //Teste condicional.//
        {
            cont++;
        }
    }
    return cont;                //Retornando valor para a função principal.//
}
int main()                              //Função principal.//
{
    char frase[256], carac[1];          //Declaração das strings.//
    int tam, cont=0;             //Declaração das variáveis auxiliares.//
    printf("Digite uma frase para o oprograma.\n");                  //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("Digite: ");                 
    fgets(frase,sizeof(frase),stdin);
    
    printf("\nDigite agora o caracter que deseja ver quantas vezes ele aparece na frase digitada.");                            //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("\nDigite o caracter: ");
    scanf("%c", carac);
   
    tam=strlen(frase);
    
    cont=descobre_letra(frase,tam,carac);           //Chamada de Função.//
    
    if(cont>0)                                                      //Teste condicional.//
    {
    //OUTPUT_______________________________________________________________________________________________________________
        printf("\nEsse caracter é encontrado na frase ,%d vezes.\n", cont);                 //RESPOSTA.//
    }
    else
    {
    //OUTPUT_______________________________________________________________________________________________________________
        printf("Esse caracter não é encontrado na frase.");                              //RESPOSTA.//
    }
    
    
    return 0;
}


