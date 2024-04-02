//Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados e gere um terceiro vetor também ordenado contendo todos os elementos dos dois
//vetores lidos. O terceiro vetor deve ter todos os elementos dois vetores, incluindo as repetições. 

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
void main (){
	int a[QUANTIDADE];
	int b[QUANTIDADE];
	int c[QUANTIDADE*2];
	int k;
	printf("Lendo o vetor A\n");
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero para o vetor A: ");
		scanf("%d", &a[k]);
		c[k]= a[k];
	}
	
	printf("\nLendo o vetor B\n");
	
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero para o vetor B: ");
		scanf("%d", &b[k]);
		c[QUANTIDADE+k]=b[k];
	}
	
	printf("\nEsse eh o vetor C:\n ");
	
	for(k=0; k<QUANTIDADE*2; k++){
	printf("%d ", c[k]);
	}
	getch();
	
}
