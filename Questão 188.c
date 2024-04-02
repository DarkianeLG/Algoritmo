//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N e determine a quantidade de números primos na coluna N. 

#include<stdio.h>
#include<conio.h>
const int LINHA=5;
const int COLUNA=5;
void main (){
	int mat[LINHA][COLUNA];
	int i,j,k;
	int num;
	int soma=0;
	int quantidade=0;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("Informe um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Agora informe um numero N: ");
	scanf("%d", &num);
	for(i=0; i<LINHA; i++){
		for(k=1; k<=mat[i][num-1]; k++){
			if(mat[i][num-1]%k==0){
				soma=soma+1;
			}
		}
		if(soma==2){
			quantidade=quantidade+1;
		}
		soma=0;
	}
	printf("A coluna %d tem %d numero primo", num, quantidade);
	
getch();

}
  
