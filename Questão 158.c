//Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a leitura, imprima todos os elementos do vetor que s�o maiores do que a m�dia aritm�tica de todos os elementos do vetor. 

#include<stdio.h>
#include<conio.h>
 const int QUANTIDADE=10;
 void main (){
 int vet[QUANTIDADE];
 int k;
 int soma=0;
   for(k=0;k<QUANTIDADE;k++){
   	printf("Informe um numero: ");
   	scanf("%d", &vet[k]);
   }  
    for(k=0;k<QUANTIDADE;k++){
    	soma= soma + vet[k];
    
   }
    float media= (float)soma/QUANTIDADE;
    printf("A media eh: %.1f\n", media);
    
	printf("Os valores maiores que a media sao:\n");
    
    for(k=0;k<QUANTIDADE;k++){
    	if(vet[k]>media){
    		printf("%d ", vet[k]);
		}
	}
 getch ();
}
	
