#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL,"portuguese");


int maiorNumero ;
int menorNumero ;
int primeiroNumero;
int segundoNumero;

do
{   

      printf("Digite o primeiro Numero : ");
       scanf("%i",&primeiroNumero);
        
       printf("Digite o segundo Numero : ");
       scanf("%i",&segundoNumero);
        
} while (primeiroNumero < 0 || segundoNumero < 0);
       
    maiorNumero = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menorNumero = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    
printf("Maior Numero : %i\n", maiorNumero);
printf("Menor Numero : %i\n", menorNumero);
    

    return 0;
}