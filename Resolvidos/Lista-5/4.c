/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <math.h>
void raio_esfera(int raio)
{
    float volume;
    volume=(4*3.14*pow(raio,3))/3.0;
    
    printf("O voulume dessa esfera é de %.2fcm².", volume);
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    float raio;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    raio_esfera(raio);

    return 0;
}


