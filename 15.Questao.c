#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL,"portuguese");

    int codigo;
    float Fh;
    float milhas;
    float celsius;
    float km;

  do
  {
    printf("---------Medidas---------\n");
    printf("1- KM para milhas \n");
    printf("2- FH para celsius \n");
    scanf("%i",&codigo);

    switch (codigo)
    {
    case 1:
    printf("Digite os Km : ");
    scanf("%f",&km);

    milhas = km * 0.621371;

    printf("Milhas: %f \n", milhas);
    break;
    

    case 2:
    printf("Digite os graus celsius : ");
    scanf("%f",&celsius);

    Fh = (celsius * 9 / 5) + 32;

    printf("Graus celsius : %f \n",Fh);

break;


    }

  } while (codigo != 0);

    return 0;
}