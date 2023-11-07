#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese");

int numero;

printf("---------Idiomas---------\n");
printf("1- Ingles \n");
printf("2- Espanhol \n");
printf("3- Frances \n");
printf("escolha um Idioma :");
scanf("%i",&numero);

switch (numero)
{
case 1:
    printf("Welcome !!");
    break;
 case 2:
 printf("Bienvenido !!");
 break;   

 case 3:
 printf("Accueillir !!");
default:
printf("Codigo invaido!!");
}


    return 0;
}