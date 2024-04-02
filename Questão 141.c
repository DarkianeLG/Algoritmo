#include<stdio.h>
#include<conio.h>
void main (){
	int valor1, valor2, valor3;
	int contador;
	int divisor=2;
	int mmc=1;
	printf("Informe os tres valores: ");
	scanf("%d%d%d", &valor1, &valor2, &valor3);
	  while(valor1!=1 || valor2!=1 || valor3!=1){
	  	contador=0;
	  	if(valor1%divisor==0){
	  		contador=divisor;
	  		valor1=valor1/divisor;
	
		  }
		     if(valor2%divisor==0){
		     	contador=divisor;
		     	valor2=valor2/divisor;
			 }
			 
			    if(valor3%divisor==0){
			    	contador=divisor;
			    	valor3=valor3/divisor;

				}
				
				   if(contador>=1){
				   	  mmc=mmc*contador;
				   }
				     else{
				     	divisor=divisor+1;
					 }
	   }
	   printf("O MMC: %d", mmc);
	    
getch ();	
}
