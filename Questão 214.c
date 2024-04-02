//Em um determinado concurso público, para cada questão que um candidato acerta ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
//questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um programa que leia o número de questões que um candidato acertou, o número de
//questões que ele errou e o número de questões que ele deixou em branco e determine a sua pontuação final. A pontuação deve ser calculada através de um
//subprograma, que deve receber como entrada o número de questões certas, o número de questões erradas e o número de questões em branco. 

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
