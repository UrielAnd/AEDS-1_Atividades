/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
void divisivel(int num1, int num2)
{
    if(num1/num2)
    {
        printf("0");
    }
    else
    {
        num2+=1;
        printf("%d", num2);
    }
    
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    int num1, num2;

    printf("Digite o primeiro n°: ");
    scanf("%d", &num1);
    printf("Digite o segundo n°: ");
    scanf("%d", &num2);

    divisivel(num1,num2);

    return 0;
}
