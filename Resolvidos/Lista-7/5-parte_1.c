/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int soma_seguencia(int valor)
{
    if(valor==1)
    {
        return 1;
    }
    else
    {
        return valor+soma_seguencia(valor-1);
    }
}

int main()
{
    int valor, resp;

    printf("Digite o n° que deseja saber a soma de 1 ao n° escolhido: ");
    scanf("%d", &valor);

    resp=soma_seguencia(valor);

    printf("A soma de 1 até o n° escolhido é %d ", resp);

    return 0;
}
