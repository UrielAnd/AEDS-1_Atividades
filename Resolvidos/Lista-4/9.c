/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#Pergunta:
    Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) 
e imprimir os N primeiros números inteiros.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <stdio.h>

int main()
{
    int num;                    //Variável à escolha do usuario.//
//IMPUT_____________________________________________________________________________________        
    printf("Digite a quantidade dos primeiros números inteiros que deseja saber: ");   
    scanf("%d", &num);          //Scanea o n°do usuario.//
//PROCESSAMENTO_____________________________________________________________________________________        
    if(num>0)
    {
    //OUTPUT_____________________________________________________________________________________         
        printf("\nOs primeiros %d números inteiros é:", num);
        for(int repet=1;repet<=num;repet++)                //Ciclo./Variável de repetição./Incremento.//
        {   
        //OUTPUT_____________________________________________________________________________________     
            printf("\n%d", repet);
        }
    }
    else
    {
    //OUTPUT_____________________________________________________________________________________ 
        printf("ERRO");         //Impressão do ERRO do sistema.//
    }
    
    
    return 0;
}

