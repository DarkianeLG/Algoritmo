#include<stdio.h>
#include<conio.h>
void main (){
	int a1, r, n;
	printf("Informe o termo inicial: ");
	scanf("%d", &a1);
	printf("Informe a razao: ");
	scanf("%d", &r);
	printf("Informe um numero n: ");
	scanf("%d", &n);
	int valor= a1;
	if(r>0){
		while(valor<=n){
		    printf(" %d",valor);
			valor=valor+r;
		}
	}
	else if(r<0){
		while(valor>=n){
			printf(" %d", valor);
			valor=valor+r;
		}
	}
	
	getch();
	
}
