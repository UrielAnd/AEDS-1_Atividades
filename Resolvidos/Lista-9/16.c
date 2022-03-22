/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
int verifica_caracteres(char frase[256], int tam)           //Declaração da função que verifica os tipos de caracteres na frase e sua quantidade.//
{
    int cont=0, qnt=0, valor=0; 
//PROCESSAMENTO_____________________________________________________________________________________________________    
    for(int repet=0;repet<tam-1;repet++)            //Ciclo para verificar os tipos de caracteres que a frase tem.//
    {
        if(frase[repet]==' ')                               //Teste condicional.//
        {
            cont++;
        }
        else if((frase[repet]=='0')||(frase[repet]=='1')||(frase[repet]=='2')||(frase[repet]=='3')||(frase[repet]=='4')||(frase[repet]=='5')||(frase[repet]=='6')||(frase[repet]=='7')||(frase[repet]=='8')||(frase[repet]=='9'))
        {
            qnt++;
        }
        else
        {
            valor++;
        }
    }
//OUTPUT______________________________________________________________________________________________________________    
    printf("Esse frase tem %d espaços.", cont);                                  //RESPOSTA.//
    printf("\nEsse frase tem %d números.", qnt);                                 //RESPOSTA.//
    printf("\nEsse frase tem %d letras ou caracteres especiais.", valor);        //RESPOSTA.//
}
int main()                      //Função principal.//
{
    char frase[256];                   //Declaração da string.//
    int tam, cont=0, qnt=0, valor=0;             //Declaração das variáveis auxiliares.//
    printf("Digite uma frase para o programa.\n");                  //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("Digite: ");                 
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    verifica_caracteres(frase,tam);                             //Chamada da função.//
    
    return 0;
}


