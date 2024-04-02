#include<stdio.h>
#include<conio.h>
void main (){

    int num1, num2, num3;
	int maior;
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &num3);
	if(num1>num2){
		maior=num1;
	} 
	  else if(num2>num1){
	  	maior=num2;
	  }
	    if(num3>maior){
	    	maior=num3;
		}
		printf("O maior numero eh: %d", maior);
  getch ();
}
