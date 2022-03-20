/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int repet=0;
    
    while(repet<=1)
    {
        printf("Digite o primeiro número: ");
        int n1;
        scanf("%d", &n1);
        printf("Digite o primeiro número: ");
        int n2;
        scanf("%d", &n2);
        printf("Digite o primeiro número: ");
        int n3;
        scanf("%d", &n3);
        printf("Digite o primeiro número: ");
        int n4;
        scanf("%d", &n4);
        
        int maior=n1;
        int menor=n1;
        
        if(maior<n2)
        {
            maior=n2;
            
        }
        if(maior<n3)
        {
            maior=n3;
            
        }
        if(maior<n4)
        {
            maior=n4;
            
        }
        
        
        if(menor>n2)
        {
            menor=n2;
        }
        
        if(menor>n3)
        {
            menor=n3;
        }
        
        if(menor>n4)
        {
            menor=n4;
        }
        
        
        printf("%d", maior);
        printf("%d", menor);
        repet++;
        
        
        
        
        
        
        
    }

    return 0;
}
