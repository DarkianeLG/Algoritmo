#include<stdio.h>
#include<conio.h>
void main (){
	int numero, k;
	printf("Informe um numero:");
	scanf("%d", &numero);
	int soma=0;
	for(k=1;k<numero;k++){
		if(numero%k==0){ 
			soma= soma+k;
		}
		
	}
		if (soma==numero){
			printf("Eh um numero perfeito");
		}
		else{
			printf("Nao um numero perfeito");
		}
	
	
	getch ();
}

