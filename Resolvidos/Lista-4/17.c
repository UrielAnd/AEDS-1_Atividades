/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese" );
    int repet=1;
    int num;
    while(repet!=0)
    {
        printf("\nDigite um número: ");
        scanf("%d", &num);
        if(num>0)
        {
            if(num%2==0)
            {
                 printf("Esse número é par");
            }      
            else if(num%2!=0)
            {
                printf("Esse número é impar");
            }
        }
        else if(num<=0)
        {
                repet--;
        }    
    }
    
    
    return 0;
}
