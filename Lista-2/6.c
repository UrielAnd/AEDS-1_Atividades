/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
//IMPUT_____________________________________________________________________________
    printf("Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a escolha do usuário...");
    printf("\nDigite o primeiro número "); 
    float n1;
    
    scanf("%f", &n1);


    printf("Digite o segundo número ");  
    float n2;
    
    scanf("%f", &n2);
    
//INFO_________________________________________________________________________
    printf("operações");
    printf("\n1 para o primeiro número elevado ao segundo número.");
    printf("\n2 para raiz quadrada de cada um dos números.");
    printf("\n3 para raiz cúbica de cada um dos números.");
    printf("\nDigite qual operação deseja fazer ");
    int a;
    scanf("%d", &a);
//PROCESSAMENTO_______________________________________________________________________
    if(a==1)
    {
        float r;
        r=pow(n1,n2);
        //OUTPUT________________________________________________________________________
        printf("O primeiro número elevado ao segundo é %.2f.", r);
    }
    else if(a==2)
    {
        float r;
        float i;
        r=sqrt(n1);
        i=sqrt(n2);
        //OUTPUT________________________________________________________________________
        printf("A raiz quadrada desses números respectivamente é %.2f e %.2f.", r, i);
    }
    else if(a==3)
    {
        float r;
        float i;
        r=cbrt(n1);
        i=cbrt(n2);
        //OUTPUT________________________________________________________________________
        printf("A raiz cubica desses números respectivamente é %.2f e %.2f.", r, i);
    }
    else
    {
        //OUTPUT________________________________________________________________________
        printf("ERRO\n");
        printf("Escolha uma das opcoes válidas\n");
        //INFO_________________________________________________________________________
        printf("operações");
        printf("\n1 para o primeiro número elevado ao segundo número.");
        printf("\n2 para raiz quadrada de cada um dos números.");
        printf("\n3 para raiz cúbica de cada um dos números.");
        printf("\nDigite qual operação deseja fazer ");
        int a;
        scanf("%d", &a);
        if(a==1)
    {
        float r;
        r=pow(n1,n2);
        //OUTPUT________________________________________________________________________
        printf("O primeiro número elevado ao segundo é %.2f.", r);
    }
    else if(a==2)
    {
        float r;
        float i;
        r=sqrt(n1);
        i=sqrt(n2);
        //OUTPUT________________________________________________________________________
        printf("A raiz quadrada desses números respectivamente é %.2f e %.2f.", r, i);
    }
    else if(a==3)
    {
        float r;
        float i;
        r=cbrt(n1);
        i=cbrt(n2);
        //OUTPUT________________________________________________________________________
        printf("A raiz cubica desses números respectivamente é %.2f e %.2f.", r, i);
    }
        else
        {
            printf("ERRO");
        }
    }
   
    
    


    return 0;
}





