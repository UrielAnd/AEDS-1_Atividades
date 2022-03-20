/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//IMPUT_______________________________________________________________________    
    
    printf("Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O aumento deve ser de 10 porcento. O programa recebe um número real e retorna a o valor reajustado.\n");

    printf("Digite o valor do salario ");  
    
    
    int s;
    
    
    scanf("%d", &s);
    
//PROCESSAMENTO_____________________________________________________________    
    
    double v;
    double r;
    
    v = s * 0.1;
    
    
    r = v + s;
    
//OUTPUT___________________________________________________________________    
    
    printf("O rajuste desse salario com o aumento de 10 porcento passou a ser %.1f.", r);

    return 0;
}




