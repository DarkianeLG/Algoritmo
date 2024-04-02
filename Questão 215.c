//O carro de João consegue percorrer em média 14 km consumindo 1 litro de combustível. Escreva um programa que leia o valor da distância que João vai percorrer durante uma viagem e o preço
//atual de um litro de combustível e calcule quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser realizado através de um subprograma.

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
