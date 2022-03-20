/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT___________________________________________________________________________________________________    
    printf("Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a se-guir, o novo preço e a classificação.");
    printf("\nDigite o preço do produto ");
    float p;
    scanf("%f", &p);
//PROCESSAMENTO____________________________________________________________________________________________    
    if((p<=50)&&(p>0))
    {
        float r;
        float re;
        r=p*0.05;
        re=p+r;
        //OUTPUT________________________________________________________________________
        printf("O novo preço desse produto é %.2f", re);
        if((re<=80)&&(re>0))
        {
            //OUTPUT________________________________________________________________________
            printf("\nBarato");
        }
        else if((re>80)&&(re<=120))
        {
            //OUTPUT________________________________________________________________________
            printf("\nNormal");
        }
        else if((re>120)&&(re<=200))
        {
            //OUTPUT________________________________________________________________________
            printf("\nCaro");
        }
        else if(re>200)
        {
            //OUTPUT________________________________________________________________________
            printf("\nMuito caro");
        }
        
    }
    else if((p>50)&&(p<100))
    {
        float r;
        float re;
        r=p*0.1;
        re=p+r;
        //OUTPUT________________________________________________________________________
        printf("O novo preço desse produto é %.2f", re);
        if((re>80)&&(re<=120))
        {
            //OUTPUT________________________________________________________________________
            printf("\nNormal");
        }
        else if((re<=80)&&(re>0))
        {
            //OUTPUT________________________________________________________________________
            printf("\nBarato");
        }
        else if((re>120)&&(re<=200))
        {
            //OUTPUT________________________________________________________________________
            printf("\nCaro");
        }
        else if(re>200)
        {
            //OUTPUT________________________________________________________________________
            printf("\nMuito caro");
        }
    }
    else if(p>=100)
    {
        float r;
        float re;
        r=p*0.15;
        re=p+r;
        //OUTPUT________________________________________________________________________
        printf("O novo preço desse produto é %.2f", re);
        if((re>120)&&(re<=200))
        {
            //OUTPUT________________________________________________________________________
            printf("\nCaro");
        }
        else if(re>200)
        {
            //OUTPUT________________________________________________________________________
            printf("\nMuito caro");
        }
        else if((re>80)&&(re<=120))
        {
            //OUTPUT________________________________________________________________________
            printf("\nNormal");
        }   
        else if((re<=80)&&(re>0))
        {
            //OUTPUT________________________________________________________________________
            printf("\nBarato");
        }
        
    }
    else
    {
        //OUTPUT________________________________________________________________________
        printf("ERRO");
    }
    
    
    
    
    
    
    
    
    

    return 0;
}



