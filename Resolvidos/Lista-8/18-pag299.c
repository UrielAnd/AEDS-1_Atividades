/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>      //BIBLIOTECA//
void primos_acima100(int num)           //Declaração da sub rotina.//
{
    int aux=1;              //Declaração da variável auxiliar.//
    printf("Os 3 primeros números primos acima de 100 é: ");            //INFO.//     
//PROCESSAMENTO_________________________________________________________________________________    
    while(aux<=3)
    {
        if((num%2!=0)&&(num%3!=0))
        {
        //OUTPUT_______________________________________________________________________________   
           printf("\n%d ", num);                         //RESPOSTA.//
           aux++;
        }
        else
        {
           
        }
        num++;
    }
}
int main()
{
    primos_acima100(100);           //Chamada de sub-rotina.//
    return 0;
}

