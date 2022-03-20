/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo, produto;
    float renda;
    float gasto;
    float resp;
    float venda;
    float valor;
    float conta;
    int p10=0;
    int p10_20=0;
    int p20=0;
    printf("Digite a quantidade de produtos que deseja conferir: ");
    scanf("%d", &produto);
    for(int repet=1;repet<=produto;repet++)
    {
        printf("\nDigite o preço de compra do produto: ");
        scanf("%f", &valor);
        printf("\nDigite o preço de venda do produto: ");
        scanf("%f", &venda);
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &codigo);
        conta=valor*100;
        resp=conta/venda;
        if(resp<10)
        {
            p10++;
        }
        else if((resp>=10)&&(resp<=20))
        {
            p10_20++;
        }
        else if(resp>20)
        {
            p20++;
        }
        renda+=venda;
        gasto+=valor;
        
    }
        printf("\n%d mercadorias proporcionam o lucro <10 porcento.", p10);
        printf("\n%d mercadorias proporcionam o lucro entre >=10 e <=20 porcento.", p10_20);
        printf("\n%d mercadorias proporcionam o lucro >20 porcento.", p20);
        printf("\nO valor total de compra dos produtos é de %.2f reais.", gasto);
        printf("\nO valor total de venda dos produtos é de %.2f reais.", renda);
        
    return 0;
}
