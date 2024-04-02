#include<stdio.h>
#include<conio.h>
void main (){
	
	int idade;
	printf("Por favor, informe sua idade: ");
	scanf("%d", &idade);
	if(idade>=0 && idade<=12){
		printf("Voce eh crianca.");
	}
	  else if(idade>=13 && idade<=17){
	  	printf("Voce eh adolescente");
	  }
	     else if(idade>=18 && idade<=59){
	  	  printf("Voce eh adulta(o)");
	    } 
	      else if(idade>=60){
	  	   printf("Voce eh idosa(o)");
	     }  
getch ();
}
