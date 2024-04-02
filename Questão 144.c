#include<stdio.h>
#include<conio.h>

void main () {
	int n,k;
	int fatorial= 1;
	int numeroNatural=1;
	printf("Informe um numero N: ");
	scanf("%d", &n); 
	while(fatorial<=n){
		for(k=n; k>=1; k--){
			fatorial= fatorial*k;
			numeroNatural++;
		}
	}
	 printf("O primeiro numero natural cujo fatorial eh maior do que %d eh %d\n", n, numeroNatural);

 getch ();
}
