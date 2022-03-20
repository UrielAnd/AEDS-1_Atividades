/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor;
    int alcool, gasolina, diesel;
    alcool=gasolina=diesel=0;
    int repet=1;
    do
    {
        printf("\n1(ÁLCOOL)");
        printf("\n2(GASOLINA)");
        printf("\n3(DIESEL)");
        printf("\n0(SAIR)");
        printf("\nQual foi o combustivél que você colocou no seu veiculo:  ");
        scanf("%d", &valor);
        if(valor==1)
        {
            alcool++;
        }
        else if(valor==2)
        {
            gasolina++;
        }
        else if(valor==3)
        {
            diesel++;
        }
        else if(valor==4)
        {
            repet--;
            printf("MUITO OBRIGADO!!!");
        }
        else
        {
            printf("\nValor Inválido.");
        }
        
    }while(repet!=0);
    
    printf("\n%d Pessoas abasteceram com alcool.", alcool);
    printf("\n%d Pessoas abasteceram com gasolina.", gasolina);
    printf("\n%d Pessoas abasteceram com diesel.", diesel);
    
    return 0;
}
