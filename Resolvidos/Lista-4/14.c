/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int repet=1;
    int num;
    float nota;
    float resp=0;
    float media;
    printf("Digite o número existentes na turma: ");
    scanf("%d", &num);
    
    while(repet<=num)
    {
        
        printf("\nDigite a nota do aluno %d: ", repet);
        scanf("%f", &nota);
        
        resp+=nota;
        
        repet++;
        
    }
    media=resp/num;
    printf("\nA media das notas desses %d alunos é %.2f.", num, media);

    return 0;
}
