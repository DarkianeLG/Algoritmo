//Escreva um programa que leia duas matrizes quadradas de ordem 5 de números reais e gere uma terceira matriz correspondente à soma das duas matrizes lidas.

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
void main(){
	float prim[QUANTIDADE][QUANTIDADE];
	float seg[QUANTIDADE][QUANTIDADE];
	float ter[QUANTIDADE][QUANTIDADE];
	int i,j;
	printf("Lendo a primeira matriz\n");
	for(i=0;i<QUANTIDADE;i++){
		for(j=0;j<QUANTIDADE;j++){
			printf("Informe um numero: ");
			scanf("%f", &prim[i][j]);
		}
	}
	
	printf("Lendo a segunda matriz\n");
	for(i=0;i<QUANTIDADE;i++){
		for(j=0;j<QUANTIDADE;j++){
			printf("Informe um numero: ");
			scanf("%f", &seg[i][j]);
		}
	}
	for(i=0;i<QUANTIDADE;i++){
		for(j=0;j<QUANTIDADE;j++){
			ter[i][j]= prim[i][j]+seg[i][j];
		}
	}
	printf("A terceira matriz eh\n");
	for(i=0;i<QUANTIDADE;i++){
		for(j=0;j<QUANTIDADE;j++){
			printf("%.1f ", ter[i][j]);
		}
		printf("\n");
	}
getch();
}
