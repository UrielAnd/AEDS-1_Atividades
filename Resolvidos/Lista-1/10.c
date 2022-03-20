/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT__________________________________________________
    printf("Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050.\n");
    
    printf("Digite qual ano você nasceu ");
    
    int n;
    
    scanf("%d", &n);
    
    printf("Digite em qual ano você esta ");
    
    int ano;
    
    scanf("%d", &ano);
//PROCESSAMENTO__________________________________________

    int i;
    
    i = ano - n;
    
    int f;
    
    f = 2050 - ano;
    
    
    int r;
    
    r = i + f;
//OUTPUT_________________________________________________
    
    printf("Sua idade atualmente é de %d anos.\n", i);
    
    printf("Em 2050 você terá %d anos.", r);


    return 0;
}


