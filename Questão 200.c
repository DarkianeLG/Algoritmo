//Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o seu perímetro. O programa deve ter um subprograma para calcular a área e outro para calcular o perímetro.

#include<stdio.h>
#include<conio.h>

float area (float lado){
	return lado*lado;
}
float perimetro (float lado){
	return 4*lado;
}

void main (){
	float lado;
	printf("Informe o valor do lado do quadrado: ");
	scanf("%f", &lado);
	float valorArea= area(lado);
	float valorPerimetro= perimetro(lado);
	
	printf("A area do quadrado eh %.1f\n", valorArea);
	printf("O perimetro do quadrado eh %.1f", valorPerimetro);
 getch ();
}
