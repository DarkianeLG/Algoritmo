//Escreva um programa que leia um vetor de 10 números inteiros e dois números inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posições M e N do vetor. O programa deve também imprimir o estado do vetor antes e após a inversão.

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=10;
void main (){
	int vet[QUANTIDADE];
	int k, m,n;
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%d", &vet[k]);
	}
	printf("Informe as posicoes que voce deseja inverte: ");
	scanf("%d%d", &m,&n);
	
	printf("Vetor antes da permutacao:\n");
	
	for(k=0;k<QUANTIDADE;k++){
	 printf("%d ", vet[k]);
	}
	int aux= vet[m];
	vet[m]=vet[n];
    vet[n]=aux;
	
	printf("\nVetor apos a permutacao:\n");
	
	for(k=0;k<QUANTIDADE;k++){
		printf("%d ", vet[k]);
	}
getch ();
}
	
