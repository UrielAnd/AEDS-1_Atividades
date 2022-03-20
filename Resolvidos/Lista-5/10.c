/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void soma_determinada(int num)
{
    float soma=0;

    for(int repet=1;repet<=num;repet++)
    {
        soma+=1.0/(float)repet;
    }
    printf("\nA soma dessa seguencia com %d casas é: %.2f", num, soma);
    
}
int main()     
{   
    setlocale(LC_ALL,"portuguese");
    int num;

    printf("s = 1 + 1/2 + 1/3...");
    printf("\nDigite a quantidade de parcelas que deseja saber referente à soma: ");
    scanf("%d", &num);

    soma_determinada(num);

    return 0;
}
