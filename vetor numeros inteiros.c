#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
/*
6 - Faça um programa que leia um vetor de caracteres de 20 posições e inverta a 1ª
posição com a 20ª, a 2ª com a 19ª, e assim por diante. Imprima o vetor antes e depois
da inversão; */ 

{
    char vetor_p[5];
    char vetor_i[5];
    int contador, aux=0;
    printf("\n Informe a String: ");
    scanf("%s", vetor_p);

    for(contador=strlen(vetor_p)-1;contador>=0;contador--)
        {
            vetor_i[aux] = vetor_p[contador];
            aux += 1;
        }
    vetor_i[aux] = '\0';

    printf("\n String Invertida: [%s]", vetor_i);
    return 0;    
}
