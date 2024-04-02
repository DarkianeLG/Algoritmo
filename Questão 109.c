#include<stdio.h>
#include<conio.h>
void main (){
	int m,n,k,x;
	printf("Informe um numero inteiro M: ");
	scanf("%d", &m);
	printf("Agora, informe um numero inteiro N: ");
	scanf("%d", &n);
	printf("Informe um numero X: ");
	scanf("%d", &x);
	for(k=m; k<=n; k++){
		if(k%x==0){
			printf(" %d", k);
		}
	}
	getch ();
}
   

