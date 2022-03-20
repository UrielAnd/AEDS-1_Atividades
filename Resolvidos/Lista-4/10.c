/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#Pergunta:
Faça um algoritmo que imprima a tabuada do 8 utilizando uma estrutura de repetição.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <stdio.h>

int main()
{
    int tabuada;
//PROCESSAMENTO_____________________________________________________________________________________    
    for(int repet=1;repet<=10;repet++)                  //Ciclo./Variável de repetição./Incremento.//
    {
        tabuada=8*repet;                               //Calculo da tabuáda do 8.//
    //OUTPUT_____________________________________________________________________________________ 
        printf("\n8*%d=%d", repet, tabuada);            //Impressão da tabuáda do 8.//
    }

    return 0;
}

