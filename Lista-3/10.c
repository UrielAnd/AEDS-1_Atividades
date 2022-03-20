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
    
    int num, valor=0, soma=0;
    for(int repet=1;repet<=10;repet++)
    {
        printf("Digite os n°s: ");
        scanf("%d", &num);
        
        if(num%2==0||num%3==0)
        {
            if(num==2||num==3)
                {
                    valor+=num;
                }   
        }
        else
        {
            valor+=num;
        }
        
        if(num%2==0)
        {
            soma+=num;
        }
    }
    
    printf("A soma dos números pares dentre esses 10 n° é %d", soma);
    
    printf("A soma dos números primos dentre esses 10 n° é %d", valor);
    return 0;
}
