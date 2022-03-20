/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int progressao_multi_div(int termo,int razao,int enesimo)
{
    float soma=termo;
    
    for(int repet=1;repet<=enesimo;repet++) 
    {
        if(razao!=0)
        {
            soma*=razao;
        }
        else if(razao==0)
        {
            soma=termo;
        }
        
    }
    
    return soma;
    
}
int soma_progressao(int termo,int razao)
{
    int cont=1;
    int conta=termo;
    int adicao=termo;
    while(cont<=8)
    {
        conta*=razao;
        adicao+=conta;
        cont++;
    }
    return adicao;
}

int main()
{
    int termo, razao, enesimo, pgt;
    float resp;
    printf("Digite o primeiro termo da progressão: ");
    scanf("%d", &termo);
    printf("\nDigite a Razão da progressão: ");
    scanf("%d", &razao);
    printf("\nQual o enesimo termo que deseja descobrir: ");
    scanf("%d", &enesimo);

    resp=progressao_multi_div(termo,razao,enesimo);
    printf("\nO enesimo termo dessa progressão é: %.2f.", resp);
    pgt=soma_progressao(termo,razao);
    printf("\nA soma/subtração dos 8 primeiros n° da progressão é %d.", pgt);
    
    return 0;
}




