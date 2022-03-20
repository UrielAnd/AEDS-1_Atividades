/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT__________________________________________________________________________    
    printf("Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir. Para idade inferior a 5, deverá mostrar mensagem.");
    printf("\nQual a sua idade ");
    int a;
    scanf("%d",&a);
//PROCESSAMENTO__________________________________________________________________    
    if((a>=5)&&(a<=7))
    {
        //OUTPUT_________________________________________________________________
        printf("\nA sua categoria é infantil");
    }
    else if((a>=8)&&(a<=10))
    {
        //OUTPUT_________________________________________________________________
        printf("\nA sua categoria é juvenil");
    }
    else if((a>=11)&&(a<=15))
    {
        //OUTPUT_________________________________________________________________
        printf("\nA sua categoria é adolecente");
    }
    else if((a>=16)&&(a<=30))
    {
        //OUTPUT_________________________________________________________________
        printf("\nA sua categoria é adulto");
    }
    else if((a>30)&&(a<60))
    {
        //OUTPUT_________________________________________________________________
        printf("\nA sua categoria é senior");
    }
    else if(a>=60)
    {
        //OUTPUT_________________________________________________________________
        printf("\nVocê não podera participar desse esporte");
    }
    else if((a<5)&&(a>0))
    {
        //OUTPUT_________________________________________________________________
        printf("\nVocê não podera participar desse esporte");
    }
    else
    {
        //OUTPUT_________________________________________________________________
        printf("ERRO");
    }
    return 0;
}


