/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECA//

void nums_par(int vtAR[15])      //Sub-rotina para verificar quais n°(s) do vetor é par.//
{
    int cont=0;                 //Variável auxiliar.//
//PROCESSAMENTO_________________________________________________________________________________________________     
    for(int repet=0;repet<15;repet++)    //ciclo para verificar quais n°(s) do vetor é par.//
    {
        if(vtAR[repet]%2==0)
        {
            cont++;
        }
    }
//OUTPUT_________________________________________________________________________________________________    
    printf("\nA quantidade de valores pares do vetor é de: %d", cont); //RESPOSTA.//
    
    
    

}
int main()                      //Função principar.//
{
    int vtAR[15];
    
//PROCESSAMENTO_________________________________________________________________________________________________       
    for(int repet=0;repet<15;repet++)
    {
    //IMPUT_________________________________________________________________________________________________    
        printf("Digite: ");
        scanf("%d", &vtAR[repet]);
    }
    
    nums_par(vtAR);             //Chamada do procedimento.//
    
    return 0;
}
