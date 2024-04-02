#include<stdio.h>
#include<conio.h>
void main (){
	int num,k,a;
	printf("Informe um numero N: ");
	scanf("%d", &num);
	for(k=1; k<=num; k++){
		for(a=1; a<=k; a++){
			printf("*");
		}
		printf("\n");
	}
getch ();
}
