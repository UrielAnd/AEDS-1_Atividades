/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int potencia(int valor,int elevado)
{
    if (elevado==0)
    {
        return 1;
    }
    else
    {
        return valor*potencia(valor,elevado-1);
    }
}

int main()
{
    int valor, elevado;
    int resp;

    printf("Digite o n° inteiro positivo que deseja elevar: ");
    scanf("%d", &valor);
    printf("Você quer elevar esse n° por qual n°: ");
    scanf("%d", &elevado);

    resp=potencia(valor,elevado);

    printf("%d elevado a %d = %d", valor, elevado, resp);

    return 0;
}


