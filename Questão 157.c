//Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a leitura, leia um n�mero inteiro N e imprima todas as posi��es em que o n�mero N aparece dentro do vetor.

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

