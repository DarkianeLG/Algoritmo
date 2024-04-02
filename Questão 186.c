//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N entre 1 e 5 e calcule o maior elemento da linha N. 

#include<stdio.h>
#include<conio.h>
const int LINHA=3;
const int COLUNA=3;
void main (){
	float mat[LINHA][COLUNA];
	int i,j,k;
	int num;
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
		float maior= mat[0][0];
		for(i=num-1; i<num; i++){
			for(j=0;j<COLUNA;j++){
				if(mat[i][j]>maior){
					maior=mat[i][j];
				}
		    }
		}
		printf("O maior numero da linha %d eh: %.1f", num, maior);
	}
 getch ();
}
		
