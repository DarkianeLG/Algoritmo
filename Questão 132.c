#include<stdio.h>
#include<conio.h>
void main (){

int num,k,a,b;
int espaco=0;
printf("Informe um numero inteiro N: ");
scanf("%d", &num);
for(k=num; k>=1; k--){
	for(a=1; a<=espaco; a++){
		printf(" ");
	}
	  espaco=espaco+1;
	    for(b=1; b<=k; b++){
	    	printf("*");
		}
		printf("\n");
}
getch();
}
