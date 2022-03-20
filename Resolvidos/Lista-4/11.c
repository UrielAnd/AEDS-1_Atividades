/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número de 10 a 1 que deseja saber a tabuada: ");
    scanf("%d", &num);
    if((num>=1)&&(num<=10))
    {
        for(int repet=1;repet<=10;repet++)
        {
            int tabuada;
            tabuada=num*repet;
            printf("\n%d*%d=%d", num, repet, tabuada);
        }
    }
    else
    {
        printf("ERRO");
    }
    return 0;
}
