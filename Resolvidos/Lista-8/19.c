/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  //BIBLIOTECA//

int main()
{
    int vtAR1[10], vtAR2[10];                                              //Declaração das Arrays.//
    int vtAR_resultante[10];                                            //Declaração da Array resultante.//
    
   printf("Digite 10 n(s)° inteiros para armazenar no primeiro vetor.\n");          //INFO.//
//PROCESSAMENTO_________________________________________________________________________________________    
    for(int repet=0;repet<10;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT____________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtAR1[repet]);
    }
    printf("Digite 10 n(s)° inteiros para armazenar no segundo vetor.\n");          //INFO.//
    for(int repet=0;repet<10;repet++)        //Ciclo de repetição para o úsuario inserir valor no vetor.//
    {
    //IMPUT____________________________________________________________________________________________
        printf("Digite: ");
        scanf("%d", &vtAR2[repet]);
    }
    printf("O vetor resultante da muntiplicação dos dois vetores e elementos de mesmo indice é:\n\n");      //INFO.//
    for(int repet=0;repet<10;repet++)   //Ciclo de repetição para fazer as devidas contas entre os vetores.//
    {
        vtAR_resultante[repet]=vtAR1[repet]*vtAR2[repet];
    //OUTPUT___________________________________________________________________________________________   
        printf("%d ", vtAR_resultante[repet]);                                  //RESPOSTA.//
    }

    return 0;
}

