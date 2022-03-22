/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int letras_diferentes(char palavra[256], int tam ){   // aqui já vai receber o tamanho da frase
//PROCESSAMENTO____________________________________________________________________________________
    int cont=0,i,j;                                   // não precisa do strlen
    for( i=0; i<tam; i++ )                            // aloca cada letra da palavra em uma posição
        for( j=i; j<tam; j++ )                        // passa para a proxima letra
            if( palavra[i] == palavra[j] && i != j )  // compara uma letra com todas as outras
                palavra[j] = ( char )219;             // se iguais marca as outras com esse caractere
    for( i=0; i<tam; i++ )                            // percorre toda a frase
        if( palavra[i] != (char)219 )                 // se o caractere nessa posição da frase não for espaço reverso
            cont++;                                   // é letra diferente de todas as outras , incrementa o contador
    return cont;                                      // retorna o total de letras diferentes
}
int main()                      //Função principal.//
{
    char frase[256];                   //Declaração da string.//
    int tam, resp;             //Declaração das variáveis auxiliares.//
    printf("Digite uma frase para o oprograma.\n");                  //INFO.//
//IMPUT_______________________________________________________________________________________________________________    
    printf("Digite: ");                 
    fgets(frase,sizeof(frase),stdin);
    
    tam=strlen(frase);
    
    resp=letras_diferentes(frase,tam);                             //Chamada da função.//
    
//OUTPUT______________________________________________________________________________________________________________    
    printf("Essa frase tem %d letras diferentes.", resp);               //RESPOSTA.//
    
    return 0;
}
