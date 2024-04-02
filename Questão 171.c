//Escreva um programa que leia dois vetores de 5 números reais cada e calcule o produto escalar destes vetores.
#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
void main (){
	int vet[QUANTIDADE];
	int mat[QUANTIDADE];
	int k;
    int escalar=0;
    
    printf("Lendo o primero vetor\n");
	for(k=0;k<QUANTIDADE;k++){
		printf("Informe um numero: ");
		scanf("%d", &vet[k]);
    }
    printf("\nLendo o segundo vetor\n");
	for(k=0;k<QUANTIDADE;k++){
		printf("Informe um numero: ");
		scanf("%d", &mat[k]);
    } 
	for(k=0;k<QUANTIDADE;k++){
		escalar=escalar+(vet[k]*mat[k]);
    }
    printf("O produto escalar eh: %d", escalar);
getch();
}
