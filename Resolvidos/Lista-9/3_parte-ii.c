/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>    //BIBLIOTECAS//
#include <string.h>  //BIBLIOTECAS//
void determina_posicao(char frase[256], int tam)                //Declaração da sub-rotina que determina a posição de letras.//
{       
    int cont;                           //Declaração da variável auxiliar da sub-rotina.//
    char carac[1]={frase[0]};                   //Declaração da string auxiliar.//
//OUTPUT_______________________________________________________________________________________________________________    
    printf("\nA  letra %c é a primeira letra da frase por isso se encontra no incio.", carac[0]);           //RESPOSTA.//
    printf("\n\nEssa é a posição de todas as ocorrencia dessa letra na frase.\n");                          //INFO.//
//PROCESSAMENTO_______________________________________________________________________________________________________________    
    for(int repet=0;repet<tam;repet++)                      //Ciclo para verificar todas as posições da letra escolhida.//
    {
        if(frase[repet]==carac[0])                      //Teste condicional.//
        {
        //OUTPUT_______________________________________________________________________________________________________________    
            printf("%d ", repet);                                                                               //RESPOSTA.//
            cont=repet;
        }
    }
//OUTPUT_______________________________________________________________________________________________________________    
    printf("\n\nA posição da ultima ocorrencia dessa letra é na posição %d da frase.", cont);                       //RESPOSTA.//
}


int main()                  //Função principal.//
{   
    char frase[256];                  //Declaração da string.//
    int tam;                  //Declaração das variáveis auxiliares.//
    printf("Digite uma frase para o oprograma.\n");                  //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("Digite: ");                 
    fgets(frase,sizeof(frase),stdin);
   
    tam=strlen(frase);

    determina_posicao(frase,tam);               //Chamada de sub-rotina.//

    return 0;
}
