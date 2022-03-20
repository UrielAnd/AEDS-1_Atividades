/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//IMPUT_________________________________________________________    
    printf("Determinar a soma e a média de 3 números entrados pelo teclado.\n");
    printf("Digite 3 números ");
    
    
    int a;
    int b;
    int c;
    
    
    scanf("%d %d %d", &a, &b, &c);
    
//PROCESSAMENTO_________________________________________________    
    
    int soma;
    
    soma = a + b + c;
    
    double media;
    
    media = (a + b + c)/3.0;
    
//OUTPUT_________________________________________________________    
    
    printf("A soma desses números é %d. \n", soma);
    printf("E a media desses números é %.2f.", media);

    return 0;
}



