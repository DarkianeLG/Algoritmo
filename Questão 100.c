#include<stdio.h>
#include<conio.h>
void main (){
	int num, k;
	printf("Informe um numero inteiro:");
	scanf ("%d", &num);
	for(k=2; k<=num*2; k=k+2){
		printf("%d", k);
		}
	getch ();
}
