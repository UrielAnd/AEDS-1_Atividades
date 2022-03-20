/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int senha;
    printf("Digite a senha para entrar: ");
    scanf("%d", &senha);
    if(senha!=1234)
    {
        printf("SENHA INVÂLIDA");
    }
    else if(senha==1234)
    {
        printf("ACESSO PERMITIDO");
    }
    
    
    return 0;
}
