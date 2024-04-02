//Escreva um programa que leia duas matrizes quadradas de ordem 5 de números inteiros e determine quantas linhas e colunas idênticas existem nas duas matrizes. 

#include<stdio.h>
#include<conio.h>
const int LINHA=5;
const int COLUNA=5;
void main(){
	int prim[LINHA][COLUNA];
	int seg[LINHA][COLUNA];
	int i,j;
	int soma=0;
	int linhas_iden=0;
	int quantidade=0;
	int colunas_iden=0;
	printf("Lendo a primeira matriz\n");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("Informe um numero: ");
			scanf("%d", &prim[i][j]);
		}
	}
    printf("Lendo a segunda matriz\n");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("Informe um numero: ");
			scanf("%d", &seg[i][j]);
		}
	}
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
		    if(prim[i][j]==seg[i][j]){
		    	soma=soma+1;
			}
		}
		if(soma==LINHA){
			linhas_iden=linhas_iden+1;
		}
		soma=0;
	}
	for(j=0; j<COLUNA; j++){
		for(i=0; i<LINHA; i++){
		    if(prim[i][j]==seg[i][j]){
		    	quantidade=quantidade+1;
			}
		}
		if(quantidade==COLUNA){
			colunas_iden=colunas_iden+1;
		}
		quantidade=0;
	}
	printf("A matriz tem %d linha identicas\n", linhas_iden);
	printf("A matriz tem %d coluna identicas\n", colunas_iden);
getch();
}
