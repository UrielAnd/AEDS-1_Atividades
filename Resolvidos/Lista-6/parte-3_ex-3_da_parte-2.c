/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int progressao_multi_div(int termo,int razao,int enesimo,float* pt)
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
    (*pt)=soma;
    
}
int soma_progressao(int termo,int razao,float* pt1)
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
   (*pt1)=adicao;
}

int main()
{
    int termo, razao, enesimo;
    float pt1, pt;
    printf("Digite o primeiro termo da progressão: ");
    scanf("%d", &termo);
    printf("\nDigite a Razão da progressão: ");
    scanf("%d", &razao);
    printf("\nQual o enesimo termo que deseja descobrir: ");
    scanf("%d", &enesimo);

    progressao_multi_div(termo,razao,enesimo,&pt);
    printf("\nO enesimo termo dessa progressão é: %.2f.", pt);
    
    soma_progressao(termo,razao,&pt1);
    printf("\nA soma/subtração dos 8 primeiros n° da progressão é %.0f.", pt1);
    
    return 0;
}





