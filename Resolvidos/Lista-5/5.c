/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void positivo_negativo(int valor)
{
    if(valor>0)
    {
        printf("Esse valor é positivo.");
    }
    else if(valor<0)
    {
        printf("Esse valor é negativo.");
    }
    else
    {
        printf("Esse valor é nulo.");
    }
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    positivo_negativo(valor);
    
    return 0;
}

