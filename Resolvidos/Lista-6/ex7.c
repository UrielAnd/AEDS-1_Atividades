/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int mdc(int num1,int num2)
{
    int resto;
    
    while(num2!=0)
    {
        resto=num1%num2;
        num1=num2;
        num2=resto;
    }
    
    return num1;
}
int main()
{
    int num1, num2;
    int resp;
    printf("Digite os dois n° que deseja saber o MDC: ");
    
    printf("\nDigite o primeiro n°: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo n°: ");
    scanf("%d", &num2);
    
    resp=mdc(num1,num2);
    
    printf("O MDC desses 2 números é o %d.", resp);
    
    return 0;
}




