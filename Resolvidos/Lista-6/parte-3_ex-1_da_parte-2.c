/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int progressao_soma_subt(int termo, int razao, int enesimo, int* pt1)
{
    int soma=termo;
    
    for(int repet=1;repet<=enesimo;repet++) 
    {
        if(razao>0)
        {
            soma+=razao;
        }
        else if(razao<0)
        {
            soma+=razao;
        }
        
    }
    (*pt1)=soma;
}
int soma_progressao(int termo, int razao, int* pt)
{
    int cont=1;
    int conta=termo;
    int adicao=termo;
    while(cont<=8)
    {
        conta+=razao;
        cont++;
        adicao+=conta;
    }
    (*pt)=adicao;
}
int main()
{
    int termo, razao, enesimo;
    int pt, pt1;
    printf("Digite o primeiro termo da progressão: ");
    scanf("%d", &termo);
    printf("\nDigite a Razão da progressão: ");
    scanf("%d", &razao);
    printf("\nQual o enesimo termo que deseja descobrir: ");
    scanf("%d", &enesimo);
   
    progressao_soma_subt(termo,razao,enesimo,&pt1);
    printf("\nO enesimo termo dessa progressão é: %d", pt1);
    soma_progressao(termo,razao,&pt);
    printf("\nA soma dos 8 primeiros n° da progressão é %d.", pt);
    return 0;
}

