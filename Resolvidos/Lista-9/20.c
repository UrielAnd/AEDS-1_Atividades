/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
int criptografa_frase(char frase[256], int tam)                                         //Declaração da sub-rotina para critografar uma frase.//  
{
    printf("Frase criptografada:\n");                                                        //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________________________    
    for(int repet=0;repet<tam;repet++)                      //Ciclo para criptografar uma frase.//
    {
    //OUTPUT_______________________________________________________________________________________________________________     
        printf("%d ", frase[repet]);                                        //RESPOSTA.//
    }
}
int descriptografa_frase(char frase[256], int tam)                              //Declaração da sub-rotina para descritografar uma frase.//  
{
    int aux;
    printf("\nFrase descriptografada:\n");                                                  //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________________________    
    for(int repet=0;repet<tam;repet++)                      //Ciclo para descriptografar uma frase.//
    {
        aux=frase[repet];
    //OUTPUT_______________________________________________________________________________________________________________     
        printf("%c", aux);                                              //RESPOSTA.//
    }
}
int main()                                          //função principal.//
{
    char frase[256];                            //Declaração da string.//
    int tam, resp;                      //Declaração das variáveis auxiliares.//
    
    printf("Digite uma frase para o programa criptografar ela.");                               //INFO.//
//IMPUT_______________________________________________________________________________________________________________ 
    printf("\nDigite: ");
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    criptografa_frase(frase,tam);                                        //Chamada da sub-rotina.//            
    
    descriptografa_frase(frase,tam);                                    //Chamada da sub-rotina.//
    
    return 0;
}



