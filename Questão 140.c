#include<stdio.h>
#include<conio.h>
void main (){
	int num;
	int somaPar=0;
	int quantidadePar=0;
	int somaImpar=0;
	int quantidadeImpar=0;
	printf("Informe um numero intero: ");
	scanf("%d", &num);
	while(num!=0){
		if(num%2==0){
			somaPar= somaPar+num;
			quantidadePar= quantidadePar+1;
		}
		else{
			somaImpar= somaImpar+num;
			quantidadeImpar= quantidadeImpar+1;
		}
		printf("Agora, informe outro numero: ");
		scanf("%d", &num);
   }
	 if(somaPar>0){
		float mediaPar= (float)somaPar/quantidadePar;
		printf("A media dos numeros pares eh %.1f\n", mediaPar);
		}
	if(somaImpar>0){
	  	float mediaImpar= (float)somaImpar/quantidadeImpar;
		printf("A media dos numeros impares eh %.1f\n", mediaImpar);
	 	 }
	    
   
	getch ();
}
