/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int soma_num(int valor1,int valor2,int* pt)
{
    int soma;
    
    soma=valor1+valor2;
    
    (*pt)=soma;
}
int multi_num(int valor1,int valor2,int* pt1)
{
    int produto;
    
    produto=valor1*valor2;

    (*pt1)=produto;
}
int main()
{
    int valor1, valor2;
    int pt, pt1;
    
    printf("Digite dois n° inteiros: ");
    printf("\nDigite o primeiro: ");
    scanf("%d", &valor1);
    printf("\nDigite o segundo: ");
    scanf("%d", &valor2);
    
    soma_num(valor1,valor2,&pt);
    multi_num(valor1,valor2,&pt1);
    printf("\nA soma dos valores informados é %d.", pt);
    printf("\nO produto desses valores é %d.", pt1);
    
    return 0;
}

