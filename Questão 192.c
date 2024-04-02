//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e um número real N e gere uma terceira matriz correspondente à multiplicação da matriz lida por N.

#include<stdio.h>
#include<conio.h>
const int LINHA=5;
const int COLUNA=5;
void main (){
	float prim[LINHA][COLUNA];
	int i,j;
	int num;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("Informe um numero: ");
			scanf("%f", &prim[i][j]);
		}
	}
	printf("Agora informe um numero para multiplicar a matriz: ");
	scanf("%d", &num);
	
	float seg[LINHA][COLUNA];
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			seg[i][j]= prim[i][j]*num;
		}
	}
	printf("A segunda matriz com a multiplicacao eh:\n");
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("%.1f ",seg[i][j]);
		}
		printf("\n");
	}
getch();
}
