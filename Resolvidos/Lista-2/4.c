/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT__________________________________________________________________________________    
    printf("Faça um programa que receba três números e mostre o maior.\n");

    printf("Digite o primeiro número ");
    float n1;
    scanf("%f", &n1);
    
    printf("Digite o segundo número ");
    float n2;
    scanf("%f", &n2);
    
    printf("Digite o terceiro número ");
    float n3;
    scanf("%f", &n3);
//PROCESSAMENTO__________________________________________________________________________    
    if((n1<n2)&&(n1<n3))
    {   
        //OUTPUT________________________________________________________________________
        printf("O menor número entres esses três é %.2f", n1);
    }
    
    else if((n2<n1)&&(n2<n3))
    {   
        //OUTPUT________________________________________________________________________
        printf("O menor número entres esses três é %.2f", n2);
    }
    else
    {   
        //OUTPUT________________________________________________________________________
        printf("O menor número entres esses três é %.2f", n3);
    }
    
    
    
    
    
    
    
    
    
    return 0;
}

