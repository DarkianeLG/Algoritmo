//Escreva um programa que leia um vetor de dez números reais (centrado na origem do plano cartesiano) e calcule o valor do seu módulo.

#include<stdio.h>
#include<conio.h>
#include<math.h>
int const QUANTIDADE=10;
void main(){
	float vet[QUANTIDADE];
	int k;
	float soma=0;
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%f", &vet[k]);
	}
	for(k=0; k<QUANTIDADE; k++){
		soma= soma + pow(vet[k],2);
	
	}
	float modulo= sqrt(soma);	
	printf("O modulo do vetor eh: %.1f", modulo);
		
}
