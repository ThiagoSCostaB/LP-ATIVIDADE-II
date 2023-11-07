#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

int numero;

printf("Digite um numero positivo :");
scanf("%i",&numero);

if (numero > 0)
{
   printf("Iniciar contagem %i: \n",numero);

   while (numero >= 0)
   {
    switch (numero)
    {
    case 0:
    printf("zero");
        break;
    
    default:
    printf("%i\n",numero);
        break;
    }
    numero--;
   }
   
}


    return 0;
}