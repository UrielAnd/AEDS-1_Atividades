/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>//BIBLIOTECA//
int imprime_vetor(int vtAR[], int n)                   //Declaração da função para imprimir o vetor.//
{   
    if(n>0)                                                         //Teste condifiomal.//
    {   
    //OUTPUT________________________________________________________________________________________________    
        printf("%d ", vtAR[0]);                                         //RESPOSTA.//
        return imprime_vetor(&vtAR[1], n-1);                         //Recursividade.//
    }
}

int imprime_vetor_ao_contrario(int vtAR[], int n)                   //Declaração da função para imprimir o vetor ao contrario.//
{   
    if(n>0)                                                         //Teste condifiomal.//
    {   
    //OUTPUT________________________________________________________________________________________________    
        printf("%d ", vtAR[n-1]);                                         //RESPOSTA.//
        return imprime_vetor_ao_contrario(vtAR,n-1);                            //Recursividade.//
    }
}
int soma_elementos_vetor(int vtAR[], int n, int soma)                   //Declaração da função para somar os valores do vetor.//
{   
    if(n==0)                                                                //Teste condifiomal.//
    {   
        return vtAR[n];
    }
    else
    {
        return soma=vtAR[n]+soma_elementos_vetor(vtAR,n-1,soma);                       //Recursividade.//
    }
}
int main()                                  //Função principal.//
{
    int n, resp, soma=0;                                //Declaração das variáveis auxiliares.//
    float media;                                        //Declaração da variável auxiliare.//
//IMPUT_____________________________________________________________________________________________________
    printf("Qual o tamanho que você que criar o vetor: ");
    scanf("%d", &n);
    
    int vtAR[n];
    
    printf("Digite n°(s) inteiros para preencher o vetor de %d posições.\n", n);                       //INFO.//

    for(int repet=0;repet<n;repet++)                                    //Ciclo para o usuário inserir os elementos no vetor.//
    {
    //IMPUT_____________________________________________________________________________________________________    
        printf("Digite a posição %d do vetor: ", repet);
        scanf("%d", &vtAR[repet]);
    }
    
    printf("\nImpressão do vetor:\n\n");                                               //INFO.//   

    imprime_vetor(vtAR,n);                                                     //Chamada da função.//
    
    printf("\n\nImpressão do vetor ao contrario:\n\n");                                                //INFO.// 
    
    imprime_vetor_ao_contrario(vtAR,n);                                                     //Chamada da função.//
    
    resp=soma_elementos_vetor(vtAR,n-1,soma);                                                     //Chamada da função.//
    
//OUTPUT________________________________________________________________________________________________________
    printf("\n\nO somatório de todos os elementos do vetor é %d", resp);                    //RESPOSTA.//
    
    media=(float)resp/(float)n;                                                          //Conta.//
//OUTPUT________________________________________________________________________________________________________    
    printf("\nA média do valor de todos os elementos é %.2f", media);                   //RESPOSTA.//
    
    return 0;
    
}



