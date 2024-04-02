#include<stdio.h>
#include<conio.h>
void main (){
float valor1, valor2;
printf("Informe os dois ultimos valores da leitura de energia em KWh: ");
scanf("%f%f", &valor1, &valor2);
float valorKWh= valor1+valor2;
float valorReais= valorKWh*0.35;
float valorICMC= valorReais+(valorReais*0.17);
float valorComTaxa= valorICMC+15;
printf("O valor da conta eh %.2f", valorComTaxa);

getch();

}
