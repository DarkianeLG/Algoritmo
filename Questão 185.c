//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e calcule o valor da soma dos elementos de cada uma de suas linhas. 

#include<stdio.h>
#include<conio.h>
const int LINHA=3;
const int COLUNA=3;
void main (){
	float mat[LINHA][COLUNA];
	int i,j,k;
	float soma=0;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("Informe um numero: ");
			scanf("%f", &mat[i][j]);
		}
	}
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			soma=soma+mat[i][j];
		}
		printf("A soma da linha %d eh %.2f\n", i+1,soma);
		soma=0;
	}
getch ();
}
