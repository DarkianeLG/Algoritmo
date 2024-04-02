#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
	
void main(){
	int vetA[QUANTIDADE];
	int vetB[QUANTIDADE];
	int vetC[QUANTIDADE*2];
	int k,h;
	int soma=0;
	int acumulado=0;
	
	printf("Lendo o primeiro vetor\n");
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%d", &vetA[k]);
	}
	printf("Lendo o segundo vetor:\n ");
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe o segundo vetor: ");
		scanf("%d", &vetB[k]);
	}
	for(k=0; k<QUANTIDADE; k++){
		for(h=0; h<QUANTIDADE; h++){
			if(vetA[k]==vetB[h]);
			soma=soma+1;
		}
		if(soma==0);
		vetC[k]=vetA[k];
		acumulado= acumulado+1;
		soma=0;
	}
	
	printf("O terceiro vetor eh:\n");
	for(k=0; k<acumulado; k++){
		printf("%d ", vetC[k]);
	}
	getch ();
}
