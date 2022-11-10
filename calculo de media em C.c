#include <stdio.h>    
#include <stdlib.h>
#include <locale.h>
int main(void)
{ 
	int prova_1, prova_2, prova_3;
	printf("Informe a nota da prova 1: ");
	scanf("%d", &prova_1);
	printf("Informe a nota da prova 2: ");
	scanf("%d", &prova_2);
	printf("Informe a nota da prova 3: ");
	scanf("%d", &prova_3);
	
	// Peso da prova 1 = 2, peso da prova 2 = 4, peso da prova 3 = 6
	// Multiplicar a nota das provas pelo peso das questões
	// Somar o resultado da multiplição e divdir pela soma dos pesos para encontrar a media
	
	int soma_nota = (prova_1 * 2) + (prova_2 * 4 ) + (prova_3 * 6);
	int media = (soma_nota) / (2 + 4 + 6);
		
	printf("\nA media final das provas = %d", media);
		
}