/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT____________________________________________________________________________    
    printf("Uma empresa decidiu dar uma gratificação de Natal a seus funcionários,");
    float horas;
    printf("\nDigite o número de horas extras ");
    scanf("%f", &horas);
    
    float faltas;
    printf("\nDigite o número o número de horas que o funcionario faltou no trabalho  ");
    scanf("%f", &faltas);
//PROCESSAMENTO______________________________________________________________________    
    float h;
    h=horas-(2/3*(faltas));
    if(h>=2400)
    {
        //OUTPUT________________________________________________________________________
        printf("\ngratificação de 500 reais.");
    }
    else if((h>=1800)&&(h<2400))
    {
        //OUTPUT________________________________________________________________________
        printf("\ngratificação de 400 reais.");
    }
    else if((h>=1200)&&(h<1800))
    {
        //OUTPUT________________________________________________________________________
        printf("\ngratificação de 300 reais.");
    }
    else if((h>=600)&&(h<1200))
    {
        //OUTPUT________________________________________________________________________
        printf("\ngratificação de 200 reais.");
    }
    else if(h<600)
    {
        //OUTPUT________________________________________________________________________
        printf("\ngratificação de 100 reais.");
    }
    else
    {
        //OUTPUT________________________________________________________________________
        printf("\nERRO");
    }
    

    return 0;
}

