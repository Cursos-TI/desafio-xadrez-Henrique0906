#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
	int i = 0;
	
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
	printf("Bispo anda: \n");
	for (int i = 0; i <= 4; i++) {
		printf("direita, cima\n");
	}
	
	// Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
	printf("\nTorre anda: \n");
	for (int i = 0; i <= 4; i++) {
		printf("direita\n");
	}
	
	// Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
	printf("\nRainha anda: \n");
	for (int i = 0; i <= 7; i++) {
		printf("esquerda\n");
	}

    return 0;
}