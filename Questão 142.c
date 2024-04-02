#include<stdio.h>
#include<conio.h>
const float JUROS=0.07;
void main (){
	float valorFinanciado, prestacoes;
	int k;
	printf("Informe o valor que vai ser financiado: ");
	scanf("%f", &valorFinanciado);
	printf("Qual o numero de prestacoes desejadas? ");
	scanf("%f", &prestacoes);
	float primPrestacao= valorFinanciado/prestacoes;
	printf("O valor da primeira prestacao eh: R$%.2f", primPrestacao);
	
	float prestacaoAnterior= primPrestacao;
	float totalSerPago=prestacaoAnterior;
	
	 for(k=2; k<=prestacoes; k++){
	 	 float outrasPrestacao= prestacaoAnterior+(prestacaoAnterior*JUROS);
	   	 totalSerPago=totalSerPago+outrasPrestacao;
	 	
	 	 printf("\nO valor da proxima parcela eh: R$%.2f\n", outrasPrestacao);
	 	 prestacaoAnterior=outrasPrestacao;
	 	 
	   }
	    float diferenca= totalSerPago-valorFinanciado;
	    printf("O valor do total que o cliente tem que pagar eh: R$%.2f\n", totalSerPago);
	    printf("A diferenca entre o valor a ser pago o e o valor financiado eh: R$%.2f\n", diferenca);
	 
	 getch();
}
