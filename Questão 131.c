 #include<stdio.h>
#include<conio.h>
 const int QUANTIDADE=3;
void main (){
  	int num,k;
  	 printf("Informe um numero inteiro: ");
  	 scanf("%d", &num);
  	 int maior= num;
  	 int segundoMaior= num;
  	  for(k=2;k<=QUANTIDADE;k++){
  	 	 printf("Agora, informe outro numero inteiro:");
  	 	 scanf("%d", &num);
  	 	   if(num>maior){
  	 	   	segundoMaior=maior;
  	 	      maior=num;
			}
			if(num>segundoMaior && num!=maior){
				segundoMaior=num;
			}
			
     	} 
		       printf("O segundo maior numero eh: %d",segundoMaior);
	 getch();
  }
  
