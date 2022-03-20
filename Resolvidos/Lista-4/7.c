/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#PERGUNTA:
Faça um algoritmo para ler um número inteiro e escrevê-lo na tela 10 
vezes utilizando uma repetição.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <stdio.h>

int main()
{
    int num;                                    //Variável ao criterio do usuario.//
//IMPUT__________________________________________________________________________________________        
    printf("Digite um número inteiro: ");
    scanf("%d", &num);                         //Escanea e aramazena um número que o usuario quiser inserir.//
//PROCESSAMENTO__________________________________________________________________________________________        
    for(int repet=0;repet<=10;repet++)
    {
    //OUTPUT_________________________________________________________________________________________    
        printf("%d\n", num);                             //Resposta.//
    }

    return 0;
}

