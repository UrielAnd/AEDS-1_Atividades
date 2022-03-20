/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    
    int num;
    int primo=0;
    for(int repet=1;repet<=10;repet++)
    {
        printf("Digite os n°s: ");
        scanf("%d", &num);
        
        for(int aux=1;aux<=num;aux++)
        {    
            if((num/2)&&(num/3))
            {
                
            }
            else
            {
                primo++;
            }
        }
    }
    printf("Desses 10 n°s que você digitou %d é primo.", primo);
    return 0;
}


