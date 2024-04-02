//Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura, leia um número inteiro N e imprima todas as posições em que o número N aparece dentro do vetor.

#include<stdio.h>
#include<conio.h>
 const int QUANTIDADE=10;
 void main (){
 int vet[QUANTIDADE];
 int k, num;
   for(k=0;k<QUANTIDADE;k++){
   	printf("Informe um numero: ");
   	scanf("%d", &vet[k]);
   }
   printf("Agora informe um numero N: ");
   scanf("%d", &num);
   
   printf("A posicao que o numero %d esta eh:\n", num);
   
    for(k=0;k<QUANTIDADE;k++){
    	if(vet[k]==num){
    		printf("%d ",k);
		}
	}
 getch();
 }

