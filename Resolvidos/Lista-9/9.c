/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>      //BIBLIOTECAS//
#include <string.h>    //BIBLIOTECAS//
int descobre_primeira_posicao_carac(char frase[256],int tam,char carac[1])              //Declaração da função para verificar a primeira posição do caracter digitado na frase.//
{
//PROCESSAMENTO_____________________________________________________________________________________________________    
    int cont=-1;
    for(int repet=0;repet<tam;repet++)
    {
        if(frase[repet]==carac[0])                                                  //Teste condicional.//
        {
            cont=repet;
            break;
        }
    }
    return cont;                //Retorno de valor para a função principal.//
}
int main()                  //Função principal.//
{
    char frase[256], carac[1];          //Declaração das strings.//
    int tam, cont=0;             //Declaração das variáveis auxiliares.//
    printf("Digite uma frase para o oprograma.\n");                  //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("Digite: ");                 
    fgets(frase,sizeof(frase),stdin);
    
    printf("\nDigite agora o caracter que deseja achar sua primeira posição na frase digitada.");                            //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("\nDigite o caracter: ");
    scanf("%c", carac);
   
    tam=strlen(frase);
    
    cont=descobre_primeira_posicao_carac(frase,tam,carac);              //Chamada de função.//
    
    if(cont>=0)                                                  //Teste condicional.//
    {
    //OUTPUT_______________________________________________________________________________________________________________    
        printf("Esse caracter é digitado pela primeira vez na posição %d da frase.", cont);             //RESPOSTA.//
    }
    else
    {
    //OUTPUT_______________________________________________________________________________________________________________    
        printf("Esse caracter não aparece em nenhuma posição desse frase.");            //RESPOSTA.//
    }
    
    return 0;
}
