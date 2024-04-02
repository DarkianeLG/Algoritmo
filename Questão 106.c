#include<stdio.h>
#include<conio.h>
void main (){
	
	int m,n,k;
	int soma=0;
	int quantidade=0;
	printf("Informe um numero M: ");
	scanf("%d", &m);
	printf("Informe um numero N: ");
	scanf("%d", &n);
	for(k=m; k<=n; k++){
		soma=soma+k;
		quantidade=quantidade+1;
	}
	  float media= soma/quantidade;
	  printf("A media do intervalo eh %.2f", media);
	getch ();
}




