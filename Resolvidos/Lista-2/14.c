/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT______________________________________________________________________________    
    printf("Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o novo salário.");
    printf("\nDigite o salario do funcionário ");
    float f;
    scanf("%f", &f);
//PROCESSAMENTO______________________________________________________________________    
    if((f<=300)&&(f>0))
    {
        float r;
        float re;
        r=f*0.5;
        re=f+r;
        //OUTPUT________________________________________________________________________
        printf("O novo salario é de %.2f", re);
    }
    else if((f>300)&&(f<=500))
    {
        float r;
        float re;
        r=f*0.4;
        re=f+r;
        //OUTPUT________________________________________________________________________
        printf("O novo salario é de %.2f", re);
    }
    else if((f>500)&&(f<=700))
    {
        float r;
        float re;
        r=f*0.3;
        re=f+r;
        //OUTPUT________________________________________________________________________
        printf("O novo salario é de %.2f", re);
    }
    else if((f>700)&&(f<=800))
    {
        float r;
        float re;
        r=f*0.2;
        re=f+r;
        //OUTPUT________________________________________________________________________
        printf("O novo salario é de %.2f", re);
    }
    else if((f>800)&&(f<=1000))
    {
        float r;
        float re;
        r=f*0.1;
        re=f+r;
        //OUTPUT________________________________________________________________________
        printf("O novo salario é de %.2f", re);
    }
    else if(f>1000)
    {
        float r;
        float re;
        r=f*0.05;
        re=f+r;
        //OUTPUT________________________________________________________________________
        printf("O novo salario é de %.2f", re);
    }
    else
    {
        //OUTPUT________________________________________________________________________
        printf("ERRO");
    }
    


    return 0;
}

