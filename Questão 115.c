#include <stdio.h>
#include <math.h>

const int QUANTIDADE = 3;

int main() {
    float peso, altura;
    int k;
    int acumuladoBaixo = 0;
    int acumuladoAcima = 0;
    int acumuladoAdequada = 0;

    for (k = 1; k <= QUANTIDADE; k++) {
        printf("Informe o peso da pessoa: ");
        scanf("%f", &peso);
        printf("Agora, informe a altura: ");
        scanf("%f", &altura);

        float IMC = peso / pow(altura, 2);
        printf("IMC: %.2f\n", IMC);
   
        if (IMC < 18) {
            acumuladoBaixo = acumuladoBaixo + 1;
            
       }
	      else if (IMC > 25) {
            acumuladoAcima = acumuladoAcima + 1;
          }
		    else {
              acumuladoAdequada = acumuladoAdequada + 1;
           }
    }  
         float porcentagemBaixa = ((float)acumuladoBaixo / QUANTIDADE) * 100;
            printf("A porcentagem das pessoas que estao abaixo do peso eh %.2f\n", porcentagemBaixa);
          
          float porcentagemAcima = ((float)acumuladoAcima / QUANTIDADE) * 100;
            printf("A porcentagem das pessoas que estao acima do peso eh %.2f\n", porcentagemAcima);
          
          float porcentagemAdequada = ((float)acumuladoAdequada / QUANTIDADE) * 100;
            printf("A porcentagem das pessoas que estao no peso adequado eh %.2f\n", porcentagemAdequada);
    getch ();
}
