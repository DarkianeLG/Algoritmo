//Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua área e o seu comprimento. O programa deve fornecer um subprograma para calcular
//a área e outro para calcular o comprimento. 

#include<stdio.h>
#include<conio.h>
#include<math.h>
const float PI= 3.14;
 float area (float raio){
 	return PI* pow(raio,2);	
 }
 float comprimento (float raio){
 	return 2*PI*raio;
 }
 void main (){
 float raio;
 
 printf("Informe o valor do raio: ");
 scanf("%f", &raio);
 float valorArea= area(raio);
 float valorComprimento= comprimento(raio);
  printf("A area eh %.1f ", valorArea);
  printf("O comprimento eh %.1f ", valorComprimento);
  getch ();
 
 }
