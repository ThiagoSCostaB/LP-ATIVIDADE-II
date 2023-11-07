#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL,"portuguese");

int numero;
int par;
int impar;
float somaPar = 0;
float somaImpar = 0;
int contaPar = 0;
int contaImpar = 0 ;
float mediaPar = 0;
float mediaImpar = 0;

do{
    printf("Digite os numeros: \n");
    scanf("%i",&numero);

    if(numero != 0){

    if(numero % 2 == 0 ){

     contaPar++;
     somaPar+= + numero;

    }else{
     contaImpar++;
     somaImpar+= + numero;

    }

}
    } while (numero != 0 );

    mediaPar = (float) somaPar/ contaPar;
    mediaImpar =(float) somaImpar/ contaImpar;

printf("Quantidade de numeros pares: %i\n", contaPar);
printf("Quantidade de numeros Impares: %i\n", contaImpar);
printf("Media de numero par : %.2f\n", mediaPar);
printf("Media de numero impar %.2f: \n",mediaImpar);





return 0;
}   
