#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=10;
void main (){
int vet[QUANTIDADE];
int k, b, num;
int razao;
int soma=0;

for(k=0; k<QUANTIDADE; k++){
	printf("Informe um numero: ");
	scanf("%d", &vet[k]);
}
printf("Agora, informe um de sequencia entre 1 e 10: ");
scanf("%d", &num);
for(k=0; k<=QUANTIDADE-num; k++){
	razao= vet[k]<vet[k+1];
	int sequencia=1;
	
	for(b=k; b<k+num-1; b++){
		if(vet[b]>vet[b+1]){
			sequencia=0;
		}
	}
	if(sequencia==1){
	soma=soma+1;
   }
}
printf("O vetor tem %d sequencia", soma);

getch();
}


