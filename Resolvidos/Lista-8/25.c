/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECA//

int main()
{
    int vtar[15];                                            //Declaração da Array.//
    int maior;                                           
    printf("Digite 15 n(s)° inteiros.\n");                          //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<15;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT_________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtar[repet]);
    }
    maior=vtar[0];
    for(int repet=1;repet<15;repet++)          //Ciclo de repetição para achar o maior n° da array.//
    {
        if(vtar[repet]>=maior)
        {
            maior=vtar[repet];
        }
    }
    for(int repet=1;repet<15;repet++)    //Ciclo de repetição para achar multiplicar os n°(s) da array pelo maior.//
    {
        vtar[repet]*=maior;
    //OUTPUT_____________________________________________________________________________________________    
        printf("%d ", vtar[repet]);             //RESPOSTA.//
    }
    return 0;
}


