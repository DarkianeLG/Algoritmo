#include<stdio.h>
#include<conio.h>
void main (){
	int a1,r,num, k;
	printf("Informe o termo inicial: ");
	scanf("%d", &a1);
	printf("Informe a razao: ");
	scanf("%d", &r);
	printf("Informe um numero: ");
	scanf("%d", &num);
	int valor= a1;
	printf("Os termos sao: %d", valor);
	for(k=2; k<=num; k++){
		valor= valor+r;
		printf(" %d",valor);
    }
		
		 if((num-a1)%r==0){
	     printf("\nO numero %d pertence a PA.",num);
	   }
	   else{
		printf("\nO numero %d nao pertence a PA.",num);
		}
		
   

getch();
}
