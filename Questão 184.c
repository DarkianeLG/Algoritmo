//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos elementos da coluna N.

#include<stdio.h>
#include<conio.h>
const int LINHA=5;
const int COLUNA=5;
void main (){
	float mat[LINHA][COLUNA];
	int i,j,k;
	int num;
	float soma=0;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("Informe um numero: ");
			scanf("%f", &mat[i][j]);
		}
	}
    printf("Agora informe um numero entre 1 e 5: ");
	scanf("%d", &num);
	if(num<1 || num>5){
		printf("Numero invalido");
	}
	else{
		for(i=0;i<LINHA;i++){
			soma=soma+mat[i][num-1];
		}
		float media= soma/COLUNA;
		printf("A media da coluna %d eh %.2f", num, media);
		
	}
getch();
}
	
		
		
		
	
