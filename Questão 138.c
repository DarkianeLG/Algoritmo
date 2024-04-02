#include<stdio.h>
#include<conio.h>
void main (){
  int num;
  int soma= 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int resto= num;
    do{ 
       int resto1=resto%10;
       soma=soma+resto1;
       resto=resto/10;
   }
   while(resto!=0);
    printf("A soma dos algorismo do numero %d eh %d",num,soma);
    getch();
}
