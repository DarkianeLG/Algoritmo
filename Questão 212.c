//Escreva um programa que leia o n�mero total de quest�es existentes em uma prova e o n�mero de quest�es que um candidato acertou e determine o seu percentual de
//acertos e o seu percentual de erros. O c�lculo deve ser realizado atrav�s de um subprograma.

#include<stdio.h>
#include<conio.h>

float acertos (int total, int certas){
	return ((float)certas/total)*100;
}
float erros (int total, int certas){
	int qErradas= total-certas;
	return ((float)qErradas/total)*100;
}
void main(){
	int total, certas;
	printf("Informe o total de questoes da prova: ");
	scanf("%d", &total);
	printf("Agora informe o total de questoes que voce acertou: ");
	scanf("%d", &certas);
	float porcentagemCertas= acertos(total, certas);
	float porcentagemErradas= erros(total, certas);
	
	printf("A porcentagem de questao certas eh de %.2f porcento\n", porcentagemCertas);
	printf("A porcentagem de questao erradas eh de %.2f porcento", porcentagemErradas);
	
	getch ();
}
