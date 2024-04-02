//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e imprima todos os elementos da sua diagonal principal.

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
void main(){
	float mat[QUANTIDADE][QUANTIDADE];
	int i,j;
	for(i=0; i<QUANTIDADE; i++){
	 for(j=0; j<QUANTIDADE; j++){
	   printf("Informe um numero: ");
	   scanf("%f", &mat[i][j]);
	 }	
	}
	printf("A diagonal principal eh\n");
	for(i=0; i<QUANTIDADE; i++){
	 for(j=0; j<QUANTIDADE; j++){
	   	  if(mat[i]==mat[j]){
	 	    printf("%.1f ", mat[i][j]);
		   }
	   }
   }
getch ();
	

}
