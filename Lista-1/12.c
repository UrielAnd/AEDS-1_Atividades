/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//IMPUT__________________________________________________________
    
    printf("Faça um programa que receba um número real e encontre e mostre a parte inteira deste número.\n");
    printf("Digite aqui um número real: ");
    
    int i;
    float r;
    
    scanf("%f", &r);
    
//PROCESSAMENTO__________________________________________________    
    
    i = r ;
    
//OUTPUT_________________________________________________________
    printf("A parte inteira desse número é %d", i);
    
    
    
    return 0;
}



