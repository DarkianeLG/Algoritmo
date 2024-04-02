#include<stdio.h>
#include<conio.h>
const int QUANTIDADE= 3;
void main (){
	int voto;
	int k;
	int votos_JB=0;
	int votos_ZC= 0;
	int votos_MB= 0;
	int votos_A= 0;
	int votos_Nulo=0;
	for(k=1; k<=QUANTIDADE; k++){
		printf("Para quem vai seu voto (0-4)? ");
		scanf("%d", &voto);
		
		  if(voto==1){
		  	votos_JB= votos_JB+1;
		  }
		    else if(voto==2){
		    	votos_ZC= votos_ZC+1;
			}
			  else if(voto==3){
		    	votos_MB= votos_MB+1;
		      } 
			      else if(voto==4){
		            votos_A= votos_A+1;
		          }
		             else if(voto==0){
		             	votos_Nulo= votos_Nulo+1;
					 }
					   else{
					   	printf("Voto invalido!\n");
					   }
	}
	
	    float porcentagem_JB = ((float) votos_JB/QUANTIDADE)*100;
	      printf("A quantidade de votos que Joao Borracheiro recebeu foi %d e uma porcentagem de %.2f\n", votos_JB, porcentagem_JB);
	      
	      float porcentagem_ZC = ((float) votos_ZC/QUANTIDADE)*100;
	      printf("A quantidade de votos que Zé do caminhao recebeu foi %d e uma porcentagem de %.2f\n", votos_ZC, porcentagem_ZC);
	      
	       float porcentagem_MB = ((float) votos_MB/QUANTIDADE)*100;
	        printf("A quantidade de votos que Maria da bodega recebeu foi %d e uma porcentagem de %.2f\n", votos_MB, porcentagem_MB);
	        
	        float porcentagem_A = ((float) votos_A/QUANTIDADE)*100;
	         printf("A quantidade de votos que Ana recebeu foi %d e uma porcentagem de %.2f\n", votos_A, porcentagem_A);
	         
	          float porcentagem_Nulo = ((float) votos_Nulo/QUANTIDADE)*100;
	           printf("A quantidade de votos nulos foi %d e uma porcentagem de %.2f\n", votos_Nulo, porcentagem_Nulo);
}
