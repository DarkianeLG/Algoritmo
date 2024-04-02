//Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor lido em ordem crescente. 

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=10;
void main (){
	int vet[QUANTIDADE];
	int k, b;
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%d", &vet[k]);
	}
	     for(k=0; k<QUANTIDADE; k++){
	     	for (b =0; b<QUANTIDADE-k-1;b++) {
		     if(vet[b]>vet[b+1]){
			   int aux= vet[b];
			   vet[b]=vet[b+1];
			   vet[b+1]= aux;
		     }
	        }
	      }
    printf("A ordem crescente eh: ");
	 for(k=0; k<QUANTIDADE; k++){
	 	printf("%d ", vet[k]);
	   }
	getch();	
}
