/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int resultado=0;
    int conta;
    int aderir;
    int ciclo;
    int repet=1;
    int a, b;
    printf("Quantos pares de números você quer inserir: ");
    scanf("%d", &ciclo);
    while(repet<=ciclo)
    {
        printf("\nQual o número A: ");
        scanf("%d", &a);
        printf("\nQual o número B: ");
        scanf("%d", &b);
        aderir=a+1;
        if((a!=0)&&(b!=0))
        {
            while(aderir<b)
            {
                if(aderir%2==0)
                {
                    conta=pow(aderir,3);
                    resultado+=conta;
                }
                aderir++;
                
            }
            printf("\nO resultado dos números pares em meio aos intervalos %d e %d é %d.", a, b, resultado);
            resultado-=resultado;
        }
        else if((a==0)||(b==0))
        {
            printf("\nERRO");
        }
        repet++;
        
    }
    

    return 0;
}

