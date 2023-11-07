#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
int quantidadeNotas;
int i;
float notas;
float somaNotas;
float media;

    printf("Digite a quantidade de notas : ");
    scanf("%i",&quantidadeNotas);

    for ( i = 0; i < quantidadeNotas; i++)
    {
        printf("Digite a %i° nota : ", i + 1);
        scanf("%f",&notas);
      
      somaNotas+= notas;
    }
    
    media = somaNotas / (float) quantidadeNotas;

   printf("Media de Notas : %.2f\n", media);

    return 0;
}