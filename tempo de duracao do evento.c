#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{
    setlocale(LC_ALL, "Portuguese");

    int tempo_segundos, tempo_minutos, tempo_horas;
    
    printf("\nInforme o tempo em segundos do evento na fabrica: ");
    scanf("%d", &tempo_segundos);
    
    tempo_minutos = tempo_segundos / 60;
    tempo_horas = tempo_minutos / 60;

    printf("\nO evento na fabrica durou %i horas, %i minutos e %i segundos.\n", 
    tempo_horas, tempo_minutos, tempo_segundos);
}