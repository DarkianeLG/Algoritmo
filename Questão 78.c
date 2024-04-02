#include<stdio.h>
#include<conio.h>
void main (){
	
	float gasolina, alcool;
	printf("Informe o preco da gasolina: ");
	scanf("%f", &gasolina);
	printf("Informe o preco do alcool: ");
	scanf("%f", &alcool);
	float precoMelhor= gasolina*0.7;
	if(precoMelhor<=alcool){
		printf("Abasteca com gasolina");
	}
	  else{
	  	printf("Abasteca com alcool");
	  }
	
getch ();
}
