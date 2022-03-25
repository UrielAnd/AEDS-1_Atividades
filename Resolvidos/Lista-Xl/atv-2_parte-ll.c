/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct Vendedor
{
    char nome[100];
    int cod;
    int meses[12];
}vendedores[4];

void cadastra_vendedor()
{
    FILE* arq;
    arq=fopen("vededores.txt","a");
    srand(time(NULL));
    
    for(int repet=0;repet<4;repet++)
    {
        vendedores[repet].cod=rand() %10000;
        for(int aux=0;aux<4;aux++)
        {
            if((vendedores[repet].cod==vendedores[aux].cod)&&(repet!=aux))
            {
                vendedores[repet].cod=rand() %10000;
            }
        }
        
        printf("Digite o nome do vendedor: ");
        fgets(vendedores[repet].nome,sizeof(vendedores[repet].nome),stdin);
        fprintf(arq,"Nome:%s Codigo:%d", vendedores[repet].nome, vendedores[repet].cod);
        setbuf(stdin,NULL);
    }
    fclose(arq);
    
}
void cadastra_venda()
{
    FILE* arq;
    arq=fopen("vendas.txt","a");

    int cod_verifica, mes;
    do
    {
        printf("**********************\n//Vendedores//\n**********************\n");
        for(int repet=0;repet<4;repet++)
        {
            printf("Nome:%s Cod:%d", vendedores[repet].nome, vendedores[repet].cod);
        }
        
        printf("\nDigite o cod do vendedor que deseja cadastrar as vendas: ");
        scanf("%d", &cod_verifica);
        setbuf(stdin,NULL);
        
    }while((cod_verifica!=vendedores[0].cod)&&(cod_verifica!=vendedores[1].cod)&&(cod_verifica!=vendedores[2].cod)&&(cod_verifica!=vendedores[3].cod));
    do
    {
        printf("Digite o mês da venda:");
        scanf("%d", &mes);
        if((mes>12)||(mes<1))
        {
            printf("**********************\nErro-Mes Inválido\n**********************\n");
        }
    }while((mes>12)||(mes<1));  
    
    if(cod_verifica==vendedores[0].cod)
    {
        printf("Qual o valor da venda feita no mes %d: ", mes);
        scanf("%d", &vendedores[0].meses[mes]);
        fprintf(arq,"Codigo:%d mês:%d valor da venda:%d", cod_verifica, mes, vendedores[0].meses[mes] );
    }
    else if(cod_verifica==vendedores[1].cod)
    {
        printf("Qual o valor da venda feita no mes %d: ", mes);
        scanf("%d", &vendedores[1].meses[mes]);
        fprintf(arq,"Codigo:%d mês:%d valor da venda:%d", cod_verifica, mes, vendedores[1].meses[mes] );
    }
    else if(cod_verifica==vendedores[2].cod)
    {
        printf("Qual o valor da venda feita no mes %d: ", mes);
        scanf("%d", &vendedores[2].meses[mes]);
        fprintf(arq,"Codigo:%d mês:%d valor da venda:%d", cod_verifica, mes, vendedores[2].meses[mes] );
    }
    else if(cod_verifica==vendedores[3].cod)
    {
        printf("Qual o valor da venda feita no mes %d: ", mes);
        scanf("%d", &vendedores[3].meses[mes]);
        fprintf(arq,"Codigo:%d mês:%d valor da venda:%d", cod_verifica, mes, vendedores[3].meses[mes] );
    }
    
    fclose(arq);
}
void consulta_mes ()
{
    int cod_verifica, mes;
    do
    {
        printf("**********************\n//Vendedores//\n**********************\n");
        for(int repet=0;repet<4;repet++)
        {
            printf("Nome:%s Cod:%d", vendedores[repet].nome, vendedores[repet].cod);
        }
        
        printf("\nDigite o cod do vendedor saber as vendas de um mes: ");
        scanf("%d", &cod_verifica);
    }while((cod_verifica!=vendedores[0].cod)&&(cod_verifica!=vendedores[1].cod)&&(cod_verifica!=vendedores[2].cod)&&(cod_verifica!=vendedores[3].cod));
    do
    {
        printf("Qual mes deseja saber do valor da venda desse vendedor: ");
        scanf("%d", &mes);
        if((mes>12)||(mes<1))
        {
            printf("**********************\nErro-Mes Inválido\n**********************\n");
        }
    }while((mes>12)||(mes<1));
    
    if(cod_verifica==vendedores[0].cod)
    {
        printf("A venda desse vendedor nesse mes foi de: R$%d", vendedores[0].meses[mes]);
        
    }
    else if(cod_verifica==vendedores[1].cod)
    {
        printf("A venda desse vendedor nesse mes foi de: R$%d", vendedores[1].meses[mes]);
    }
    else if(cod_verifica==vendedores[2].cod)
    {
        printf("A venda desse vendedor nesse mes foi de: R$%d", vendedores[2].meses[mes]);
    }
    else if(cod_verifica==vendedores[3].cod)
    {
        printf("A venda desse vendedor nesse mes foi de: R$%d", vendedores[3].meses[mes]);
    }
}
void total_de_vendas()
{
    FILE* arq;
    arq=fopen("vendas.txt","a");
    
    int cod_verifica, mes, soma=0;
    do
    {
        printf("**********************\n//Vendedores//\n**********************\n");
        for(int repet=0;repet<4;repet++)
        {
            printf("Nome:%s Cod:%d", vendedores[repet].nome, vendedores[repet].cod);
        }
        
        printf("\nDigite o cod do vendedor saber o total vendas: ");
        scanf("%d", &cod_verifica);
    }while((cod_verifica!=vendedores[0].cod)&&(cod_verifica!=vendedores[1].cod)&&(cod_verifica!=vendedores[2].cod)&&(cod_verifica!=vendedores[3].cod));
    
    if(cod_verifica==vendedores[0].cod)
    {
        for(int repet=0;repet<12;repet++)
        {
            soma+=vendedores[0].meses[repet];
        }
        printf("O total de venda desse vendedor é R$%d", soma);
    }
    else if(cod_verifica==vendedores[1].cod)
    {
        for(int repet=0;repet<12;repet++)
        {
            soma+=vendedores[1].meses[repet];
        }
        printf("O total de venda desse vendedor é R$%d", soma);
    }
    else if(cod_verifica==vendedores[2].cod)
    {
        for(int repet=0;repet<12;repet++)
        {
            soma+=vendedores[2].meses[repet];
        }
        printf("O total de venda desse vendedor é R$%d", soma);
    }
    else if(cod_verifica==vendedores[3].cod)
    {
        for(int repet=0;repet<12;repet++)
        {
            soma+=vendedores[3].meses[repet];
        }
        printf("O total de venda desse vendedor é R$%d", soma);
    }
    fprintf(arq,"Codigo:%d mês:%d valor total da venda:%d", cod_verifica, mes, soma );
    fclose(arq);
}   
void vendedor_campeao()
{
    int mes, maior=0, cod_verifica=0;
    do
    {
        printf("Qual mes deseja saber quem mais vendeu: ");
        scanf("%d", &mes);
        if((mes>12)||(mes<1))
        {
            printf("**********************\nErro-Mes Inválido\n**********************\n");
        }
    }while((mes>12)||(mes<1));
    
    for(int repet=0;repet<4;repet++)
    {
        if(vendedores[repet].meses[mes]>maior)
        {
            cod_verifica=vendedores[repet].cod;
            maior=vendedores[repet].meses[mes];
        }
    }
    printf("\nO n° do vendedor que mais vendeu nesse mes é: %d\n", cod_verifica);
}
void mes_maior_venda()
{
    int soma, mes, maior=0;
    
    for(int repet=0;repet<12;repet++)
    {
        soma=0;
        for(int aux=0;aux<4;aux++)
        {
            soma+=vendedores[aux].meses[repet];
        }
        if(soma>maior)
        {
            maior=soma;
            mes=repet;
        }
    }
    printf("O mes com maior n° de vendas é o mes %d", mes);
}
int main()
{
    
    int escolha;
    while(escolha!=7)
    {
        
        printf("-------------------------------------------------------------------------------------------------\n1.Cadastrar vendedor. \n2.Cadastrar venda. \n3.Consultar as vendas de um funcionário em determinado mês. \n4.Consultar o total das vendas de determinado vendedor. \n5.Mostrar o número do vendedor que mais vendeu em determinado mês. \n6.Mostrar o número do mês com mais vendas. \n7.Finalizar o programa.\n-------------------------------------------------------------------------------------------------");
        printf("\nDigite: ");
        scanf("%d", &escolha);
        setbuf(stdin,NULL);
        
        switch(escolha)
        {
            case 1:
                cadastra_vendedor();
            break;
            case 2:
                cadastra_venda();
            break;
            case 3:
                consulta_mes ();
            break;
            case 4:
                total_de_vendas();
            break;
            case 5:
                vendedor_campeao();
            break;
            case 6:
                mes_maior_venda();
            break;
            case 7:
                printf("**********************\n//Muito Obrigado :)//\n**********************");
            break;
            default:
                printf("**********************\n//Ação Invalida//\n**********************");
            break;
            
            
        }
    }    
    return 0;
}



