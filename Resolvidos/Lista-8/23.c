/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>      //BIBLIOTECA//

int main()
{
    int vtarA [5], vtarB [5];                                        //Declaração da Array.//
    int cont=4;
    printf("Digite 5 n°(s) inteiros para o primeiro vetor.\n");             //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________
    for(int repet=0;repet<5;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT_________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtarA[repet]);
    }
    printf("Digite mais 5 n°(s) inteiros para o sgundo veter.\n");             //INFO.//
    for(int repet=0;repet<5;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT_________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtarB[repet]);
    }
    for(int repet=0;repet<5;repet++)             //ciclo para realizar as devidas subtrações//
    {
        vtarA[repet]-=vtarB[cont];
        cont--;
    }
    printf("O resultado das subtrações realizadas é:\n ");   //INFO.//
    for(int repet=0;repet<5;repet++)
    {
    //OUTPUT_________________________________________________________________________________________     
        printf("%d ", vtarA[repet]);                        //RESPOSTA.//
    }

    return 0;
}

