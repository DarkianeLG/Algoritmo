//Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da sua diagonal principal. 

#include<stdio.h>
#include<conio.h>
const int LINHA=5;
const int COLUNA=5;
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
    printf("Agora informe um numero entre 1 e 5: ");
	scanf("%d", &num);
	if(num<1 || num>5){
		printf("Numero invalido");
	}
	else{
		printf("Os %d primeiro numeros da matriz principal sao:\n",num);
				for(k=0; k<num; k++){
					printf("%.1f ", mat[k][k]);
				}	  
	}
getch ();

}
