#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>


int main()
{
    
  setlocale(LC_ALL,"portuguese");

int temperatura;


printf("Digite um numero: \n");
scanf("%i",&temperatura);

if (temperatura > 25 )
{
    printf("Clima ensolarado!! \n");
}else if (temperatura < 15 )
{
    printf("Clima chuvoso!! \n");
}else if (temperatura < 25 || temperatura> 15 )
{
    printf("Clima nublado!! \n");
}

    return 0;
}