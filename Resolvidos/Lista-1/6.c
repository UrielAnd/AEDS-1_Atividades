/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5 porcento sobre o salário base e paga imposto de 7 porcento também sobre o salário base.\n");
    
    printf("Digite o salário base do funcionário ");
    
    int b;
    
    scanf("%d", &b);
    
    double sa;
    
    sa = b * 0.05;
    
    double si;
    
    si = b * 0.07;
    
    double sc;
    
    sc = sa - si;
    
    double sd;
    
    sd = b + sc;
    
    printf("O salário que esse funcionário vai é de %.2f.", sd);
    

    return 0;
}

