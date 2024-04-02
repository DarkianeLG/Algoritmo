#include<stdio.h>
#include<conio.h>
void main (){
	int num, k,a;
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	for(k=num; k>=1; k--){
		for(a=1; a<=k; a++){
			printf("*");
		}
		 printf("\n");
	}
	getch();
}
        
