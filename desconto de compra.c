#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{
   int numero, par, impar;
   printf("Informe um numero: ");
   scanf("%d", &numero);

   if(numero % 2 == 0)
   {
        printf("\nO numero informado é par.");
   }
    else
        {
            printf("\nO numero informado é impar.");
        }

}    
