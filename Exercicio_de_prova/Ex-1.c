/******************************************************************************

Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Este tempo é chamado na físico-química de MEIA-VIDA. 
Dada a massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa 
se torne menor que 0.5 gramas. Ao final do programa escreva a massa inicial e o tempo calculado em horas, minutos e segundos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float gramas, conta;                    
    float segundos;
    float minutos;
    float horas;
    float gramas_inicial;
//IMPUT__________________________________________________________________________________    
    printf("Digite a massa inicial do material em GRAMAS: ");
    scanf("%f", &gramas);
    gramas_inicial=gramas;
//PROCESSAMENTO__________________________________________________________________________    
    while(gramas>0.5)
    {
        conta=gramas/2.0;
        segundos+=50;
        gramas-=conta;
    }
    minutos=segundos/60;
    horas=(segundos/60)/60;
//OUTPUT__________________________________________________________________________________    
    printf("Massa inicial %.2f gramas.", gramas_inicial);
    printf("\nO tempo para o material ficar com menos de 0.5 gramas é de %.2f horas ou %.2f minutos ou %.2f segundos.", horas, minutos, segundos);
    

    return 0;
}

