/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
    float n1, n2, n3, p1, p2, p3;
    float soma, conta, media;
    float nota1, nota2, resp;
    while(opcao!=3)
    {   
        printf("\n(1) Média aritimética\t (2) Média ponderada\t (3) Sair");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);
        
        switch(opcao)
        {
            case 1:
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
                printf("\nDigite a segunda nota: ");
                scanf("%f", &nota2);
                
                resp=(nota1+nota2)/2.0;
                
                printf("\nA media entre essas duas notas é %.2f.", resp);
                break;
            case 2:    
                printf("\nDigite a primeira nota: ");
                scanf("%f", &n1);
                printf("\nDigite o peso da primeira nota: ");
                scanf("%f", &p1);
                printf("\nDigite a segunda nota: ");
                scanf("%f", &n2);
                printf("\nDigite o peso da segunda nota: ");
                scanf("%f", &p2);
                printf("\nDigite a terceira nota: ");
                scanf("%f", &n3);
                printf("\nDigite o peso da terceira nota: ");
                scanf("%f", &p3);
                
                conta=(n1*p1)+(n2*p2)+(n3*p3);
                soma=p1+p2+p3;
                media=conta/soma;
                
                printf("\nA media ponderada dessas notas com seus respectivos pesoas é de %.2f.", media);
                break;
            case 3:
                printf("\nOBRIGADO :)");
                break;
            default:
                printf("\nOpção invalida.");
            
            
            
        }
    }

    return 0;
}
