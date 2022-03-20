/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void contas_exercicio(int pessoas, float soma, int filhos, int qnt, float maior)
{
    float media_filhos, media_salario, percentual;
    
    media_salario=soma/(float)pessoas;
    media_filhos=(float)filhos/(float)pessoas;
    percentual=(qnt*100)/pessoas;
    printf("\nA média do salario da população é de  %.2f.", media_salario);
    printf("\nA média do número de filhos da população é de %.2f.", media_filhos);
    printf("\nO maior salario entre todos da população é de %.2f reais.", maior);
    printf("\nO percentual de pessoas com salário inferior a 380,00 reias é de %.2f%%. .", percentual);
}
int main()
{   
    int pessoas=0;
    int filho, filhos=0;
    float salario=1, soma=0, maior=0;
    int qnt=0;
    
    while(salario!=0)
    {
        printf("\nDigite (0)- em salário para exibir os resultados.");
        printf("\nDigite o seu salario: ");
        scanf("%f", &salario);
        if(salario!=0)
        {
            printf("Digite o n° de filho(s) que você possui: ");
            scanf("%d", &filho);
            pessoas++;
            soma+=salario;
            filhos+=filho;
            if(salario>maior)
            {
                maior=salario;
            }
            if(salario<380)
            {
                qnt++;
            }
        }
    }
    contas_exercicio(pessoas,soma,filhos,qnt,maior);
    return 0;
}
