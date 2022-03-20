/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> //BIBLIOTECA//

void calculo(int matZ[10][5]);                                         //Declaração da sub-rotina calculo.//
void inserir_elementos_matriz(int matZ[10][5])               //Sub-rotina para o usuario inseir os elementos da matriz.//
{
    printf("Digite valores reis para preecher a matriz 10x5\n ");       //INFO.//
//PROCESSAMNETO________________________________________________________________________________________________________        
    for(int repet=0;repet<10;repet++)
    {
        for(int aux=0;aux<5;aux++)
        {
        //IMPUT________________________________________________________________________________________________________        
            printf("Digite o valor da linha %d, coluna %d: ", repet, aux);  
            scanf("%d", &matZ[repet][aux]);
        }
    }
    printf("Essa foi a matriz criada pro você: \n\n");                          //INFO.//
    for(int repet=0;repet<10;repet++)
    {
        for(int aux=0;aux<5;aux++)                                  //Ciclo para imprimir a matriz digitada pelo usuário.//
        {   
            printf("%d ", matZ[repet][aux]);                            //INFO.//
        }
        printf("\n");                                            //Salta linhas.//
    }
    
    calculo(matZ);          //Chamada de sub-rotina.//
    
}


int main()                          //Função principal.//
{
    int matZ[10][5];                            //Declaração da matriz.//
    
    inserir_elementos_matriz(matZ);                 //Chamada de sub-rotina.//

    return 0;
}
void calculo(int matZ[10][5])                   //Sub-rotina para fazer os calculos.//
{
    int soma=0;                         //Declaração da variável auxiliar para a realização de contas soma.//
    printf("\n");                                               //Salta linhas.//
//PROCESSAMNETO________________________________________________________________________________________________________
    for(int repet=6;repet<10;repet++)       //Ciclo para soma os elementos abaixo da linha 6 da matriz.//
    {
        for(int aux=0;aux<5;aux++)
        {
            soma+=matZ[repet][aux];
        }
    }
//OUTPUT________________________________________________________________________________________________________    
    printf("A soma de todos os elementos localizados abaixo da sexta linha dessa matriz é: %d", soma);                    //RESPOSTA.//
}