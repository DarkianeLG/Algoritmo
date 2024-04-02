#include<stdio.h>
#include<conio.h>
void main (){
	int a1,r,n,k;
	printf("Informe o termo inicial da PA: ");
	scanf("%d", &a1);
	printf("Informe a razao da PA: ");
	scanf("%d", &r);
	printf("Informe um numero N: ");
	scanf("%d", &n);
	int valor=a1;
	printf("Os termos da progressao eh:%d", valor);
	for(k=2; k<=n; k++){
		valor=valor+r;
		printf(" %d", valor);
	}
 getch ();
}

   
