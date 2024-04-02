//Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou neutro. Esta verificação deve ser realizada através de um subprograma.

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
