/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fatorial_num(int fatorial)
{
    if (fatorial==0)
    {
        return 1;
    }
    else
    {
        return fatorial*fatorial_num(fatorial-1);
    }
}

int main()
{
    int fatorial;
    int resp;
    printf("Digite o n° inteiro que deseja saber o fatorial: ");
    scanf("%d", &fatorial);

    resp=fatorial_num(fatorial);
    printf("O fatorial de %d = %d ", fatorial, resp);
    return 0;
}
