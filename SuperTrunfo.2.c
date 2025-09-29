#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Carta 1 - São Paulo

    int Jogador;
    char cidade1[] = "São Paulo";
    char estado1[] = "SP";
    char codigo1[] = "A01";
    int pontos_turisticos_sp =50;
    unsigned long int populacao_sp = 12325000;
    float area_sp = 1521.11; // km²
    float pib_sp = 599.28; // bilhões
    float densidade_sp = 810247; // hab/km²
    float resultado= populacao_sp/area_sp; //  é convertido escplicitamente para float
    float resultado2= (float) (pib_sp * 1000000000) / populacao_sp;//  é convertido escplicitamente para float
    float superPoder1 = populacao_sp + area_sp + (resultado2 * 1000000000) + pontos_turisticos_sp + resultado2+ (1 / densidade_sp);


    printf("** SÃO PAULO **\n\n");
    printf("Escolha um atributo para competir (1 a 8):\n");
    scanf("%d", &Jogador);
    printf("-Carta 1:\n");
    printf("-Estado: SP\n");
    printf("-Código: A01\n");
    printf("-Cidade: São Paulo\n");
    printf("1-População: %lu\n", populacao_sp);
    printf("2-Área: %.2f km²\n", area_sp);
    printf("3-PIB: %.2f bilhões de reais\n", pib_sp);
    printf("4-Pontos turísticos: %d\n", pontos_turisticos_sp);
    printf("5-Densidade populacional: %.0f hab/km²\n", densidade_sp);
    printf("6-número de habitantes por Km²: %.2f\n", resultado);
    printf("7-PIB per Capita: %.2f reais\n", resultado2);
    printf("8-Super Poder: %.2f\n\n",superPoder1);

    // Carta 2 - Rio de Janeiro
    int cpu;
    char cidade[] = "Rio de Janeiro";
    char estado[] = "RJ";
    char codigo[] = "B02";
    int pontos_turisticos_rj = 51;
    unsigned long int populacao_rj = 6748000;
    float area_rj = 1200.25; // km²
    float pib_rj = 500.50; // bilhões
    float densidade_rj = 562224; // hab/km²
    float resultado3= populacao_rj/area_rj; // 'a' é convertido escplicitamente para float
    float resultado4 = (float) (pib_rj * 1000000000) / populacao_rj;// 'a' é convertido escplicitamente para float
    float superPoder2 = populacao_sp + area_sp + (resultado2 * 10000000000) + pontos_turisticos_sp + resultado4+ (1 / densidade_rj); 

    printf("** RIO DE JANEIRO **\n\n");
    printf("Escolha um atributo para competir (1 a 12):\n");
    printf("-Carta 2:\n");
    printf("-Estado: RJ\n");
    printf("-Código: B02\n");
    printf("-Cidade: Rio de Janeiro\n");
    printf("1-População: %lu\n", populacao_rj);
    printf("2-Área: %.2f km²\n", area_rj);
    printf("3-PIB: %.2f bilhões de reais\n", pib_rj);
    printf("4-Pontos turísticos: %d\n", pontos_turisticos_rj);
    printf("5-Densidade populacional: %.0f hab/km²\n", densidade_rj);
    printf("6-número de habitantes por Km²: %.2f\n", resultado3);
    printf("7-PIB per Capita: %.2f reais\n", resultado4);
    printf("8-Super Poder: %.2f\n\n",superPoder2);

switch (Jogador)
{
case 1:
    if (populacao_sp > populacao_rj) {
        printf("### Jogador vence!### \n");
    } else if (populacao_sp < populacao_rj) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
case 2:
    if (area_sp > area_rj) {
        printf("### Jogador vence!### \n");
    } else if (area_sp < area_rj) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
case 3:
    if (pib_sp > pib_rj) {
        printf("### Jogador vence!### \n");
    } else if (pib_sp < pib_rj) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
case 4:
    if (pontos_turisticos_sp > pontos_turisticos_rj) {
        printf("### Jogador vence!### \n");
    } else if (pontos_turisticos_sp < pontos_turisticos_rj) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
case 5:
    if (densidade_sp > densidade_rj) {
        printf("### Jogador vence!### \n");
    } else if (densidade_sp < densidade_rj) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
case 6:
    if (resultado > resultado3) {
        printf("### Jogador vence!### \n");
    } else if (resultado < resultado3) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
case 7:
    if (resultado2 > resultado4) {
        printf("### Jogador vence!### \n");
    } else if (resultado2 < resultado4) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
case 8:
    if (superPoder1 > superPoder2) {
        printf("### Jogador vence!### \n");
    } else if (superPoder1 < superPoder2) {
        printf("### CPU vence jogador perdeu!### \n");
    } else {
        printf("Empate!\n");
    }
    break;
default:
    printf("Jogada inválida!\n");
    break;
}

        return 0;
    }