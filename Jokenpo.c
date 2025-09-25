#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, CPU;
    printf("Jogo Jokenpo:\n");
    printf("Escolha sua jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &jogador);
    srand(time(0)); // Inicializa o gerador de números aleatórios

    CPU = rand() % 3 + 1; // Gera a jogada da CPU

    switch (jogador)
    {
    case 1:
    printf("Jogador escolheu Pedra\n");
    break;
    case 2:
    printf("Jogador escolheu Papel\n");
    break;
    case 3:
    printf("Jogador escolheu Tesoura\n");
    break;  
    default: printf("Jogada inválida!\n");
        break;
    }

    switch (CPU)
    {
    case 1:
        printf("CPU escolheu Pedra\n");
        break;
    case 2:
        printf("CPU escolheu Papel\n");
        break;
    case 3:
        printf("CPU escolheu Tesoura\n");
        break;
    }
    if (jogador == CPU) {
        printf("Empate!\n");
    } else if ((jogador == 1 && CPU == 3) || 
                (jogador == 2 && CPU == 1) || 
                (jogador == 3 && CPU == 2)) {
          printf("### Jogador vence!### \n");
     } else {
          printf("### CPU vence jogador perdeu!### \n");
     }
    return 0;
}