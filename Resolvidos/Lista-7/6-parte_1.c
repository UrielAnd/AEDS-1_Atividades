/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECA//
int mdc(int num1, int num2);                        //Declaração da função para calcular o MDC.//
int main()
{
    int num1, num2;                                   //Declaração das variáveis auxiliares.//
    printf("Informe dois números inteiros.");                        //INFO.//
//IMPUT____________________________________________________________________________________________________
    printf("Digite o primeiro n°: ");       
    scanf("%d", &num1);
    printf("Digite o primeiro n°: ");
    scanf("%d", &num2);
    
//OUTPUT___________________________________________________________________________________________________    
    printf("MDC de %d e %d é: %d", num1, num2, mdc(num1, num2));
    
    return 0;
}
int mdc(int num1, int num2)                                     //Função para calcular o MDC.//
{
//PROCESSAMENTO____________________________________________________________________________________________    
    int resto=num1%num2;                                  //Declaração das variáveis auxiliares.//
    
    if(resto==0)                                                  //Teste condicional.//
    {
        return num2;
    }
    else
    {
        return mdc(num2, resto);
    }
}