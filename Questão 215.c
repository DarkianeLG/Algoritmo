//O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de combust�vel. Escreva um programa que leia o valor da dist�ncia que Jo�o vai percorrer durante uma viagem e o pre�o
//atual de um litro de combust�vel e calcule quanto ele dever� gastar com combust�vel durante a viagem. O c�lculo deve ser realizado atrav�s de um subprograma.

#include<stdio.h>
#include<conio.h>
int const LITRO= 14;

float gasto(float distancia, float valor){
	 
	 float litroCombustivel= distancia/LITRO;
	 return litroCombustivel*valor;
	
}
void main (){
	float distancia, valor;
	printf("Informe a distancia em km que voce vai percorrer: ");
	scanf("%f", &distancia);
	printf("Agora, informe o valor atual de um litro de combustivel: ");
	scanf("%f", &valor);
	float gastoTotal= gasto(distancia, valor);
	printf("Joao ira gastar %.2f reais com combustivel durante a viagem", gastoTotal);
	
 getch();
	
}
