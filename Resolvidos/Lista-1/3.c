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
    
//IMPUT____________________________________________________________________  
    
    printf("Faça um programa retornar a raiz quadrada de um número.\n");
    
    printf("Digite um número inteiro qualquer ");
    
    int a;
    
    scanf("%d", &a);
    
//PROCESSAMENTO____________________________________________________________    
    
    int r;
    
    r = sqrt (a);
    
//OUTPUT___________________________________________________________________    
    
    printf("A raiz quadrada desse número é %d.", r);

    return 0;
}


