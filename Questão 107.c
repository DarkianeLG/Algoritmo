#include<stdio.h>
#include<conio.h>
void main (){
	
	int m,n,k,divisor;
	int quantidade=0;
	int soma=0;
	int acumulado=0;
	printf("Informe um numero M: ");
	scanf("%d", &m);
	printf("Informe um numero N: ");
	scanf("%d", &n);
	for(k=m; k<=n; k++){
		for(divisor=1; divisor<=k; divisor++){
			if(k%divisor==0){
				quantidade=quantidade+1;
			}
    	}
			  if(quantidade==2){
			  	soma=soma+k;
			  	acumulado=acumulado+1;
			  }
			  
			  quantidade=0;	
	} 
	  float media= (float)soma/acumulado;
	  printf("A media aritimetica eh %.2f", media);
  getch ();
}

		

