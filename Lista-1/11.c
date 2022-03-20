/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
//IMPUT________________________________________________________________________    
    
    printf("Pedro comprou um saco de ração com peso em quilos. Ele possui 2 gatos, para os quais fornece a quantidade de ração em gramas...");
    printf(" A quantidade diária de ração fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso");
    printf(" do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após 5 dias.\n");

    printf("Digite a quantidade de Ração em quilos  \n");
    
    int q;
    
    scanf("%d", &q);
    
    printf("Digite a quantidade de ração fornecida para cada gato em gramas ");
    
    int g;
    
    scanf("%d", &g);
    
//PROCESSAMENTO________________________________________________________________    
    
    int qu;
    int gu;
    
    qu = q * 1000;
    
    gu = g * 2 *5;
    
    int resp;
    
    resp = qu - gu;
    
//OUTPUT_______________________________________________________________________    
    
    printf("Após 5 dias sobraram %d gramas.", resp);

    
    

    return 0;
}




