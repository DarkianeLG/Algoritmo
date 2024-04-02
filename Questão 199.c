//Escreva um programa que leia três números inteiros e calcule a sua média aritmética. O cálculo da média deve ser realizado através de um subprograma.

#include <stdio.h>
#include <conio.h>
const int QUANTIDADE = 3;
int media(int num1, int num2, int num3) {
    int soma = num1 + num2 + num3;
    float mediaAri=(float)soma / QUANTIDADE;
    
    return mediaAri;
}
void main() {
    int k, num1, num2, num3;
    printf("Informe tres numeros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    float valorMedia = media(num1, num2, num3);
    printf("A media aritmetica eh %.1f", valorMedia);
}

