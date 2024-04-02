//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e determine o maior valor presente na diagonal principal.

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=3;
void main (){
	float mat[QUANTIDADE][QUANTIDADE];
	int i,j;
	float maior=0;
	for(i=0;i<QUANTIDADE;i++){
		for(j=0;j<QUANTIDADE;j++){
			printf("Informe um numero: ");
			scanf("%f", &mat[i][j]);
		}
   }
   for(i=0;i<QUANTIDADE;i++){
   	   if(mat[i][i]>maior){
   	 	 maior= mat[i][i];
   	   }
   }
   printf("O maior numero da diagonal principal da matriz eh: %.1f ",maior);
getch();

}
