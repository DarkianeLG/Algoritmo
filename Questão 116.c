#include<stdio.h>
#include<conio.h>
#include<string.h>
int const QUANTIDADE= 20;
void main(){
	int k;
	char nome[20], sexo;
	int idade;
	int acumulado=0;
	for(k=1; k<=QUANTIDADE; k++){
		fflush(stdin);
		printf("\nInforme seu nome: ");
		gets(nome);
		printf("\nAgora sua idade: ");
		scanf("%d", &idade);
		fflush(stdin);
		printf("\nInforme seu sexo [M/F]: ");
		scanf("%c", &sexo);
		if(sexo=='F' && idade>=18 && idade<=21){
			acumulado= acumulado+1;	
		}
   }
	    float porcentagem= ((float)acumulado/QUANTIDADE)*100;
			printf("\nA porcentagem eh: %.2f", porcentagem);
    
		
	getch ();
}
