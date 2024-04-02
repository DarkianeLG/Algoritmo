#include<stdio.h>
#include<conio.h>
void main (){
	
	int N, k;
	printf("Informe um numero N: ");
	scanf("%d", &N);
	int num=1;
	int soma=0;
	int contagem=0;
	while(contagem<N){
		for(k=1; k<num; k++){
			if(num%k==0){
				soma=soma+k;
			}
	   }
		  if(soma==num){
		  	printf(" %d",num);
		  	contagem=contagem+1;
		  }
		  num=num+1;	
		  soma=0;  
	}
getch ();
}
