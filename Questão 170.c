#include<stdio.h>
#include<conio.h>
void main (){
int num, k, rodada;
int total_abertas=0;

printf("Informe o numero de salas: ");
scanf("%d", &num);
int sala[num];
for(k=0; k<num; k++){
	sala[k]=0;
}
 for(rodada=1; rodada<=num; rodada++){
 	for(k=rodada-1; k<num; k+=rodada){
 		if(sala[k]==0){
 			sala[k]=1;
		 }
		 else{
		 	sala[k]=0;
		 }
	   }   
   }
   for(k=0; k<num; k++){
   	if(sala[k]==1){
   		total_abertas= total_abertas+1;
	   }
   }
    printf("Ficou %d porta aberta", total_abertas);
getch ();
}
 
 
 
