//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N e determine a quantidade de números pares existente na linha N. 

#include<stdio.h>
#include<conio.h>
const int LINHA=5;
const int COLUNA=5;
void main (){
	float mat[LINHA][COLUNA];
	int i,j,k;
	int num;
	int quantidade=0;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("Informe um numero: ");
			scanf("%f", &mat[i][j]);
		}
	}
	printf("Informe um numero entre 1 e 5: ");
	scanf("%d", &num);
	if(num<1 || num>5){
		printf("Numero invalido");
	}
	else{
			for(j=0;j<COLUNA;j++){
				if(mat[num-1][j]%2==0){
					quantidade=quantidade+1;
				}
		    }
		printf("A quantidade de numero par na linha %d eh: %.1f", num, quantidade);
	}
 getch ();
 
}
		
