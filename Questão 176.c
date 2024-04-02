//Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e imprima a matriz lida. 
#include<stdio.h>
#include<conio.h>
const int LINHA=4;
const int COLUNA=4;
void main (){
	int mat[LINHA][COLUNA];
	int i,j;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("Informe um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("A matriz eh\n");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("%d ", mat[i][j] );
		}
		printf("\n");
	}
getch();
}
