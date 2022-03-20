/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int resp;
    int sexo;
    int pgt1=0, pgt2=0, pgt3=0;
    int pgt4=0;
    int homens=0;
    float conta;
    
    for(int repet=1;repet<=3;repet++)
    {
        printf("\n(1)feminino\t(2)masculino");
        printf("\nDigite seu sexo:");
        scanf("%d", &sexo);
        printf("\n(1)sim\t(2)não");
        printf("\nDigite sua resposta:");
        scanf("%d", &resp);
        
        if(sexo==1)
        {
            if(resp==1)
            {
                pgt1++;
                pgt3++;
            }
            else if(resp==2)
            {
                pgt2++;
            }
        }
        else if(sexo==2)
        {
            homens++;
            if(resp==1)
            {
                pgt1++;
            }
            else if(resp==2)
            {
                pgt2++;
                pgt4++;
            }
        }
       
    }
    conta=((float)pgt4*100)/(float)homens;
    printf("\nO número de pessoas que responderam sim foi de %d pessoas.", pgt1);
    printf("\nO número de pessoas que responderam não foi de %d pessoas.", pgt2);
    printf("\nO número de mulheres que responderam sim foi de %d mulheres.", pgt3);
    printf("\nA porcentagem de homens que responderam não foi de %.2f%% sobre o total de homens analizados.", conta);

    return 0;
}

