//Escreva um programa que leia um n�mero inteiro e verifique se ele � positivo, negativo ou neutro. Esta verifica��o deve ser realizada atrav�s de um subprograma.

#include<stdio.h>
#include<conio.h>

int verificacao (int num){
	if(num==0){
	printf("Eh um numero neutro");
	}
	
	else if(num>0){
	   printf("Eh um numero positivo");	
	}
	
	else{
		printf("Eh um numero negativo");
	}
}
void main(){
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	int verificarNumero= verificacao(num);
	
	getch();
	
}
