/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void primos_acima100(int num)
{
    int aux=1;
    printf("Os 3 primeros números primos acima de 100 é: ");
   while(aux<=3)
   {
       if((num%2!=0)&&(num%3!=0))
       {
           printf("\n%d ", num);
           aux++;
       }
       else
       {
           
       }
       num++;
   }
}



int main()
{
    primos_acima100(100);
    return 0;
}

