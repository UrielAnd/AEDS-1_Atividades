/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//IMPUT_____________________________________________________________________    
    
    printf("Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento\n");
    
    printf("Digite o valor do deposito ");
    
    int d;
    scanf("%d", &d);
    
    printf("Digite o valor da taxa de juros ");
    
    int j;
    scanf("%d", &j);
    
//PROCESSAMENTO____________________________________________________________    
    
    double p;
    
    p = j /100.;
    
    double re;
    
    re = p * d;
    
    double t;
    
    t = re + d;

//OUTPUT___________________________________________________________________

    printf("O valor do rendimento será de %.2f reais.\n", re);
    printf("O valor total depois do rendimento será de %2.f reais.", t);

    return 0;
}
