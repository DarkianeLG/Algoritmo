//Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um terceiro vetor que contenha todos os elementos que estão presentes nos dois vetores. O terceiro vetor não deverá armazenar valores repetidos.

#include <stdio.h>
const int TAMANHO=5;
void lerVetor(int vet[], int quantidade){
  int k;
  for(k=0; k<quantidade; k++){
    printf("Informe um numero:");
    scanf("%d", &vet[k]);
  }
}
int pertence(int vet[], int tamanho, int num){
int k;
  for(k=0; k<tamanho; k++){
    if(vet[k]==num){
      return 1;
    }
  }
  return 0;
}
int uniao(int vet1[], int vet2[], int vet3[], int quantidade){
  int k;
  for(k=0; k<quantidade; k++){
  	if(pertence(vet3, quantidade, vet1[k])){
    vet3[k]=vet1[k];
    printf(" %d", vet3[k]);
   }
  }
  for(k=0; k<quantidade; k++){
    if(pertence(vet3, quantidade, vet2[k])==0){
      vet3[quantidade+k]=vet2[k];
      printf(" %d", vet3[quantidade+k]);
      
    }
  }
  return 0;
}

void main(void) {
  int vet1[TAMANHO];
  int vet2[TAMANHO];
  int vet3[TAMANHO*2];
  printf("Lendo o primeiro vetor\n");
  lerVetor(vet1, TAMANHO);
  printf("Lendo o segundo vetor\n");
  lerVetor(vet2, TAMANHO);
  uniao(vet1, vet2, vet3, TAMANHO);
}
