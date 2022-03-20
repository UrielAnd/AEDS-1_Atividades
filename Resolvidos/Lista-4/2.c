/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#Pergunta:
    Faça um algoritmo para imprimir os números de 1 a 10 utilizando uma 
estrutura FAÇA/ENQUANTO e um contador.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <stdio.h>

int main()
{
//PROCESSAMENTO_______________________________________________________________________________    
    int repet=1;                                  //N° de repetição/N° que vai ser impresso.//
    do                                           //Fassa-Enquanto.//
    {
    //OUTPUT_____________________________________________________________________________________        
        printf("%d\n", repet);                 //empressão do n° da variável repet.//
        repet++;                              //Incremento de repet.//
    }while(repet<=10);                       //Fassa-Enquanto.//

    return 0;
}



