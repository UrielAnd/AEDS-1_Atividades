/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECA//
int main()
{
    int vtAR_A[10];                                          //Declaração das Arrays.//
    int cont=0;                                        //Declaração da variável auxiliar.//
    printf("Digite 10 n(s)° inteiros para o vetor A.\n");             //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT_________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtAR_A[repet]);
    }
    for(int repet=0;repet<10;repet++)       //Ciclo de repetição para verificar o tamanho do vetor necessário.//
    {
        if(vtAR_A[repet]<=0)
        {
            cont++;
        }
    }
    int vtAR_B[cont];
    for(int repet=0;repet<10;repet++)       //Ciclo de repetição para inserir os devidos valores no vetor B.//
    {
        if(vtAR_A[repet]<=0)
        {
            vtAR_B[aux]=vtAR_A[repet];
            aux++;
        }
    }
    printf("Resultado do vetor B:");                            //INFO.//
    for(int repet=0;repet<cont;repet++)
    {
     //OUTPUT_________________________________________________________________________________________    
        printf("%d ", vtAR_B[repet]);                         //RESPOSTA.//
    }
}