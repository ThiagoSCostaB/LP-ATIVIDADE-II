#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main() {

    
setlocale(LC_ALL,"portuguese");

float desconto;
char dia;
float compra;
float valorTotal;
    
    printf("A- Para final de semana \n");
    printf("B- para dia de semana\n");
    scanf("%c",&dia);

    
printf("Digite o valor da compra : ");
scanf("%f",&compra);        

        if (compra > 100) {
          if (dia == 'A'|| dia == 'b') {
              desconto = compra*0.10;  
          }else if (dia == 'B' || dia == 'b') {
              desconto = compra * 0.15;      
          }
    }
            
valorTotal = compra - desconto;

printf("valor da compra : R$ %.2f \n", compra);
printf("valor do Desconto : R$ %.2f \n", desconto);
printf("valor total depois do desconto : R$ %.2f \n", valorTotal);
    

    
    return 0;
}