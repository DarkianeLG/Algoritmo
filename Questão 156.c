//Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a leitura, leia um n�mero inteiro N e imprima todos os elementos do vetor que s�o maiores que N.

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=10;
void main (){
	int vet[QUANTIDADE];
	int k, num;
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%d", &vet[k]);
	}
	 printf("Informe um numero N: ");
	 scanf("%d", &num);
	 
	 printf("Os numeros maiores que %d sao: \n", num);
	 
	 for(k=0; k<QUANTIDADE; k++){
	 	if(vet[k] > num){
	 		printf("%d ", vet[k]);
		 }
	 }
 getch ();
}
