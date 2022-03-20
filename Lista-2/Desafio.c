/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
    printf("A PUC possui regras muito claras sobre a aprovaC'C#o e reprovaC'C#o de alunos...");
    printf ("\nDigite o total de aulas do semestre ");
    float aulas;
    scanf("%f", &aulas);
    
    printf ("\nDigite Total de faltas do semestre ");
    float faltas;
    scanf("%f", &faltas);

    printf ("\nDigite a nota de exercicios e trabalhos ");
    float exercicios;
    scanf("%f", &exercicios);

    printf ("\nDigite as notas das treis avaliações ");
    float provaa, provab, provac;
    scanf("%f %f %f", &provaa, &provab, &provac);

    printf ("\nDigite a nota da reavaliação se ouver ");
    float reavalia;
    scanf("%f", &reavalia);
    
    float porcento, nota, cada;
    
    porcento=aulas*0.75;
    nota=exercicios+provaa+provab+provac;
    cada=aulas-faltas;
    
    if(cada<porcento)
    {
        printf("\nReprovado");
    }
    else if(cada>porcento)
    {
        if(nota>60)
        {
            printf("\nAprovado");
        }
        else if (nota<60)
        {
            if(reavalia>60)
            {
                printf("\nAprovado");
            }
            else if(reavalia<60)
            {
                printf("\nreprovado");
            }
        }
    }
    










  return 0;
}

