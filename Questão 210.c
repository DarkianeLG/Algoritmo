//Em uma determinada cidade, cada m2 de um terreno est� avaliado em R$ 50,00. Escreva um programa que leia o comprimento e a largura de um terreno localizado
//nesta cidade e calcule o seu valor de mercado. O c�lculo deve ser realizado atrav�s de um subprograma, que deve receber como entrada o comprimento e a largura do terreno.
#include<stdio.h>
#include<conio.h>
const int VALORMETRO= 50;
float valor(float comprimento, float largura){
	
	float tamanho= comprimento*largura;
	float valorT= tamanho*VALORMETRO;
	return valorT;
}
void main (){
	float comprimento, largura;
	printf("Informe o comprimento do terreno: ");
	scanf("%f", &comprimento);
	printf("Agora, informe a largura do terreno: ");
	scanf("%f", &largura);
	float valorTerreno= valor(comprimento, largura);
	printf("O valor do terreno eh %.2f reais", valorTerreno);
getch ();
}

