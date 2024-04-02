#include<stdio.h>
#include<conio.h>
void main (){
	int num1, num2, num3;
	int maior, menor;
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &num3);
	if(num1>num2){
		maior=num1;
	    menor=num2;
	}
	 else if(num2>num1){
	 	maior=num2;
	 	menor=num1;
	  }
	    if(num3>maior){
	   	 maior=num3;
	   } 
	     else if(num3<menor){
	     	menor=num3;
		 }
		 
		  printf("O maior numero eh: %d\n", maior);
		  printf("E o menor numero eh: %d", menor);
 void main ();
}
