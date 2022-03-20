/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
    int repet=0;
    int valor;
   while(repet==0)
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
        else
        {
            printf("Erro");
        }
   }

    return 0;
}
