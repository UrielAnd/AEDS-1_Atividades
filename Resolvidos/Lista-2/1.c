/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT______________________________________________________________________    
    printf("Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e amensagem de aprovado ou reprovado, considerando para aprovação média 7.\n");
    
    printf("Digite a primeira nota ");
    float nota1;
    scanf("%f", &nota1);
    printf("Digite a segunda nota ");
    float nota2;
    scanf("%f", &nota2);
    printf("Digite a terceira nota ");
    float nota3;
    scanf("%f", &nota3);
    printf("Digite a quarta nota ");
    float nota4;
    scanf("%f", &nota4);
//PROCESSAMENTO_____________________________________________________________
    float media;
    
    media = (nota1 + nota2 + nota3 + nota4)/4.0;
//OUTPUT________________________________________________________________________
    printf("A media de suas notas foram %.3f", media);
//PROCESSAMENTO_____________________________________________________________    
    if(media>=7)
{
    //OUTPUT________________________________________________________________________
    printf("\nVocê foi aprovado");
}
else
{
    //OUTPUT________________________________________________________________________
    printf("\nVocê foi reprovado");
}  
    
    return 0;
}

