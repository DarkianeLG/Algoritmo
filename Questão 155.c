//Escreva um programa que leia dez n�meros inteiros e, ap�s finalizar a leitura, leia um n�mero inteiro N (entre 1 e 10) e imprima qual foi o en�simo n�mero digitado pelo usu�rio. 

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
	  printf("Agora informe a posicao de entre 1 e 10: ");
	  scanf("%d", num);
	  if(num>=1 && num<=QUANTIDADE){
	  	int resposta= vet[num-1];
	  	printf("O enesimo numero eh: %d", resposta);
	  }
	  else{
	  	printf("Posicao invalida");
	  }
 getch();
}
