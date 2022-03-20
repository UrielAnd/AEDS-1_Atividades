/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int vezes;                    
    vezes=0;  
    numero=0;
    while(vezes<=118)                
    {
       if((vezes>=0)&&(vezes<=10))
       {
           int resposta;
           resposta=1*numero;
           printf("\n1*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==11)
       {
           numero=0;
       }
       else if((vezes>11)&&(vezes<=22))
       {
           
           int resposta;
           resposta=2*numero;
           printf("\n2*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==23)
       {
           numero=0;
       }
        else if((vezes>23)&&(vezes<=34))
       {
           
           int resposta;
           resposta=3*numero;
           printf("\n3*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==35)
       {
           numero=0;
       }
       else if((vezes>35)&&(vezes<=46))
       {
           
           int resposta;
           resposta=4*numero;
           printf("\n4*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==47)
       {
           numero=0;
       }
       else if((vezes>47)&&(vezes<=58))
       {
           
           int resposta;
           resposta=5*numero;
           printf("\n5*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==59)
       {
           numero=0;
       }
       else if((vezes>59)&&(vezes<=70))
       {
           
           int resposta;
           resposta=6*numero;
           printf("\n6*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==71)
       {
           numero=0;
       }
       else if((vezes>71)&&(vezes<=82))
       {
           
           int resposta;
           resposta=7*numero;
           printf("\n7*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==83)
       {
           numero=0;
       }
       else if((vezes>83)&&(vezes<=94))
       {
           
           int resposta;
           resposta=8*numero;
           printf("\n8*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==95)
       {
           numero=0;
       }
       else if((vezes>95)&&(vezes<=106))
       {
           
           int resposta;
           resposta=9*numero;
           printf("\n9*%d=%d", numero, resposta);
           numero++;
           
       }
       else if(vezes==107)
       {
           numero=0;
       }
       else if((vezes>107)&&(vezes<=118))
       {
           
           int resposta;
           resposta=10*numero;
           printf("\n10*%d=%d", numero, resposta);
           numero++;
           
       }
        vezes++;
    }

    return 0;
}


