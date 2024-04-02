//Escreva um programa que leia três números inteiros distintos e identifique o maior e o menor número lido. O programa deve ter um subprograma para calcular o maior
//número e outro para calcular o menor número.


#include<stdio.h>
#include<conio.h>

void maior (int num1, int num2, int num3){
	if(num1>num2 && num1>num3){
	printf("O maior numero eh %d\n", num1);
	}
	
	else if(num2>num1 && num2>num3){
	   printf("O maior numero eh %d\n", num2);	
	}
	
	else{
		printf("O maior numero eh %d\n", num3);
	}
	
}
void menor (int num1, int num2, int num3){
	if(num1<num2 && num1<num3){
	printf("O menor numero eh %d\n", num1);
	}
	
	else if(num2<num1 && num2<num3){
	   printf("O menor numero eh %d\n", num2);	
	}
	
	else{
		printf("O menor numero eh %d\n", num3);
	}
	
}

void main(){
	int num1, num2, num3;
	printf("Informe tres numeros: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	maior(num1, num2, num3);
	menor(num1, num2, num3);
	
 getch ();
}
