/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float triangulo_descobrir(float lado1, float lado2, float lado3)
{
    float soma;
    soma=lado2+lado3;
    
    return soma;
}
void tipo_de_triangulo(float lado1, float lado2, float lado3)
{
    if((lado1==lado2)&&(lado1==lado3))
    {
        printf("\nE esse triangulo é equilatero.");
    }
    else if((lado1==lado2)&&(lado1!=lado3)||(lado1==lado3)&&(lado1!=lado2)||(lado2==lado3)&&(lado2!=lado1)||(lado2==lado1)&&(lado2!=lado3)||(lado3==lado1)&&(lado3!=lado2)||(lado3==lado2)&&(lado3!=lado1))
    {
        printf("\nE esse triangulo é isóceles.");
    }
    else if((lado1!=lado2)&&(lado1!=lado3))
    {
        printf("\nE esse triangulo é escaleno");
    }
    
}

int main()
{
    float lado1, lado2, lado3;
    float soma;
    do
    {
        printf("\nOBS: Os lados tem que ser maior que 0.");
        printf("\nDigite o primeiro lado do triangulo: ");
        scanf("%f", &lado1);
        printf("\nDigite o segundo lado do triangulo: ");
        scanf("%f", &lado2);
        printf("\nDigite o terceiro lado do triangulo: ");
        scanf("%f", &lado3);
        if((lado1>0)&&(lado2>0)&&(lado3>0))
        {
            soma=triangulo_descobrir(lado1,lado2,lado3);
            
            if(soma>=lado1)
            {
                printf("\nEsses lados formam um triangulo.");
                tipo_de_triangulo(lado1,lado2,lado3);
            }
            else if(soma<lado1)
            {
                printf("\nEsses lados não formam um triangulo.");
            }
        }
        else
        {
            printf("\nValor do lado inválido.");
        }
    }while((lado1==0)||(lado2==0)||(lado3==0));
    return 0;
}

