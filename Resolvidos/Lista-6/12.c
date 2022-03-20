/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void potencia_conta(int x, int z)
{
    int conta;
    for(int repet=1;repet<z;repet++)
    {
        conta+=x*x;
    }
    printf("%d elevado a %d é %d.", x, z, conta);
   
}


int main()
{
    int x, z;
    printf("Digite o valor que deseja elevar: ");
    scanf("%d", &x);
    printf("Digite o valor da elevação: ");
    scanf("%d", &z);
    
    potencia_conta(x,z);

    return 0;
}
