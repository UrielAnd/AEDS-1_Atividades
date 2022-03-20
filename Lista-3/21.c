/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");

  float porcentagem;    
    float soma;
    int voto;
    float can1=0, can2=0, can3=0, can4=0, branco=0, nulo=0;
    do
    {
        printf("1(candidato 1)\n2(candidato 2)\n3(candidato 3)\n4(candidato 4)\n5(nulo)\n6(branco)\n0(Sair)");    
        printf("\nEm qual caanditato você deseja votar: ");
        scanf("%d", &voto);
        
        switch (voto)
        {
        case 1:
            can1++;
            break;
        case 2:
            can2++;
            break;
        case 3:
            can3++;
            break;
        case 4:
            can4++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        case 0:
            break;
        default:
            printf("(ERRO)-Codigo invalido");
            break;
        }

    }while(voto!=0);
    printf("candidato 1->%.0f votos.\ncandidato 2->%.0f votos.\ncandidato 3->%.0f votos.\ncandidato 4->%.0f votos.\nnulo->%.0f votos. \nbranco->%.0f votos.", can1, can2, can3, can4, branco, nulo);
    soma=can1+can2+can3+can4+branco+nulo;
    porcentagem=(nulo*100)/soma;
    printf("\nA porcentagem de votos nulos sobre o total foi de %.2f%%.", porcentagem);
    porcentagem=0;
    porcentagem=(branco*100)/soma;
    printf("\nA porcentagem de votos em branco sobre o total foi de %.2f%%.", porcentagem);
    return 0;
}
