#include<stdio.h>
#include<conio.h>
void main (){
	int k, num;
	int atual=1;
	int anterior=0;
	printf("Informe um numero N: ");
	scanf("%d", &num);
	for(k=2; k<=num; k++){
		atual=atual+anterior;
		anterior=atual-anterior;
	}
	printf("O enesimo termo eh: %d", atual);
	
getch ();
}
