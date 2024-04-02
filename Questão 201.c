//Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
//solicitadas deve ser calculada através de um subprograma.
#include<stdio.h>
#include<conio.h>
#include<math.h>

int dobro (int num){
	return num*2;
}

int triplo (int num){
	return num*3;
}

int quadrado (int num){
	return pow(num,2);
}

int cubo (int num){
	return pow(num,3);
}

int raiz (int num){
	return sqrt (num);
}
void main (){
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	int valorDobro= dobro(num);
	int valorTriplo= triplo(num);
	int valorQuadrado= quadrado(num);
	int valorCubo= cubo(num);
	int valorRaiz= raiz(num);
	
	printf("O dobro eh %d\n", valorDobro);
	printf("O triplo eh %d\n", valorTriplo);
	printf("O quadrado eh %d\n", valorQuadrado);
	printf("O cubo eh %d\n", valorCubo);
	printf("A raiz eh %d\n", valorRaiz);
	
getch ();
		
}
