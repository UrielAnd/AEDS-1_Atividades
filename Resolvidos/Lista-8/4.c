/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vtar[15];                                            //Declaração da Array.//
    printf("Digite 15 n(s)° inteiros.\n");                          //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<15;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT_________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtar[repet]);
    }
//OUTPUT_________________________________________________________________________________________    
    printf("\nOs elementos de iguais a 30 se encontram nas posições: \n");
    for(int repet=0;repet<15;repet++)    //Ciclo de repetição para verificar os n°s da array que é igual a 30 e mostrar suas posiçôes.//
    {
        if(vtar[repet]==30)
        {
        //OUTPUT_________________________________________________________________________________________
            printf("%d ", repet);
        }
    }
    printf("\nOBS: Caso não apareça nenhuma posição significa que esse número não se encontra em nenhuma posição");                 //INFO.//

    return 0;
}





