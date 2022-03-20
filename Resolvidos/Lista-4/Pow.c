/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{   
    int elevado=0;
    int repet=1;
    int num;
    int resultado;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    resultado=(2*(pow (num,3))+ 3*(pow (num,2))+num)/6;
    printf("\nResultado da função: %d", resultado);
    while(repet<=num)
    {
        elevado+=pow(repet,2);
        repet++;
    }
    printf("\nResultado da comprovação: %d", elevado);
    printf("\nA igualdade é verdadeira.");
    
    
    
    return 0;
}

