/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
void transfor_segundos(int horas, int minutos, int segundos)
{
    int conta;
    conta=(horas*60)*60;
    conta+=minutos*60;
    conta+=segundos;

    printf("Esse horario convertido em segundos é: %dsegundos.", conta);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite as segundos: ");
    scanf("%d", &segundos);

    transfor_segundos(horas,minutos,segundos);

    return 0;
}