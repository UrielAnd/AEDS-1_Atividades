/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float polegadas_centimetros(float valor)
{
    float cm;
    
    cm=valor*2.54;
    
    return cm;
}
float centimetros_polegadas(float valor)
{
    float polegadas;
    
    polegadas=valor/2.54;
    
    return polegadas;
}
float fahrenheit_celsius(float valor)
{
    float celsius;
    
    celsius=(valor-32)/1.8;
    
    return celsius;
}
float celsius_fahrenheit(float valor)
{
    float fahrenheit;
    
    fahrenheit=(valor*1.8)+32;
    
    return fahrenheit;
}
int main()
{
    int escolha;
    float valor;
    float resp;
    printf("Oque você quer transformar?");
    printf("\n(1)-Polegada para centímetros\n(2)-Centímetros para polegadas\n(3)-Fahrenheit para Celsius\n(4)-Celsius para Fahrenheit");
    printf("\nDigite: ");
    scanf("%d", &escolha);
    
    switch(escolha)
    {
        case 1:
            printf("Digite o valor de polegadas que quer descobrir em cm:");
            scanf("%f", &valor);
            resp=polegadas_centimetros(valor);
            printf("%.2f polegadas é %.2f cm. ", valor, resp);
        break;
        
        case 2:
            printf("Digite o valor de cm que quer descobrir em polegadas: ");
            scanf("%f", &valor);
            resp=centimetros_polegadas(valor);
            printf("%.2f cm é %.2f polegadas. ", valor, resp);
        break;
        
        case 3:
            printf("Digite o valor de fahrenheit que quer descobrir em celsius: ");
            scanf("%f", &valor);
            resp=fahrenheit_celsius(valor);
            printf("%.2f fahrenheit é %.2f celsius. ", valor, resp);
        break;
        
        case 4:
            printf("Digite o valor de celsius que quer descobrir em fahrenheit: ");
            scanf("%f", &valor);
            resp=celsius_fahrenheit(valor);
            printf("%.2f celsius é %.2f fahrenheit. ", valor, resp);
        break;
        
        default:
        printf("ESCOLHA INVÁLIDA");
        
        
        
        
        
        
        
        
        
        
        
        
        
    }

    return 0;
}
