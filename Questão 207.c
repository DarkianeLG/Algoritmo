//Escreva um programa que leia um valor em polegadas e o converta para cent�metros, considerando que uma polegada equivale a 2.54 cm. A convers�o deve ser realizadaatrav�s de um subprograma.

#include<stdio.h>
#include<conio.h>

float centimetros(int polegada){
	return polegada*2.54;
}

void main(){
	int polegada;
	
	printf("Informe o valor da polegada: ");
	scanf("%d", &polegada);
	float valorCentimetros= centimetros(polegada);
	printf("%d polegada tem %.2f centimetros", polegada, valorCentimetros);
	
getch ();
}
