#include<stdio.h>
#include<conio.h>
int const QUANTIDADE=10;
void main() {
	int k, num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	int maior1= num;
	int maior2= num;
	for(k=2; k<=QUANTIDADE; k++){
		printf("Informe um numero: ");
	    scanf("%d", &num);
	    if(num>maior1){
	    	maior2=maior1;
	    	maior1=num;
		}
		   if(num>maior2 && num!=maior1){
		    	maior2=num;
		    }
   }
      float diferenca= maior1-maior2;
      printf("O primeiro maior numero eh: %d", maior1);
      printf("\nO segundo maior numero eh: %d", maior2);
      printf("\nA diferenca entre os dois maiores numero eh: %.1f", diferenca);
getch ();
}
