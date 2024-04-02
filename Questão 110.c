#include<stdio.h>
#include<conio.h>
void main (){
	int num;
	int k;
	int fatorial=1;
	printf("Informe um numero inteiro nao negativo: ");
	scanf("%d", &num);
	for(k=num; k>=1; k--){
	fatorial= fatorial*k;
}
printf("O fatorial de %d eh %d\n", num, fatorial);
getch();
}
