#include<stdio.h>
#include<conio.h>
void main (){
	int k;
	printf("Os palindromos de 1000 a 9999 sao:\n");
	for(k=1000; k<=9999; k++){
		int milhar= k/1000;
		int resto= k%1000;
		int cetena= resto/100;
		int resto2= resto%100;
		int dezena= resto2/10;
		int unidade= resto2%10;
		int reverso=(unidade*1000)+(dezena*100)+(cetena*10)+(milhar*1);
	    if(reverso==k){
	    	printf(" %d", k);
     	}
	}
	getch ();
	
}
