/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
int progressao_soma_subt(int termo, int razao, int enesimo)
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
    return soma;
}
int soma_progressao(int termo, int razao)
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
    return adicao;
}
int main()
{
    int termo, razao, resp, enesimo, pgt;
    printf("Digite o primeiro termo da progressão: ");
    scanf("%d", &termo);
    printf("\nDigite a Razão da progressão: ");
    scanf("%d", &razao);
    printf("\nQual o enesimo termo que deseja descobrir: ");
    scanf("%d", &enesimo);
   
    resp=progressao_soma_subt(termo,razao,enesimo);
    printf("\nO enesimo termo dessa progressão é: %d", resp);
    pgt=soma_progressao(termo,razao);
    printf("\nA soma dos 8 primeiros n° da progressão é %d.", pgt);
    return 0;
}







