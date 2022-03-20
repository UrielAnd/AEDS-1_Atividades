/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//IMPUT_________________________________________________________    
    
    printf("Faça um programa que receba quatro números inteiros, calcule e retorne a soma destes números.\n");
    
    printf("Digite 4 números ");
    
    int a;
    
    int b;
    
    int c;
    
    int d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
//PROCESSAMENTO__________________________________________________    
    
    int soma;
    
    soma = a + b + c + d;
    
//OUTPUT_________________________________________________________    
    
    printf("A soma desses números é %d.", soma);
    

    return 0;
}


