#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;
void main (){
	
	int num,k;
	int ordem=0;
	printf("Informe um numero: ");
	scanf("%d", &num);
	int maior=num;
	int segundoMaior=num;
	 for(k=2;k<=QUANTIDADE;k++){
	 	printf("Informe um numero: ");
    	 scanf("%d", &num);
    	 
    	  if(num>maior){
    	  	segundoMaior=maior;
    	  	ordem=ordem+1;
    	  	maior=num;
		  }
		  
		    if(num>segundoMaior && num!=maior){
		    	segundoMaior=num;
			}
	   }
	       printf("O segundo maior eh %d e ele foi o %d numero informado", segundoMaior,ordem);
	     
	getch ();
}
