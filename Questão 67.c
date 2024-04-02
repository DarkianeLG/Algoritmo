#include<stdio.h>
#include<conio.h>
void main (){
	int ano;
	printf("Inoforme um ano: ");
	scanf("%d", &ano);
	if(ano%400==0){
		printf("O ano eh bissexto");
	}
	  else if(ano%4==0 && ano%100 !=0){
	  	printf("O ano eh bissexto");
	  }
	      else{
	      	printf("O ano nao eh bissexto");
		  }
 getch();
}

