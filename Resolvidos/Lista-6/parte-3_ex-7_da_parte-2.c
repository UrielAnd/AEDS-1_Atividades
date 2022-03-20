/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int mdc(int num1,int num2,int* pt)
{
    int resto;
    
    while(num2!=0)
    {
        resto=num1%num2;
        num1=num2;
        num2=resto;
    }
    
    (*pt)=num1;
}
int main()
{
    int num1, num2;
    int pt;
    printf("Digite os dois n° que deseja saber o MDC: ");
    
    printf("\nDigite o primeiro n°: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo n°: ");
    scanf("%d", &num2);
    
    mdc(num1,num2,&pt);
    
    printf("O MDC desses 2 números é o %d.", pt);
    
    return 0;
}
