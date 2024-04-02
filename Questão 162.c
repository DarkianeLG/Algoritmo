//Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor correspondente em binário. 

#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=8;
void main (){
	int vet[QUANTIDADE];
	int k, valor;
	int soma=0;
	printf("Informe um valor entre 0 e 255: ");
	scanf("%d", &valor);
	if (valor < 0 || valor > 255) {
        printf("O valor informado esta fora do intervalo permitido.\n");
   }
   else{

		for(k=0;k<QUANTIDADE;k++){
			int resto= valor%2;
			vet[k]=resto;
			valor=valor/2;
			if(valor>=1){
				soma=soma+1;
			}
	   }
	
	printf("O valor em binario eh:\n");
	for(k=soma; k>=0; k--){
		printf("%d", vet[k]);
	}
}
 getch ();
}
