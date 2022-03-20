/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void fatorial_numero(int num)
{
    int fatorial;
    int aux;
    aux=num;
    for(int repet=num-1;repet>=1;repet--)
    {
        fatorial=repet*aux;
        aux=fatorial;
    }
printf("O fatorial desse n° é: %d", aux);
}
int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;
    printf("Digite o n° que deseja saber o fatorial: ");
    scanf("%d", &num);

    fatorial_numero(num);

    return 0;
}