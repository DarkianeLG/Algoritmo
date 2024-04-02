//Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da unidade de milhar, da centena, da dezena e da unidade. O programa deve ter
//subprogramas para calcular cada informado solicitada. 

#include<stdio.h>
#include<conio.h>

int milhar(int num){
  return num/1000;
}
int cetena(int num){
	int resto= num%1000;
	return resto/100;
}
int dezena(int num){
	int resto= num%100;
	int resto1= resto%100;
	return resto1/10;
}
int unidade(int num){
	int resto= num%100;
	int resto1= resto%100;
	return resto1%10;
}
void main (){
	int num;
	
	printf("Informe um numero entre 1 e 9999: ");
	scanf("%d", &num);
	int valorMilhar= milhar(num);
	int valorCetena= cetena(num);
	int valorDezena= dezena(num);
	int valorUnidade= unidade(num);
	printf("A unidade de minhar eh %d\n", valorMilhar);
	printf("A unidade da cetena eh %d\n", valorCetena);
	printf("A unidade da dezena eh %d\n", valorDezena);
	printf("A unidade da unidade eh %d\n", valorUnidade);
 getch ();
}
