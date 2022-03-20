/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float divisao;
    int repet=0;
    int condicao;
    do
    {
        printf("Digite 2 valores inteiros: ");
        scanf("%f %f", &n1, &n2);
        if(n2!=0)
        {
            divisao=n1/n2;
        }
        else if(n2==0)
        {
            while(repet<1)
            {
                printf("\nvalor invalido");
                printf("\nDigite 2 novos valores: ");
                scanf("%f %f", &n1, &n2);
                repet++;
                if(n2!=0)
                {
                    divisao=n1/n2;
                }    
                else if(n2==0)
                {
                    repet--;
                }
            }
        }
        printf("\n%.2f/%.2ff=%.2f", n1, n2, divisao);
        printf("\nVOCE DESEJA OUTRO CÁLCULO 1(PARA SIM)/2(PARA NÃO): ");
        scanf("%d", &condicao);
    }while(condicao==1);
    
    return 0;
}



