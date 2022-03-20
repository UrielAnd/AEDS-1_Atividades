/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int resp;
    int fatorial;
    int numero;
    int vezes;
    printf("\nDigite quantos números você deseja saber o fatorial: ");
    scanf("%d", &vezes);
for(int repet=1;repet<=vezes;repet++)
{
    printf("\nDigite o número que deseja saber o fatorial: ");
    scanf("%d", &numero);
    resp=numero;
    for(fatorial=1;numero>1;numero=numero-1)
    {
       fatorial*=numero;
    }
    printf("\nO fatorial do número %d é %d.", resp, fatorial);
    
    
}
  
    
    return 0;
}


