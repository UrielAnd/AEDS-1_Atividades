/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float polegadas_centimetros(float valor, float*pt)
{
    float cm;
    
    cm=valor*2.54;
    
    (*pt)=cm;
}
float centimetros_polegadas(float valor, float* pt)
{
    float polegadas;
    
    polegadas=valor/2.54;
    
    (*pt)=polegadas;
}
float fahrenheit_celsius(float valor, float* pt)
{
    float celsius;
    
    celsius=(valor-32)/1.8;
    
    (*pt)=celsius;
}
float celsius_fahrenheit(float valor, float* pt)
{
    float fahrenheit;
    
    fahrenheit=(valor*1.8)+32;
    
    (*pt)=fahrenheit;
}
int main()
{
    int escolha;
    float pt;
    float valor;
    printf("Oque você quer transformar?");
    printf("\n(1)-Polegada para centímetros\n(2)-Centímetros para polegadas\n(3)-Fahrenheit para Celsius\n(4)-Celsius para Fahrenheit");
    printf("\nDigite: ");
    scanf("%d", &escolha);
    
    switch(escolha)
    {
        case 1:
            printf("Digite o valor de polegadas que quer descobrir em cm:");
            scanf("%f", &valor);
            polegadas_centimetros(valor,&pt);
            printf("%.2f polegadas é %.2f cm. ", valor, pt);
        break;
        
        case 2:
            printf("Digite o valor de cm que quer descobrir em polegadas: ");
            scanf("%f", &valor);
            centimetros_polegadas(valor,&pt);
            printf("%.2f cm é %.2f polegadas. ", valor, pt);
        break;
        
        case 3:
            printf("Digite o valor de fahrenheit que quer descobrir em celsius: ");
            scanf("%f", &valor);
            fahrenheit_celsius(valor,&pt);
            printf("%.2f fahrenheit é %.2f celsius. ", valor, pt);
        break;
        
        case 4:
            printf("Digite o valor de celsius que quer descobrir em fahrenheit: ");
            scanf("%f", &valor);
            celsius_fahrenheit(valor,&pt);
            printf("%.2f celsius é %.2f fahrenheit. ", valor, pt);
        break;
        
        default:
        printf("ESCOLHA INVÁLIDA");
    }

    return 0;
}