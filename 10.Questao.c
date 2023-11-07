#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

int codigo;
float resultado;
float primeiroNumero;
float segundoroNumero;

   printf("-------Menu----------\n");
   printf("1- Soma \n");
   printf("2- Subtraçao\n");
printf("Digite o codigo :\n");  
   scanf("%i",&codigo);
   
   
   switch (codigo)
   {
   case 1:
    
    printf("Digite o primeiro numero \n");
    scanf("%f",&primeiroNumero);
    
    printf("Digite o Segundo numero \n");
    scanf("%f",&segundoroNumero);
   
   resultado = primeiroNumero + segundoroNumero;

printf("resultado : %.1f",resultado);
    break;
case 2:
   printf("Digite o primeiro numero \n");
    scanf("%f",&primeiroNumero);
    
    printf("Digite o Segundo numero \n");
    scanf("%f",&segundoroNumero);
   
   resultado = primeiroNumero - segundoroNumero;

printf("resultado %.1f",resultado);
  
  break;
  default:
  printf("opçao invalida!!");
   }


    return 0;
}