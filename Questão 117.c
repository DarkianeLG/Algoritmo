#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=10;
void main (){
	int num;
	int k, fato;
	int fatorial=1;
	for(k=1; k<=QUANTIDADE; k++){
	   printf("Informe um numero inteiro: ");
	   scanf("%d", &num);
	   for(fato=num; fato>=1; fato--){
		fatorial= fatorial*fato;
	}
	printf("%d\n", fatorial);
	fatorial=1;
}
getch();
}
   
