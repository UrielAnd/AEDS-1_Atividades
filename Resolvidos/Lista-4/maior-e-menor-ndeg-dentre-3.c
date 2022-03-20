/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3;
    float maior, menor;
    printf("Digite 3 números");
    printf("\nnúmero 1: ");
    scanf("%f", &n1);
    
    printf("\nnúmero 2: ");
    scanf("%f", &n2);
    
    printf("\nnúmero 3: ");
    scanf("%f", &n3);
    
    maior=n1;
    if(maior<n2)
    {
        maior=n2;
    }
    if(maior<n3)
    {
        maior=n3;
    }
    menor=n1;
    if(menor>n2)
    {
        maior=n2;
    }
    if(menor>n3)
    {
        maior=n3;
    }
    
    printf("\nO maior número dentre esses é o %f", maior);
    printf("\nO menor número dentre esses é o %f", menor);
    
    

    return 0;
}
