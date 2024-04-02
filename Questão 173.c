#include<stdio.h>
#include<conio.h>
int const QUANTIDADE=10;

void main (){
	int vet[QUANTIDADE];
	int k, termo, num, progressao;
	int soma=0;
	
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%d", &vet[k]);
	}
	printf("Informe um numero entre 3 e 10: ");
	scanf("%d", &num);
	
	if(num<3 || num>10){
		printf("Numero invalido.");
	}
	else{
		for(k=0; k<=QUANTIDADE-num; k++ ){
			int razao= vet[k+1]-vet[k];
		     progressao= 1;
			
			for(termo= k+1; termo<k+num-1; termo++){
				if(vet[termo+1] - vet[termo] != razao){
					progressao=0;
				}
			}
			if(progressao==1){
				soma=soma+1;
			}
		}
		printf("O vetor tem %d progressoes", soma);
	}
 getch ();
}
