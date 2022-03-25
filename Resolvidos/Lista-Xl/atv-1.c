/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct Paciente
{
    int cod_paciente;
    char nome[80];
    char endereco[120];
    char telefone[14];
    int numero_medico;
}pacientes[5];
struct Medico
{
    int cod_medico, n_consultas;
    char nome[80];
    char telefone[14];
}medicos[3];
struct Consulta
{
    int num_consulta;
    int dia_semana;
    int hora; 
    int cod_medico;
    int cod_paciente;
}consultas[5];

void cadastra_medicos()
{
    srand(time(NULL));
    
    printf("///Cadastro de medicos///\n");
    for(int repet=0;repet<3;repet++)
    {
        medicos[repet].cod_medico=rand() %10000;
        
        printf("Digite o nome do %d° medico: ", repet+1);
        fgets(medicos[repet].nome,sizeof(medicos[repet].nome),stdin);
        
        printf("Digite o telefone do %d° medico: ", repet+1);
        fgets(medicos[repet].telefone,sizeof(medicos[repet].telefone),stdin);
        
    }
}
void cadastra_pacientes()
{
    int codigo_med;
    srand(time(NULL));
    
    printf("///Cadastro de pacientes e marcação de consultas///\n");
    for(int repet=0;repet<5;repet++)
    {
        pacientes[repet].cod_paciente=rand() %10000;
        for(int aux=0;aux<5;aux++)
        {
            if((pacientes[repet].cod_paciente==pacientes[aux].cod_paciente)&&(repet!=aux))
            {
                pacientes[repet].cod_paciente=rand() %10000;
            }
        }
        
        printf("Digite o nome do %d° paciente: ", repet+1);
        fgets(pacientes[repet].nome,sizeof(pacientes[repet].nome),stdin);
        
        printf("Digite o endereço do %d° paciente: ", repet+1);
        fgets(pacientes[repet].endereco,sizeof(pacientes[repet].endereco),stdin);
        
        printf("Digite o telefone do %d° paciente: ", repet+1);
        fgets(pacientes[repet].telefone,sizeof(pacientes[repet].telefone),stdin);
        
        printf("//Paciente cadastrado com sucesso//");
        printf("\n nome:%s end:%s tel:%s cod:%d\n\n",pacientes[repet].nome, pacientes[repet].endereco, pacientes[repet].telefone, pacientes[repet].cod_paciente);
        setbuf(stdin, NULL);
        
        do
        {
            printf("(1)-segunda-feira\n(2)-terça-feira\n(3)-quarta-feira\n(4)-quinta-feira\n(5)-sexta-feira\nQual dia da semana deseja marcar a consulta: ");
            scanf("%d", &consultas[repet].dia_semana);
        }while((consultas[repet].dia_semana>5)||(consultas[repet].dia_semana<1));
        
        printf("//Medico Codigos//\n");
        for(int aux=0;aux<3;aux++)
        {
            printf(" nome:%s cod:%d\n",medicos[aux].nome, medicos[aux].cod_medico);
        }
        setbuf(stdin, NULL);
        
        printf("\nDigite o codigo do medico que deseja marcar a consulta:");
        scanf("%d", &codigo_med);
        setbuf(stdin, NULL);
        for(int aux=0;aux<3;aux++)
        {
            if((codigo_med==medicos[aux].cod_medico)&&(medicos[aux].n_consultas<2))
            {
                medicos[repet].n_consultas++;
            }
        }
        
        pacientes[repet].numero_medico=codigo_med;
        do
        {
            printf("\nOBS:O formato da hora a ser digitado é de 24h.\n");
            
            printf("Qual hora deseja marcar a consulta: ");
            scanf("%d", &consultas[repet].hora);
            if((consultas[repet].hora>24)||(consultas[repet].hora<1))
            {
                printf("\nHorario invalido");
            }
        }while((consultas[repet].hora>24)||(consultas[repet].hora<1));
        
        consultas[repet].num_consulta=rand() %10000;
        printf("//Consulta marcada//");
        printf("\n Número da consulta:%d\n dia da semana:%d\n hora:%d\n codigo medicos:%d\n codigo paciente:%d\n", consultas[repet].num_consulta, consultas[repet].dia_semana, consultas[repet].hora, codigo_med, pacientes[repet].cod_paciente);
        setbuf(stdin, NULL);
    }
}
int main()
{
    for(int aux=0;aux<3;aux++)
    {
        medicos[aux].n_consultas=0;
    } 
    
    cadastra_medicos();
    
    cadastra_pacientes();
    printf("//Consultas da semana//");
    for(int repet=0;repet<5;repet++)
    {
        printf("\n Número da consulta:%d\n dia da semana:%d\n hora:%d\n codigo medicos:%d\n codigo paciente:%d\n", consultas[repet].num_consulta, consultas[repet].dia_semana, consultas[repet].hora, pacientes[repet].numero_medico, pacientes[repet].cod_paciente);
    }
    return 0;
}






