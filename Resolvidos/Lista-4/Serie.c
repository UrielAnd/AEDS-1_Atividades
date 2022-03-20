/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float resultado;
    float resp;
    float fatorial=1;
    float conta=1;
    float repet=99;
    while(repet>=80)
    {
        resp=fatorial*conta;
        resultado+=repet/resp;
        conta=resp;
        fatorial++;
        repet--;
    }
    printf("\nA soma dos 20 primeiros da série é %f", resultado);

    return 0;
}

