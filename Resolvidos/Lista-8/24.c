/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECA//

int main()
{
    int vtar [15];                                                  //Declaração da Array.//
    int cont=0, aux=0;                                      //Declaração das variáveis auxiliares.//
    printf("Digite 15 n°(s) inteiros para o vetor.\n");                   //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________
    for(int repet=0;repet<15;repet++)                //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT_________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtar[repet]);
    }
    for(int repet=0;repet<15;repet++)           //Ciclo de repetição para ver o tamanho necessario do vetor resultante.//        
    {
        if(vtar[repet]==2)
        {
            cont++;
        }
        else if(vtar[repet]==3)
        {
            cont++;
        }
        else if((vtar[repet]%2!=0)&&(vtar[repet]%3!=0)&&(vtar[repet]!=1))
        {
            cont++;
        }
    }
    int vtar_resultante[cont];                          //Declaração da array resultado com a variável auxiliar.//
    for(int repet=0;repet<15;repet++)                   //Ciclo de repetição para todos os n°(s) primos da array.//     
    {
        if(vtar[repet]==2)
        {
            vtar_resultante[aux]=vtar[repet];
            aux++;
        }
        else if(vtar[repet]==3)
        {
            vtar_resultante[aux]=vtar[repet];
            aux++;
        }
        else if((vtar[repet]%2!=0)&&(vtar[repet]%3!=0)&&(vtar[repet]!=1))
        {
            vtar_resultante[aux]=vtar[repet];
            aux++;
        }
    }
    printf("Esse são todos os n°(s) do vetor que são primos:\n");       //INFO.//
    for(int repet=0;repet<cont;repet++)              //Ciclo de repetição para imprimir as respostas da array.//  
    {
    //OUTPUT_________________________________________________________________________________________
        printf("%d ", vtar_resultante[repet]);                  //RESPOSTA.//
    }
    printf("\nOBS: Caso não apareça nenhum n° significa que essa array não tem n°(s) primos.");                 //INFO.//

    return 0;
}


