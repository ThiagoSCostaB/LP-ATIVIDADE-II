#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

int codigo;


printf("---------Menu---------\n");
printf("1- Novo jogo \n");
printf("2- Carregar jogo\n");
printf("3- configuraçoes \n");
printf("Digite um codigo :");
scanf("%i",&codigo);


switch (codigo)
{
case 1:
    printf("Novo jogo ");
    break;

case 2:
printf("Carregando jogo");
break;
case 3:
printf("Abrindo configuraçoes");
break;
default:
printf("Opçao invalida !!");
}


    return 0;
}