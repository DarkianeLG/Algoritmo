#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
void main (){
	int mat[QUANTIDADE][QUANTIDADE];
	int i,j;
	int num;
	int soma=0;
	for(i=0;i<QUANTIDADE;i++){
		for(j=0;j<QUANTIDADE;j++){
			printf("Informe um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
    printf("Agora informe o numero que quer encontrar: ");
	scanf("%d", &num);
	for(i=0;i<QUANTIDADE;i++){
		for(j=0;j<QUANTIDADE;j++){
			if(mat[i][j]==num){
				soma=soma+1;
			}
     	}
    }
    printf("O numero %d apareceu %d vez na matriz", num,soma);
getch();

}

