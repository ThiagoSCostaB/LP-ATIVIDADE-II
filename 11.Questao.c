#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

int codigo;

do
{
    printf("Digite o codigo de acesso: ");
    scanf("%i",&codigo);

system("cls || clear");

} while (codigo != 1589634);
printf("Acesso permitido ");


    return 0;
}