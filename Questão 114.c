#include<stdio.h>
#include<conio.h>
void main ();
int base, expoente;
int potencia=1;
printf("Informe a base: ");
scanf("%d", &base);
printf("Informe a expoente: ");
scanf("%d", &expoente);
for(k=1; k<=expoente; k++){
	potencia=potencia*base;
}
printf("%d elevado a %d eh %d\n", base,expoente,potencia);
getch ();
}


