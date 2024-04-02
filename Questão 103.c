#include<stdio.h>
#include<conio.h>
void main (){
	int n,k;
	int quantidade=0;
	printf("Informe um numero inteiro N: ");
	scanf("%d", &n);
	for(k=1; k<=n; k++){
		if(n%k==0){
			quantidade=quantidade+1;
		}
   }     
		  if(quantidade==2){
		  	printf("O numero eh primo");
		  }
		    else{
		      printf("O numero nao eh primo");
			}
	getch();
}
	
