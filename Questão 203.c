//Escreva um programa que leia o valor da base e da altura de um tri�ngulo e calcule a sua �rea, que deve ser calculada atrav�s de um subprograma.

#include<stdio.h>
#include<conio.h>
float area (float base, float altura){
	return (base*altura)/2;
}
void main(){
float base, altura;
printf("Informe o valor da base do triangulo: ");
scanf("%f", &base);
printf("Agora informe o valor da altura: ");
scanf("%f", &altura);
float valorArea= area(base, altura);

printf("A area do triangulo eh %.1f", valorArea);

getch ();
}

