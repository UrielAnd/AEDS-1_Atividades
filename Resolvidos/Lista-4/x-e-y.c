/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{   
    float x1, y1, x2, y2;
    float d;
    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
  
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
  
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
  
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);
    if((x1!=0)&&(x2!=0)&&(y1!=0)&&(y2!=0))
    {
        d=sqrt(pow (x2-x1,2)+pow (y2-y1,2));
        printf("A distancia desses pares de pontos é de %.2f", d);
    }
    else
    {
        printf("ERRO");
        printf("As cordenadas tem que ser diferente de 0.");
    }
    
    return 0;
}
