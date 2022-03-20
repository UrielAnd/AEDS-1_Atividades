/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_________________________________________________________________________    
    printf("Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontrana tabela a seguir:\n");
    printf("Digite a sua primeira nota ");  
    float n1;
    
    scanf("%f", &n1);
    
    printf("Digite a sua segunda nota ");
    float n2;
    
    scanf("%f", &n2);
    
//PROCESSAMENTO_________________________________________________________________
    float media;
    
    media = (n1 + n2)/2.0;
//OUTPUT________________________________________________________________________
    printf("A media aritmética dessas notas é %.2f", media);
//PROCESSAMENTO_________________________________________________________________    
    if ((media>=0)&&(media<3.0))
    {
        //OUTPUT________________________________________________________________________
        printf("\nReprovado");
    }

    else if(( media>=3)&&(media<7))
    {
        //OUTPUT________________________________________________________________________
        printf("\nExame");
    }
    
    else
    {
        //OUTPUT________________________________________________________________________
        printf("\nAprovado");
    }


    return 0;
}



