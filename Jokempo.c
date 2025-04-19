#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));  // Semente aleatória

    printf("*** Jogo de Jokenpo ***\n");
    printf("Escolha uma opcao:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    scanf("%d", &escolhaJogador);

    // Gera número aleatório entre 1 e 3
    escolhaComputador = rand() % 3 + 1;

    // Mostrar escolha do jogador
    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");
            break;
        default:
            printf("Opção inválida\n");
            return 1; // Encerra o programa se a opção for inválida
    }

    // Mostrar escolha do computador
    switch (escolhaComputador) {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }

    // Determinar o vencedor
    if (escolhaJogador == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}
