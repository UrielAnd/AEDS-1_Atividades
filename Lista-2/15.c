/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_______________________________________________________________________
    printf("Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir.");
    printf("\nDigite 1 para o tipo de invetimento Poupança.");
    printf("\nDigite 2 para o tipo de investimento Fundos de renda fixa");
    printf("\nDigite o tipo de investimento ");
    int a;
    scanf("%d", &a);
    
    printf("\nDigite agora o valor que deseja investir ");
    float b;
    scanf("%f", &b);
//PROCESSAMENTO_______________________________________________________________
    if(a==1)
    {
        float r;
        float re;
        r=b*0.03;
        re=b+r;
        //OUTPUT__________________________________________________________________
        printf("\nApós um mês esse valor será de %.2f ", re);
    }
    else if(a==2)
    {
        float r;
        float re;
        r=b*0.04;
        re=b+r;
        //OUTPUT__________________________________________________________________
        printf("\nApós um mês esse valor será de %.2f ", re);
    }
    else 
    {
        //OUTPUT__________________________________________________________________
        printf("ERRO");
    }

    return 0;
}
