/******************************************************************************
Pergunta:
Faça um programa que receba um número, calcule e mostre a tabuada desse número.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_________________________________________________________________________________________________________    
    printf("Digite o número que você deseja saber a tabuada: ");
    int numero;                            //Variável inteira numero criada para o número que vai ser digitado//
    scanf("%d", &numero);                          //scanf capturando oque o usuario colocar na tela//
    
    int vezes;                      //Variável criada com o intuito de criar o loop de repetições//
    vezes=0;                //Atribuição para a variavel vezes//
//PROCESSAMENTO_________________________________________________________________________________________________    
    while(vezes<=10)                 //repetições//
    {
        int resposta;                      //variavel resposta//
        resposta=numero*vezes;                                  //calculo da tabuada usando variavel vezes//
        //OUTPUT________________________________________________________________________________________________
        printf("\nEsse número multiplicado por %d é %d.", vezes, resposta);
        vezes++;                               //incremento na variavel vezes para satisfazer o loop//
    }
    return 0;
}
