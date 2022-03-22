/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>      //BIBLIOTECAS//
#include <string.h>     //BIBLIOTECAS//
void criptografa_frase(char frase[256], int tam)            //Declaração da sub-rotina para criptografar a frase.//
{
    int cont=0, valor=0;                //Declaração das variáveis auxiliares da sub-rotina.//        
    char frase_criptografada [256], help[256];                      //Declaração das strings auxiliares.//
    
//PROCESSAMENTO____________________________________________________________________________________________    
    for(int repet=0;repet<tam;repet++)          //Ciclo para fazer a criptografia da frase.//
    {
       for(int aux=cont;aux<tam;aux++)          //Ciclo para fazer a criptografia da frase.//
       {
            if((frase[aux]=='A')||(frase[aux]=='a')||(frase[aux]=='E')||(frase[aux]=='e')||(frase[aux]=='I')||(frase[aux]=='i')||(frase[aux]=='O')||(frase[aux]=='o')||(frase[aux]=='U')||(frase[aux]=='u'))
            {
                help[valor]=frase[aux];
                valor++;
            }
            else
            {
                frase_criptografada[repet]=frase[aux];
                if(cont==aux)
                {
                    cont++;
                }
                else
                {
                    cont=aux+1;
                }
                break;
            }
       }
    }
    tam=strlen(frase_criptografada);
    
    printf("\nEssa é sua frase criptografada.\n\n");            //INFO.//
    for(int repet=0;repet<tam-1;repet++)                //Ciclo para imprimir o resultado.//
    {
    //OUTPUT________________________________________________________________________________    
        printf("%c", frase_criptografada[repet]);           //RESPOSTA.//
    }
    
    printf("\n\nEssa é sua frase descriptografada.\n\n");           //INFO.//
//OUTPUT________________________________________________________________________________    
    printf("%s", frase);                               //RESPOSTA.//
}
int main()              //Função principal.//
{
    char frase[256];                   //Declaração da string.//
    int tam;                        //Declaração da variável auxiliar.//
    printf("Digite uma frase para o programa criptografar.\n");                  //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("Digite: ");                 
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    criptografa_frase(frase,tam);           //Chamada da sub-rotina.//
    
    return 0;
}


