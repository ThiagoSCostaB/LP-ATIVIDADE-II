#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

int numero;


printf("---------Codigo de roupa---------\n");
printf("1- Camiseta \n");
printf("2- Calça \n");
printf("3- Sapato \n");
printf("Digite um codigo :");
scanf("%i",&numero);



switch (numero)
{
case 1:
    printf("Camiseta - R$ 60,00 reais");
    break;

case 2: 
printf("Calça - R$ 70,00 reais");
break;

case 3:
printf("Sapato - R$ 100,00 reais");
default:
printf("Codigo Invalido!!");
}

    return 0;
}