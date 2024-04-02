#include<stdio.h>
#include<conio.h>
void main(){
	int n, k;
	int atual=1;
	int anterior=0;
	printf("Informe um numero N: ");
	scanf("%d", &n);
	while(atual<=n){
			printf(" %d", atual);
			atual= atual+anterior;
			anterior= atual-anterior;
		
   } 
getch ();
}
