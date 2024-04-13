#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	// Imprimindo o cabeçalho do nosso jogo
	printf("-------------------------------------------\n"); 
	printf("| Bem Vindo ao nosso jogo de adivinhação! |\n");
	printf("-------------------------------------------\n");

	int segundos = time(0);
    srand(segundos);

	int bignum = rand();

	int numsecret = bignum % 100;
	int chute;
	int tentativas = 1;
	double pontos = 1000;
	
	int acertou = 0;

	int nivel;
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Easy, (2) Normal, (3) Hard\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	int numtentativas;

	// Escolha o tipo que achar melhor switch ou if else.

	switch(nivel) {
		case 1:
			numtentativas = 15;
			break;
		case 2:
			numtentativas = 10;			
			break;
		default:
			numtentativas = 5;
			break;
	}

	/* if(nivel == 1) {
		numtentativas = 15;
	} else if(nivel == 2) {
		numtentativas = 10;
	} else {
		numtentativas = 5;
	} */


	for(int i = 1; i <= numtentativas; i++) {

		printf("Tentativa %d\n", tentativas);
		printf("Qual é o seu chute? ");

		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if(chute < 0) {
			printf("Você não pode chutar números negativos!\n");
			continue;
		}

		acertou = (chute == numsecret);
		int maior = chute > numsecret;

		if(acertou){
			break;
		}

		else if(maior){
			printf("Seu chute foi maior que o número secreto!\n");
		} 

		else {
			printf("Seu chute foi menor que o número secreto!\n");
		}

		tentativas++;

		double pontosperdidos = abs(chute - numsecret) / (double)2;
		pontos = pontos - pontosperdidos;
		
	}

	printf("Fim de Jogo!\n");

	if(acertou) {
		printf("Você Ganhou!!!\n");
		printf("Você acertou em %d tentativas!\n", tentativas);
		printf("Total de pontos: %.1f\n", pontos);
	} else {
		printf("Você Perdeu!!! Tente de novo!\n");
	}

}
