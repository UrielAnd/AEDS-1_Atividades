/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Vcarro, conta;
    
    printf("Digite o valor do carro: ");
    scanf("%f", &Vcarro);
    
    conta=(Vcarro-((Vcarro/100)*20));
    
    printf("À VISTA-->%.2f\n", conta);
    
    
    conta=(((Vcarro/100)*6));
    
    printf("6-->%.2f", conta);
    
    conta=(((Vcarro/100)*12));
    
    printf("\n12-->%.2f", conta);
    
    conta=(((Vcarro/100)*18));
    
    printf("\n18-->%.2f", conta);
    
    conta=(((Vcarro/100)*24));
    
    printf("\n24-->%.2f", conta);
    
    conta=(((Vcarro/100)*30));
    
    printf("\n30-->%.2f", conta);
    
    conta=(((Vcarro/100)*36));
    
    printf("\n36-->%.2f", conta);
    
    conta=(((Vcarro/100)*42));
    
    printf("\n42-->%.2f", conta);
    
    conta=(((Vcarro/100)*48));
    
    printf("\n48-->%.2f", conta);
    
    conta=(((Vcarro/100)*54));
    
    printf("\n54-->%.2f", conta);
    
    conta=(((Vcarro/100)*60));
    
    printf("\n60-->%.2f", conta);
    
    return 0;
}
