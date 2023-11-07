#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>

int main()
{

setlocale(LC_ALL,"portuguese");

int nota;


printf("Digite sua nota: \n");
scanf("%i",&nota);

if (nota >= 9 )
{
  printf("Excelente!!");
}if (nota >= 7 && nota <= 8.9)
{
  printf("Bom!!");
}if (nota >= 5 && nota <= 6.9)
{
   printf("Razoalvel!!");
}else if (nota < 5)
{
printf("insuficiente!!");
}


    return 0;
}