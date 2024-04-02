#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
void main (){
	int vetA[QUANTIDADE];
	int vetB[QUANTIDADE];
	int vetC[QUANTIDADE*2];
	int k, n;
	int repeticao;
	int preenchido=0;
	
	printf("Informe o primeiro:\n");
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%d", &vetA[k]);
	}
	printf("Informe o segundo:\n");
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe um numero: ");
		scanf("%d", &vetB[k]);
	}
	for(k=0; k<QUANTIDADE; k++){
		repeticao=0;
		for(n=0; n<preenchido; n++){
			if(vetA[k]==vetC[n]){
				repeticao= repeticao+1;
			}
		}
		if(repeticao==0){
			vetC[preenchido]= vetA[k];
			preenchido= preenchido+1;
		}
	}
	for(k=0; k<QUANTIDADE; k++){
		repeticao=0;
		for(n=0; n<preenchido; n++){
			if(vetB[k]==vetC[n]){
				repeticao= repeticao+1;
			}
		}
		if(repeticao==0){
			vetC[preenchido]= vetB[k];
			preenchido= preenchido+1;
		}
	}
	printf("O terceiro vetor eh:\n");
	for(k=0; k<preenchido; k++){
        printf("%d " ,vetC[k]);
    }
    getch ();

}
