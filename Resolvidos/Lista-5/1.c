/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
void soma_inteiros(int num)
{   
    int soma;
    for(int repet=2;repet<=num;repet++)
    {
        soma+=repet;
    }
    printf("A soma dos inteiros existentes entre esses n° é:%d", soma);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int num;

    printf("Digite um n° inteiro positivo para descobrir a soma dos números inteiros existentes entre o n°1 e o n° escolhido: ");
    scanf("%d", &num);

    soma_inteiros(num);

    return 0;
}


