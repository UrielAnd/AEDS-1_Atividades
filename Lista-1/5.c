/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
 //IMPUT_______________________________________________________________
    
    printf("Faça um programa que calcule três notas e seus respectivos pesos, calcule e mostre a média ponderada\n");
    
    printf("Digite a primeira nota\n");
    int n1;
    scanf("%d", &n1);

    printf("Digite o peso da primeira nota\n");
    int p1;
    scanf("%d", &p1);

    printf("Digite a segunda nota\n");
    int n2;
    scanf("%d", &n2);

    printf("Digite o peso da segunda nota\n");
    int p2;
    scanf("%d", &p2);
    
    printf("Digite a terceira nota\n");
    int n3;
    scanf("%d", &n3);

    printf("Digite o peso da primeira nota\n");
    int p3;
    scanf("%d", &p3);
    
    int s;
    int m;
    
    s = (p1 + p2 + p3);

    m = ((n1*p1) + (n2*p2) + (n3*p3))/s;

    printf("Media ponderada: %d", m);


    return 0;
}

