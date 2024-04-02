//Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é ou não um palíndromo.

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=20;
void main (){
	char vet[QUANTIDADE];
	int k,inver;
    char inverso;
    int soma=0;
	for(k=0;k<QUANTIDADE;k++){
		fflush(stdin);
		printf("Informe um caractere: ");
		scanf("%c", &vet[k]);
   }
     printf("O inverso eh: ");
    for(inver=QUANTIDADE-1;inver>=0; inver--){
   	   printf("%c ", vet[inver]);
    }
    
    for(k=0;k<QUANTIDADE/2;k++){
         if(vet[k]==vet[QUANTIDADE-1-k]){
    	   soma=soma+1;
	   }
    }
  	 if(soma==QUANTIDADE/2){
	 	printf("\nEh um polindromo");
	   }
       else{
   	    printf("\nNao eh um polindromo");
       }

getch ();
}
