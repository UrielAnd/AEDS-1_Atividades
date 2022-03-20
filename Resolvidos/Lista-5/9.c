/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void soma_divisores(int num)
{
    int repet;
    int soma=0;
    for(repet=num;repet>=1;repet--)
    {
        if(num%repet==0)
        {
            soma+=repet;
        }
        else
        {

        }
    }
    printf("A soma dos divisores de %d é: %d", num, soma);
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    soma_divisores(num);

    return 0;
}
