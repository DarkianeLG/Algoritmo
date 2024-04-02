#include<stdio.h>
#include<conio.h>
void main (){
	int m, n;
	printf("Informe um numero M: ");
	scanf("%d", &m);
    printf("Informe um numero N: ");
	scanf("%d", &n);
	int resto= m;
	int quociente= 0;
	while(resto>=n){
		resto= resto-n;
		quociente= quociente+1;
	}
	printf("O quociente da divisao de %d por %d eh: %d", m,n,quociente);
	printf("\nO resto da divisao de %d por %d eh: %d", m,n,resto);
getch();
}
