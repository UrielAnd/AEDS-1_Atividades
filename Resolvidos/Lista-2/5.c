/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//IMPUT_______________________________________________________________________________    
    printf("Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolhado usuário.\n");
    printf("Digite o primeiro número "); 
    float n1;
    
    scanf("%f", &n1);


    printf("Digite o segundo número ");  
    float n2;
    
    scanf("%f", &n2);
    
//INFO_______________________________________________________________________
    printf("operações");
    printf("\n1 para Média entre os números digitados");
    printf("\n2 para Diferença do maior pelo menor");
    printf("\n3 para Produto entre os números digitados");
    printf("\n4 para Divisão do primeiro pelo segundo");
    printf("\nDigite qual operação deseja fazer ");
    int a;
    scanf("%d", &a);
//PROCESSAMENTO_______________________________________________________________________    
    if(a==1)
    {
        float r;
        r=(n1+n2)/2.0;
        //OUTPUT________________________________________________________________________
        printf("A média desse núemros é %.2f.", r);
    }
    else if(a==2)
    {
        if(n1>n2)
        {
            float r;
            r=n1-n2;
            //OUTPUT________________________________________________________________________
            printf("A diferença entre esses números é %.2f.", r);
        }
        else
        {
            float r;
            r=n2-n1;
            //OUTPUT________________________________________________________________________
            printf("A diferença entre esses números é %.2f.", r);
        }
        
    }
    else if(a==3)
    {
        float r;
        r=n1+n2;
        //OUTPUT________________________________________________________________________
        printf("O produto desses números é %.2f.", r);
    }
    else if(a==4)
    {
        if(n2==0)
        {
            //OUTPUT________________________________________________________________________
            printf("impossivel dividir por 0.");
        }
        else
        {
            float r;
            r=n1/n2;
            //OUTPUT________________________________________________________________________
            printf("A Divisão do primeiro número pelo segundo é %.2f.", r);
        }
    }
    else
    {
        //OUTPUT________________________________________________________________________
        printf("ERRO");
    }
    
    
    

    return 0;
}









