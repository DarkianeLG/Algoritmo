//Em um determinado concurso p�blico, para cada quest�o que um candidato acerta ele ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
//quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
//quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e determine a sua pontua��o final. A pontua��o deve ser calculada atrav�s de um
//subprograma, que deve receber como entrada o n�mero de quest�es certas, o n�mero de quest�es erradas e o n�mero de quest�es em branco. 

#include<stdio.h>
#include<conio.h>

int totalPontuacao(int certa, int errada, int branco){
	int pontuacao= (certa*5)-(errada*3)+(branco*0);
	return pontuacao;
}
void main(){
	int certa, errada, branco;
	printf("Informe o numero de questoes que voce acertou: ");
	scanf("%d", &certa);
	printf("Informe o numero de questoes que voce errou: ");
	scanf("%d", &errada);
	printf("Informe o numero de questoes que voce deixou em branco: ");
	scanf("%d", &branco);
	int valorPontuacao= totalPontuacao(certa, errada, branco);
	printf("Sua pontuacao final eh %d", valorPontuacao);
	
getch();
}
