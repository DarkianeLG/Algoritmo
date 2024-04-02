//Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0- 12 anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos). Esta
//verificação deve ser realizada através de um subprograma.

#include<stdio.h>
#include<conio.h>

int verificacao(int idade){
	if(idade>=0 && idade<=12){
		return printf("Eh uma crianca!");
	}
	if(idade>=13 && idade<=17){
		return printf("Eh um(a) adolescente!");
	}
	if(idade>=18  && idade<=59){
		return printf("Eh um(a) adulto(a)!");
	}
	if(idade>60){
		return printf("Eh um(a) idoso(a)!");
	}
}
void main(){
   int idade;
   printf("Por favor, informe sua idade: ");
   scanf("%d", &idade);
   int resulVerificacao= verificacao(idade);
getch();
}
