/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float idade=1, altura, pgt, soma=0;
    float media;
    while(idade>0)
    {
        printf("Digite a sua idade: ");
        scanf("%f", &idade);
        if(idade>0)
        {
            printf("Digite a sua altura: ");
            scanf("%f", &altura);
            if(idade>50)
            {
                pgt++;
                soma+=altura;
            }
            else
            {
            
            }
        }
        
    }
    printf("Obrigado :)");
    media=soma/pgt;
    printf("A media das alturas daqueles com mais de 50 anos é de %.2f.", media);
    
    return 0;
}
