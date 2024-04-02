#include<stdio.h>
#include<conio.h>
void main (){
	int m,n,k, divisor;
	int quantidade=0;
	printf("Informe um numero inteiro M: ");
	scanf("%d", &m);
	printf("Informe um numero inteiro N: ");
	scanf("%d", &n);
	for(k=m; k<=n; k++){
		for(divisor=1; divisor<=k; divisor++){
			if(k%divisor==0){
			 quantidade=quantidade+1;
	    	}
		}
		    if(quantidade==2){
		      	printf(" %d",k);
			}
			
			quantidade=0;
	}
 getch ();
}
