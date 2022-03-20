/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//IMPUT______________________________________________________________________    
    
    printf("Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: área = base*altura/2.\n");
    
    int b;
    int a;
    
    printf("Descubra a area do triângulo em m².\n");
    
    printf("Digite a base e altura do triângulo em m² ");
    
    scanf("%d %d", &b, &a);
    
//PROCESSAMENTO______________________________________________________________    

    double a2;
    
    a2 = (b * a)/2.0;
    
//OUTPUT_____________________________________________________________________

    printf("A area desse é de %.1f m².", a2);
    
    return 0;
}

