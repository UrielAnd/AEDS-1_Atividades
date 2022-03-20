/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void media_de_valores(int valor)
{
    int soma=0;
    int qnt=0;
    float media;
    while(valor!=0)
    {   
        printf("\n(valor = 0 -> Sair).");
        printf("\n(valor inserido tem que ser maior ou igual a 1).");
        printf("\nDigite o valor(s) que deseja: ");
        scanf("%d", &valor);
        if(valor>=1)
        {
            soma+=valor;
            if(valor!=0)
            {
                qnt++;
            }
        }
        else if(valor<0)
        {
            printf("Valor inválido");
        }
    }
    media=(float)soma/(float)qnt;
    printf("OBRIGADO :)");
    printf("\nA media aritimetica desses valores é %.2f", media);

}
int main()
{

    setlocale(LC_ALL,"portuguese");

    int valor=1;
    media_de_valores(valor);

    return 0;
}