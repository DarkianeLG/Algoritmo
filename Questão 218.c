//Escreva um programa que leia um valor em segundos e converta para a forma X horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos
//e 10 segundos. O programa deve ter: um subprograma para calcular o valor das horas, um subprograma para calcular o valor dos , um subprograma para calcular o
//valor dos segundos e um subprograma para imprimir o resultado final.

#include<stdio.h>
#include<conio.h>

int xHoras(int valor){
	int hora= valor/3600;
	return hora;
}
int xMinutos(int valor){
	int resto= valor%3600;
	int minutos= resto/60;
	return minutos;
}
int xSegundos(int valor){
	int resto= valor%3600;
	int resto1= resto%60;
	int segundos= resto1%60;
	return segundos;
}
void main (){
	int valor;
	printf("Informe o valor em segundos: ");
	scanf("%d", &valor);
	int valorHoras= xHoras(valor);
    int valorMinutos= xMinutos(valor);
    int valorSegundos= xSegundos(valor);
    
    printf("O valor eh equivale a %d horas %d minutos %d segundos", valorHoras, valorMinutos, valorSegundos);
getch ();

}
