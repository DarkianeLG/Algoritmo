//Escreva um programa que leia uma matriz quadrada de ordem dez de números inteiros e verifique a quantidade de linhas e colunas nulas da matriz. O resultado
//deve ser um único número referente à soma do número de linhas e colunas nulas.

#include<stdio.h>
#include<conio.h>
const int LINHA=10;
const int COLUNA=10;
void main(){
	int mat[LINHA][COLUNA];
	int i,j;
	int linhas_nulas=0;
	int soma=0;
	int colunas_nulas=0;
	int quantidade=0;
	printf("Lendo a matriz\n");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("Informe um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			if(mat[i][j]==0){
				soma=soma+1;
				
			}
		}
		if(soma==LINHA){
			linhas_nulas=linhas_nulas+1;
		}
		soma=0;
	
	}
	for(j=0; j<COLUNA; j++){
		for(i=0; i<LINHA; i++){
			if(mat[i][j]==0){
				quantidade=quantidade+1;
				
			}
		}
		if(quantidade==COLUNA){
			colunas_nulas=colunas_nulas+1;
		}
		quantidade=0;
	
	}
	int total= linhas_nulas+colunas_nulas;
	printf("A soma das linhas e colunas nulas eh %d", total);
getch ();
}
