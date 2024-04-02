//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e verifique quantas linhas nulas existem na matriz

#include<stdio.h>
#include<conio.h>
const int LINHA=3;
const int COLUNA=3;
void main (){
	float mat[LINHA][COLUNA];
	int i,j;
	int num;
	int soma=0;
	int linha_nulas=0;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("Informe um numero: ");
			scanf("%f", &mat[i][j]);
		}
	}
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			if(mat[i][j]==0){
				soma=soma+1;
			}
    	}
    	if(soma==LINHA){
    		linha_nulas=linha_nulas+1;
		}
		soma=0;
	}
	printf("Na matriz tem %d linha nula",linha_nulas);
getch();
}
	
