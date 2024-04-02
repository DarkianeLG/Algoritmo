#include<stdio.h>
#include<conio.h>
void main(){
	int n, num;
	int soma=0;
	printf("Seu processo de leitura vai acabar quando a soma dos numeros informados for maior que o N.\n");
	printf("Informe um numero n: ");
	scanf("%d", &n);	
	while(soma<n){
	 printf("Agora, informe outro numero: ");
	 scanf("%d", &num);
	 soma= soma+num;
   } 
   printf("A soma eh %d esta maior que o N.", soma);
getch ();
}

