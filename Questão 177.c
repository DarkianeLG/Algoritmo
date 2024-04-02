//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e calcule a sua matriz transposta.

#include<stdio.h>
#include<conio.h>
const int LINHA=5;
const int COLUNA=5;
void main (){
	int mat[LINHA][COLUNA];
	int i,j;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("Informe um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("A transposta eh:\n");
	for(j=0; j<COLUNA; j++){
		for(i=0; i<COLUNA; i++){
			printf("%d ", mat[i][j] );
		}
		printf("\n");
	}
getch();
}
