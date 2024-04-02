#include<stdio.h>
#include<conio.h>
void main (){
	int N;
	int soma=0;
	int num=1;
	printf("Informe um numero N: ");
	scanf("%d", &N);
	while(soma<N){
		printf(" %d", num);
		num= num+1;
		soma= soma+num;
		
	}
	    
getch ();	
}
