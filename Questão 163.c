//O IFPB precisa de um programa que faça a correção automática das provas do seu teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
//questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no
//seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu percentual de acertos. O processamento deve ser encerrado quando for encontrado
//um candidato com o nome ´fim’, que não deve ser processado. O programa deve imprimir também a pontuação média dos candidatos.
#include<stdio.h>
#include<conio.h>
#include<string.h>
const int QUANTIDADE=10;
void main (){
	char gabarito[QUANTIDADE];
	char resposta[QUANTIDADE];
	int soma=0;
	float acumulado=0;
	float quantidade=0;
	char nome[50];
	int k;
	
	printf("O processo de leitura vai ser encerrado quando for informe um candidato com o nome fim.\n");
	printf("Lendo o gabarito\n");
	for(k=0; k<QUANTIDADE; k++){
		printf("Informe a resposta da questao %d: ", k+1);
		fflush(stdin);
		scanf("%c", &gabarito[k]);
	}
	fflush(stdin);
	printf("Agora informe o nome do aluno: ");
	gets(nome);
	
	while(strcmp(nome,"fim")){
		printf("Lendo o cartao de resposta\n");
		for(k=0; k<QUANTIDADE; k++){
			printf("Informe a resposta do aluno na questao %d: ", k+1);
			fflush(stdin);
			scanf("%c", &resposta[k]);
		}
		for(k=0; k<QUANTIDADE; k++){
			if(gabarito[k]==resposta[k]){
				soma=soma+1;
			}
		}
		float porcentagem= ((float)soma/QUANTIDADE)*100;
		acumulado=acumulado+porcentagem;
		quantidade=quantidade+1;
		printf("%s acertou %.2f porcento da prova\n", nome, porcentagem);
		printf("Agora informe o nome do proximo aluno: ");
		fflush(stdin);
		gets(nome);
		soma=0;
	}
	float pontuacaoMedia= acumulado/quantidade;
	printf("A pontuacao media dos alunos foi %.2f", pontuacaoMedia);
	
getch ();
}



