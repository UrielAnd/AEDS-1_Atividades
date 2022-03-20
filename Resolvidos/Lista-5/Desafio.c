/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>//||---------------------------||//
#include <locale.h>//||INCLUSÂO DAS BIBLIOTECAS||//
#include <math.h>//||----------------------------||//

void soma_numeros(float num1,float num2)        //sub-rotina que soma um n° por outro n°.//
{
    float soma;                //Varável armazena a soma dos n°s.//
    soma=num1+num2;            //conta.//
    printf("%.2f+%.2f=%.2f", num1, num2, soma);  //Primt da reposta.//
}
void subt_numeros(float num1,float num2)      //sub-rotina que subtrai um n° por outro n°.//
{
    float subt;                 //Varável armazena a subtração dos n°s.//
    subt=num1-num2;             //conta.//
    printf("%.2f-%.2f=%.2f", num1, num2, subt); //Primt da reposta.//
}
void multi_numeros(float num1,float num2)    //sub-rotina que multiplica um n° por outro n°.//
{
    float multi;                //Varável armazena a multiplicação dos n°s.//
    multi=num1*num2;            //conta.//
    printf("%.2f*%.2f=%.2f", num1, num2, multi); //Primt da reposta.//
}
void divi_numeros(float num1,float num2)    //sub-rotina que divide um n° por outro n°.//
{
    float divi;                //Varável armazena a divisão dos n°s.//
    divi=num1/num2;            //conta.//
    printf("%.2f/%.2f=%.2f", num1, num2, divi);  //Primt da reposta.//
}
void raiz_quadrada(float num1)              //sub-rotina que descobre raiz quadrada de um n°.//
{
    float raiz;                 //Varável que armazena a raiz do n°.//
    raiz=sqrt(num1);            //conta.//
    printf("A raiz quadrada de %.2f é %.2f", num1, raiz);  //Primt da reposta.//
}
void pot_numero(float num1, float num2)   //sub-rotina que descobre a potencia de um n° elevado a outro n°.//
{
    float pot;                  //Varável armazena a potencia do n°.//
    pot=pow(num1,num2);         //conta.//
    printf("%.2f elevado a %.2f é %.2f", num1, num2, pot);   //Primt da reposta.//
}
void seno_numero(float num1)             //sub-rotina que descobre o seno de um n°.//
{
    float seno;                 //Varável armazena o seno do n°.//
    seno=sin(num1);             //conta.//    
    printf("O seno de %.2f é %.2f", num1, seno);    //Primt da reposta.//
}
void cosseno_numero(float num1)         //sub-rotina que descobre o cosseno de um n°.//
{
    float cosseno;             //Varável armazena o cosseno do n°.//
    cosseno=cos(num1);         //conta.//
    printf("O cosseno de %.2f é %.2f", num1, cosseno);   //Primt da reposta.//
}
void hipotenusa_de_um_triangulo(float num1, float num2)             //sub-rotina que descobre a hipotenusa de um triangulo.//
{
    float hipotenusa;          //Varável armazena a hipotenusa do triangulo.//         
    hipotenusa=sqrt(pow(num1,2)+pow(num2,2));             //conta.//
    printf("A hipotenusa desse triangulo é %.2f", hipotenusa);   //Primt da reposta.//
}
void tangente_numero(float num1)        //sub-rotina que descobre a tangencia de um n°.//
{
    float tangente;           //Varável armazena a tangencia do n°.//
    tangente=tan(num1);       //conta.//
    printf("A tangencia de %.2f é %.2f", num1, tangente);    //Primt da reposta.//
}
void log_numero(float num1)             //sub-rotina que descobre o log de um n°.//
{
    int escolha;              //Varável de escolha.//
    printf("você deseja um LOG NATURAL(1) ou LOG NA BASE 10 (2)");      //Escolha do log pelo usuario.//
    scanf("%d", &escolha);
    if(escolha==1)
    {
        float logN;          //Varável armazena o log do n°.//
        logN=log(num1);      //conta.//
        printf("O log natural de %.2f é %.2f", num1, logN);   //Primt da reposta.//
    }
    else if(escolha==2)
    {
        float logN;         //Varável armazena o log do n°.//
        logN=log10(num1);   //conta.//
        printf("O log de %.2f na base 10 é %.2f", num1, logN);   //Primt da reposta.//
    }
    else
    {
        printf("ERRO");  //Resposta invalida.//
    }
}
void area_retangulo(float num1, float num2)               //sub-rotina que descobre a área de um retangulo.//
{
    float area;             //Varável armazena a área do retangulo.//
    area=num1*num2;         //conta.//
    printf("A área desse retangulo é de %.2fm².", area);
}
void area_circulo(float num1)                            //sub-rotina que descobre a área de um circulo.//
{
    float area;             //Varável armazena a área do circulo.//
    area=2*3.14*num1;       //conta.//
    printf("A área dessa circunferência é de %.2fm².", area);
}
void fatoria_numero(float num1)                         //sub-rotina que descobre o fatorial de um n°.//
{
    int fatorial;          //Varável armazena o fatorial do n°.//
    int aux;               //Variável auxiliar//
    aux=num1;              //conta.//
    for(int repet=num1-1;repet>=1;repet--)
    {
        fatorial=repet*aux;     //conta.//
        aux=fatorial;           //conta.//
    }
    printf("O fatorial de %.2f é %d", num1, aux);
}
int main()     //||~~PROGRAMA PRINCIPAL~~||//
{   
    setlocale(LC_ALL,"portuguese");
    int oper;      //||Variável que recebe a opção do usuario||//
    float num1;    //||Variável que recebe o valor do usuario||//
    float num2;    //||Variável que recebe o valor do usuario||//
    do             //CICLO DE REPETIÇÃO//
    {
        printf("\n(1)-Soma.");                                  //||               ||//
        printf("\t(2)-Subtração.");                             //||               ||//
        printf("\t(3)-Multiplicação.");                         //||               ||//
        printf("\t(4)-Divisão.");                               //||               ||//
        printf("\t(5)-Raiz quadrada.");                         //||               ||//
        printf("\t(6)-Potência.");                              //||               ||//
        printf("\t(7)-Seno.");                                  //||               ||//
        printf("\t(8)-Cosseno.");                               //||MENU DO USUARIO||//
        printf("\t(9)-Hipotenusa de um triângulo retângulo.");  //||               ||//
        printf("\t(10)-Tangente.");                             //||               ||//
        printf("\t(11)-Logaritmo.");                            //||               ||//
        printf("\t(12)-Area de um retângulo.");                 //||               ||//
        printf("\t(13)-Área de uma circunferência.");           //||               ||//
        printf("\t(14)-Fatorial.");                             //||               ||//
        printf("\t(0)-Sair.");                                  //||               ||//
        
        printf("\nDigite o tipo de operação que deseja realizar: ");        //Área onde o usuario escolhe//
        scanf("%d", &oper);
        
        switch(oper)      //||CONDIÇÃO||//
        {
            case 1:                                            //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o primeiro n°: ");                                        
                scanf("%f", &num1);                                                        
                printf("\nDitite o segundo n°: ");
                scanf("%f", &num2);
                soma_numeros(num1,num2);        //PEGA A SUB-ROTINA//
                break;
            case 2:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o primeiro n°: ");
                scanf("%f", &num1);
                printf("\nDitite o segundo n° para subtrair o primeiro: ");
                scanf("%f", &num2);
                subt_numeros(num1,num2);       //PEGA A SUB-ROTINA//
                break;
            case 3:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o primeiro n°: ");
                scanf("%f", &num1);
                printf("\nDitite o segundo n°: ");
                scanf("%f", &num2);
                multi_numeros(num1,num2);      //PEGA A SUB-ROTINA//
                break;
            case 4:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o primeiro n°(O primeiro número vai ser dividido pelo segundo n°): ");
                scanf("%f", &num1);
                printf("\nDitite o segundo n° para dividir o primeiro n°: ");
                scanf("%f", &num2);
                divi_numeros(num1,num2);      //PEGA A SUB-ROTINA//
                break;
            case 5:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o primeiro n°: ");
                scanf("%f", &num1);
                raiz_quadrada(num1);         //PEGA A SUB-ROTINA//
                break;
            case 6:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o n° que quer elevar: ");
                scanf("%f", &num1);
                printf("\nDitite o n° da elevação: ");
                scanf("%f", &num2);
                pot_numero(num1,num2);       //PEGA A SUB-ROTINA//
                break;
            case 7:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o grau que deseja saber seno: ");
                scanf("%f", &num1);
                seno_numero(num1);          //PEGA A SUB-ROTINA//
                break;
            case 8:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o grau que deseja saber o cosseno: ");
                scanf("%f", &num1);
                cosseno_numero(num1);      //PEGA A SUB-ROTINA//
                break;
            case 9:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o valor do primeiro cateto: ");
                scanf("%f", &num1);
                printf("\nDitite o valor do segundo cateto: ");
                scanf("%f", &num2);
                hipotenusa_de_um_triangulo(num1,num2);        //PEGA A SUB-ROTINA//
                break;
            case 10:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o grau que deseja saber a tangencia: ");
                scanf("%f", &num1);
                tangente_numero(num1);    //PEGA A SUB-ROTINA//
                break;
            case 11:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o n° que deseja saber o logaritimo: ");
                scanf("%f", &num1);
                log_numero(num1);        //PEGA A SUB-ROTINA//
                break;
            case 12:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o primeiro lado do retangulo: ");
                scanf("%f", &num1);
                printf("\nDitite o segundo lado do retangulo: ");
                scanf("%f", &num2);
                area_retangulo(num1,num2);    //PEGA A SUB-ROTINA//
                break;
            case 13:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o valor do raio da circunferência: ");
                scanf("%f", &num1);
                area_circulo(num1);       //PEGA A SUB-ROTINA//
                break;
            case 14:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nDitite o n° que deseja saber o fatorial: ");
                scanf("%f", &num1);
                fatoria_numero(num1);     //PEGA A SUB-ROTINA//
                break;
            case 0:                                           //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nObrigado :)");
                break;
            default:                                          //||CONDIÇÃO DA ESCOLHA DO USUARIO.||//
                printf("\nERRO");
        }
    }while(oper!=0);                       //CICLO DE REPETIÇÃO//

    return 0;
}




