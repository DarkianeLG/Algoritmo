#include<stdio.h>
#include<conio.h>
void main(){
	int N,k;
	printf("Informe um numero N: ");
	scanf("%d", &N);
	int contagem= 0;
	int num=1;
	int quantidade=0;
	while(contagem<N){
		for(k=1; k<=num; k++){
	    	if(num%k==0){
		 		quantidade=quantidade+1;
			}
		}
		  if(quantidade==2){
		  	printf(" %d", num);
		  	 contagem=contagem+1;
		   }
		     quantidade=0;
		     num=num+1;
	}
getch();
}
