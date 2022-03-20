/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_______________________________________________________________________
    printf("Uma empresa decide dar um aumento de 30 porcento aos funcionários com salários inferiores a R$ 500,00...");
    printf("\nDigite o salário de um funcionário ");
    float s;
    scanf("%f", &s);
//PROCESSAMENTO________________________________________________________________
    float r;
    float re;
    r=s*0.3;
    re=r+s;
    if((s<500)&&(s>0))
    {   
        //OUTPUT________________________________________________________________________
        printf("O salário reajustado é de %.2f.", re);
    }
    else 
    {   
        //OUTPUT________________________________________________________________________
        printf("Você não tem direito a esse aumento");
    }
    return 0;
}

