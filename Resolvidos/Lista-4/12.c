/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int repet=1;
    int negativo;
    printf("Digite 10 números");
    while(repet<=10)
    {
        int num;
        printf("\nnúmero %d:", repet);
        scanf("%d", &num);
        if(num<0)
        {
            negativo++;
        }
        repet++;
    }
    printf("\nDesses 10 números %d é negativo", negativo);
    

    return 0;
}
