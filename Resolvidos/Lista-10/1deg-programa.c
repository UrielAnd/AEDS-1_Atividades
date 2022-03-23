/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>      //BIBLIOTECA//
#include <string.h>     //BIBLIOTECA//
int main()                      
{
    FILE* arquivo;                                  //Identifidcador de fluxo.//
    int tam;                                //Declaração da variável auxiliar.//
    char frase [256];                            //Declaração da string.//
    
    arquivo=fopen(criptografa.txt,"w+");                 //Abertura do arquivo.//
    
    printf("Frases criptografadas do arquivo.");                //INFO.//

//PROCESSAMENTO_________________________________________________________________________________________________    
    while(!feof(arquivo))
    {
        fscanf(arquivo,"%s", frase);                                //Lê o arquivo.//
        
        tam=strlen(frase);
        for(int repet=0;repet<tam;repet++)                  //Ciclo para criptografar os textos do arquivo.//
        {
            frase[repet]+=1;
        }
        fprintf(arquivo,"%s", frase);                       //Armazena no arquivo.//
    //OUTPUT____________________________________________________________________________________________________    
        printf("%s", frase);
    }
    
    fclose(arquivo);                    //Fechamento do arquivo.//
    

    return 0;
}

