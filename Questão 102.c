#include<stdio.h>
#include<conio.h>
void main(){
	
	int n, k;
	printf("Informe um numero inteiro N: ");
	scanf("%d", &n);
	for(k=1; k<=n; k++){
		if(n%k==0){
			printf(" %d",k);
		}
	}
getch ();
}

