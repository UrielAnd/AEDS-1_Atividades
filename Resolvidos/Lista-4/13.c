/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int entre=0;
    int fora=0;
    int num;
    
    printf("Digite 10 números");
    
    for(int repet=1;repet<=10;repet++)
    {
        printf("\nDigite o número %d: ", repet);
        scanf("%d", &num);
        if((num>10)&&(num<20))
        {
            entre++;
        }
        else
        {
            fora++;
        }
    }
    
    printf("Dentre esses números tem %d entre 10 e 20 e %d fora de 10 e 20.", entre, fora);
    
    return 0;
}
