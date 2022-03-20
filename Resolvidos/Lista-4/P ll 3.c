/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float div=225;
    float num=1;
    float conta;
    float resp;
    int decrecimo=29;
    while(div>0)
    {
        conta=num/div;
        div-=decrecimo;
        decrecimo-=2;
        num*=2;
        resp+=conta;
        printf("\n%.2f", conta);
    }
    printf("\n%.2f", resp);

    return 0;
}

