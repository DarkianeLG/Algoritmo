#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char palavra [30];
	int quantidade=0;
	
	do{
		printf("Informe uma palavra: ");
		gets(palavra);
		fflush(stdin);
		int tamanho= strlen(palavra);
		printf("A palavra %s tem %d letras\n",palavra, tamanho);
		if(tamanho==5){
			quantidade= quantidade+1;
		}
	}
	 while(quantidade!=2);
 getch ();
	
}
