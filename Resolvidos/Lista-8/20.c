/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECA//

int main()
{
    int vtar[10];                                                //Declaração da Array.//
    printf("Digite 10 n(s)° inteiros para o vetor.\n");                 //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT_________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtar[repet]);
    }
    printf("Os n°(s) positivos são:\n");  //INFO.//
    for(int repet=0;repet<10;repet++)
    {
        if(vtar[repet]>0)
        {
        //OUTPUT_________________________________________________________________________________________        
            printf("%d ", vtar[repet]);                 //RESPOSTA.//
        }
    }
    printf("\nOBS: Caso não apareça nenhuma n° é porque não exite n°(s) positivos nesse vetor.");             //INFO.//

    return 0;
}



