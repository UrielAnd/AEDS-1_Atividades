/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_______________________________________________________________________________________    
    printf("O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos...");
    printf("\nDigite o preço de custo de um carro de fabrica ");
    float p;
    scanf("%f", &p);
//PROCESSAMENTO_______________________________________________________________________________    
    if((p<12000)&&(p>0))
    {
        float r;
        float re;
        r=p*0.05;
        re=r+p;
        //OUTPUT________________________________________________________________________
        printf("O preço desse carro com os devidos impostos incluidos é de %.2f", re);
    }
    else if((p>=12000)&&(p<25000))
    {
        float r;
        float re;
        float j;
        r=p*0.1;
        j=p*0.15;
        re=r+p+j;
        //OUTPUT________________________________________________________________________
        printf("O preço desse carro com os devidos impostos incluidos é de %.2f", re);
    }
    else if(p>=25000)
    {
        float r;
        float re;
        float j;
        r=p*0.15;
        j=p*0.2;
        re=r+j+p;
        //OUTPUT________________________________________________________________________
        printf("O preço desse carro com os devidos impostos incluidos é de %.2f", re);
    }
    else
    {   
        //OUTPUT________________________________________________________________________
        printf("valor invalido");
    }
    
    
    
    
    
    
    return 0;
}


