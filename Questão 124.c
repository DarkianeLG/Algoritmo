#include<stdio.h>
#include<conio.h>
void main (){
	int num = 1;
	int soma= 0;
	int quantidade=0;
	int maior=0, menor=0;
	int k;
	while(soma<6){
	 for(k=1; k<=num; k++){
		if(num%k==0){
			quantidade=quantidade+1;
		}
     }
		  if(quantidade==2){
		  	if(maior==0){
		  		maior=num;
		  		menor=num;
		  	 }
		  	 
		  	 if(num>maior){
		  	 	menor=maior;
		  	 	maior=num;
			   }
			   
			   else if(num>menor && num!=maior){
			   	 menor=num;
			   }
			   
			   if(maior-menor==2){
			   	printf("%d %d\n", menor, maior);
			   	soma=soma+1;
			   }
		  }
		  quantidade=0;
		  num=num+1;
	}
getch ();
}



