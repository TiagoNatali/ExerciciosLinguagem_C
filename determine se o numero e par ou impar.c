#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Um hotel cobra R$ 262,50 a diária e uma taxa de serviços conforme:
a.R$ 17,50 por dia se a quantidade de diárias for maior que 15;
b.R$ 18,75 por dia se a quantidade de diárias for igual a 15;
c.R$ 21,05 por dia se a quantidade de diárias for menor que 15;
Construa um programa em Linguagem C que mostre a quantidade de diárias, 
o valor de diárias, o valor da taxa de serviços
e o valor total a ser pago.*/

int main(void)

{
   float valor_diaria = 262.50;
   float taxa, total;
   int quantidade_diaria; 
   printf("\nInforme a quantidade de diarias: ");
   scanf("%i", &quantidade_diaria);
   
   if(quantidade_diaria > 15)
   {
    taxa = 17.50;
    total = ((taxa + valor_diaria)* quantidade_diaria);
    printf("\n%i dias hospedado com o a diaria de R$ %f.\n", quantidade_diaria, valor_diaria);
    printf("Taxa de serviço de R$ %f ao dia.\n", taxa);
    printf("Totalizando o valor de R$ %f.", total);
    

   }
   if(quantidade_diaria == 15)
   {
      taxa = 18,75;
      total = ((taxa + valor_diaria)* quantidade_diaria);
      printf("\n%i dias hospedado com a diaria de R$ %f.\n", quantidade_diaria, valor_diaria);
      printf("Taxa de serviço de R$ %f ao dia.\n",taxa);
      printf("Totalizando o valor de R$ %f.", total);
   }
   if(quantidade_diaria < 15)
   {
      taxa = 21.05;
      total = ((taxa + valor_diaria) * quantidade_diaria);
      printf("\n%i dias hospedado com diaria de R$ %f\n", quantidade_diaria, valor_diaria);
      printf("Taxa de serviço de R$ %f ao dia.\n", taxa);
      printf("Totalizando o valor de R$ %f.", total);
   }
}    
