/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fibonacci(int n) 
{
    int x;

    if (n == 1) 
    {
        return(1);
    }

    if (n == 2) 
    {
        return(1);
    }

    x = fibonacci(n-1) + fibonacci(n-2);
    return(x);
}

int main() 
{
    int n,i;

    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &n);

    while(n <= 0) {
    printf("Numero incorreto. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
    }

    for (i = 1; i <= n; i++) 
    {
    printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return(0);
}