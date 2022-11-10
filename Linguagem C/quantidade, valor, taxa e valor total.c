#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia 3 valores reais e verifique se eles permitem formar um triângulo. 
Caso seja possível, especificar o tipo de triângulo que será formado. Para que os valores possam 
representar os lados de um triângulo, é necessário que um dos lados seja menor que a soma
dos outros 2 lados. Um triângulo pode ser classificado como equilátero, quando todos os lados
são iguais; isósceles, quando apenas 2 lados são iguais; e escaleno, quando todos os lados são
diferentes*/

int main(void)

{
   float p,q ,r;
   
      printf("\nInforme o valor de p: ");
      scanf("%f", &p);
      printf("\nInforme o valor de q: ");
      scanf("%f", &q);
      printf("\nInforme o valor de r: ");
      scanf("%f",&r);
   
      if( p < (q + r) || q < (p + r) || r < (p + q))
   {
         if(p == q == r)
      {
            printf("\nOs valores informados formam o triangulo equilatero.");
         }
         if( (p == q && r != p) || ( p == r && q != p) || ( q == r && p != r))
      {
            printf("\nOs valores infomados formam o triangulo isosceles.");
         }
         if( p != q && p != r && q != r)
      {
            printf("\nOs valores informados formam o triangulo escaleno.");
         }
   }
   else
   {
      printf("\nOs valores informados nao podem formar nenhum triangulo");
   }
}