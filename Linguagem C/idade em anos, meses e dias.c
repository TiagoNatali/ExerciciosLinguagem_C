#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>

int main(void)
{ 
    setlocale(LC_ALL, "Portuguese");

    int idade_a;

    printf("\nInforme a idade da pessoa em anos: ");
    scanf("%d",&idade_a);

    int idade_m = idade_a * 12;
    int idade_d = idade_m * 30;

    printf("A pessoa tem %d anos, %d meses e %d dias.", idade_a, idade_m, idade_d);
} 
