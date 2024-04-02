#include<stdio.h>
#include<conio.h>
void main(){
	int n,k;
	int atual=1;
	int anterior=0;
	printf("Informe um numero N: ");
	scanf("%d", &n);
	while(atual<n){
		atual= atual+anterior;
		anterior= atual-anterior;

   }
		if(atual==n){
		printf("O numero %d pertence a serie fibonacci", n);
		}
		 
		  else{
		  	printf("O numero %d nao pertence a serie fibonacci", n);
		  }
	
getch ();

}
