/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>              //BIBLIOTECA//
float triangulo_descobrir(float lado1, float lado2, float lado3)                    //Declaração da função//
{
    float soma;
    soma=lado2+lado3;                                           //Soma.//
    
    return soma;
}
void tipo_de_triangulo(float lado1, float lado2, float lado3)                       //Declaração da sub-rotina.//
{   
    if((lado1==lado2)&&(lado1==lado3))
    {
    //OUTPUT_________________________________________________________________________________________________________________    
        printf("\nE esse triangulo é equilatero.");     //RESPOSTA.//
    }
    else if((lado1==lado2)&&(lado1!=lado3)||(lado1==lado3)&&(lado1!=lado2)||(lado2==lado3)&&(lado2!=lado1)||(lado2==lado1)&&(lado2!=lado3)||(lado3==lado1)&&(lado3!=lado2)||(lado3==lado2)&&(lado3!=lado1))             //Teste condicional.//
    {
    //OUTPUT_________________________________________________________________________________________________________________      
        printf("\nE esse triangulo é isóceles.");       //RESPOSTA.//
    }
    else if((lado1!=lado2)&&(lado1!=lado3))                     //Teste condicional.//
    {
    //OUTPUT_________________________________________________________________________________________________________________      
        printf("\nE esse triangulo é escaleno");        //RESPOSTA.//
    }
    
}

int main()
{
    float lado1, lado2, lado3;              //Declaração das variáveis de um lado do triangulo.//
    float soma;                             //variável soma.//
    do              //Ciclo de interface do usuário caso ele erre.//
    {
    //IMPUT__________________________________________________________________________________________________    
        printf("\nOBS: Os lados tem que ser maior que 0.");             
        printf("\nDigite o primeiro lado do triangulo: ");
        scanf("%f", &lado1);
        printf("\nDigite o segundo lado do triangulo: ");
        scanf("%f", &lado2);
        printf("\nDigite o terceiro lado do triangulo: ");
        scanf("%f", &lado3);
    //PROCESSAMENTO__________________________________________________________________________________________    
        if((lado1>0)&&(lado2>0)&&(lado3>0))             //Teste condicional.//
        {
            soma=triangulo_descobrir(lado1,lado2,lado3);                    //Chamada de sub-rotina.//
            
            if(soma>=lado1)         //Teste condicional.//
            {
                printf("\nEsses lados formam um triangulo.");                   //INFO.//
                tipo_de_triangulo(lado1,lado2,lado3);               //Chamada de função.//
            }
            else if(soma<lado1)             //Teste condicional.//
            {
                printf("\nEsses lados não formam um triangulo.");                   //INFO.//
            }
        }
        else            //Teste condicional.//
        {
            printf("\nValor do lado inválido.");                        //INFO.//
        }
    }while((lado1==0)||(lado2==0)||(lado3==0));
    return 0;
}
