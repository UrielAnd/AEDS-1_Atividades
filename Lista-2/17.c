/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT__________________________________________________________________________    
    printf("Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.");
    printf("\nDigite sua senha ");
    int a;
    scanf("%d", &a);
//PROCESSAMENTO_________________________________________________________________    
    if(a==4531)
    {
        //OUTPUT___________________________________________________________________
        printf("\nSua senha esta certa acesso permitido");
    }
    else
    {
        //OUTPUT___________________________________________________________________
        printf("\nSua senha esta errada acesso negado");
    }

    return 0;
}
