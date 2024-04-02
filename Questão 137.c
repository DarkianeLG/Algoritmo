#include<stdio.h>
#include<conio.h>
void main (){
	int num;
	int binario=0;
	int base=1;
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	while(num>0){
		int resto= num%2;
		binario=binario+resto*base;
		num=num/2;
		base=base*10;
	}
	  printf("O numero em binario eh: %d", binario);
getch();
}
