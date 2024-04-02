//Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo de M. Esta verificação deve ser realizada através de um subprograma.

#include<stdio.h>
#include<conio.h>

int ehMultiplo(int m, int n){
	if(n%m==0){
		return 1;
	}
	return 0;
}
void main (){
int m, n;
	printf("Informe dois numeros inteiro: ");
	scanf("%d%d", &m, &n);
	int multiplo= ehMultiplo(m, n);
	 if(multiplo==1){
	 	printf("%d eh multiplo de %d", n,m);
	 }
	 else{
	 	printf("%d nao eh multiplo de %d", n,m);
	 }
getch ();
}


