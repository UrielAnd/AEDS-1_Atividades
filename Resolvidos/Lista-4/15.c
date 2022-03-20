/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int repet=0;
    int valor;
    do
    {
        printf("\nDigite um valor: ");
        scanf("%d", &valor);
        
        if(valor!=0)
        {
            printf("10");
        }
        else if(valor==0)
        {
            repet++;
        }
        if(valor<0)
        {
            printf("\nO %d é negativo", valor);
        }
        else if(valor>0)
        {
            printf("\nO %d é positivo", valor);
        }
        
    }while(repet==0);
    

    return 0;
}
