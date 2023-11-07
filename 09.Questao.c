#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL,"portuguese");

   int i;
   int resultado;
   int divisao;

    printf("Digite um numero :");
    scanf("%i",&resultado);

    for ( i = 2; i < resultado; i++)
    {
        if (resultado % i == 0)
        {
        divisao++;       
        }
    }
       if (divisao == 2)
       {
        printf("Numero primro !!");
       }else{
        printf("Nao primo");
       }  
  

    return 0;
}