/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_______________________________________________________    
    printf("Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: área = π * R^2.\n");
    
    printf("Digite o raio do circulo ");
    
    int r;
    
    scanf("%f", &r);
    
//PROCESSAMENTO________________________________________________    

    double p;
    
    p = r * r;
    
    double a;
    
    a = p * 3.14;
    
//OUTPUT_______________________________________________________    
    
    printf("A área desse circulo é de %.2f.", a);
    
    
    
    


    return 0;
}

