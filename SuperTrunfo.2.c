//Nome Guilherme Carlos da Silva
//Matrícula: 202508025604

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Carta 1 - São Paulo
    char cidade1[] = "São Paulo";
    char estado1[] = "SP";
    char codigo1[] = "A01";
    int pontos_turisticos_sp = 50;
    unsigned long int populacao_sp = 12325000;
    float area_sp = 1521.11; // km²
    float pib_sp = 599.28; // bilhões
    float densidade_sp = populacao_sp / area_sp; 
    float pib_percapita_sp = (pib_sp * 1000000000) / populacao_sp;
    float superPoder1 = populacao_sp + area_sp + (pib_percapita_sp * 1000) + pontos_turisticos_sp + (1 / densidade_sp);

    // Carta 2 - Rio de Janeiro
    char cidade2[] = "Rio de Janeiro";
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    int pontos_turisticos_rj = 51;
    unsigned long int populacao_rj = 6748000;
    float area_rj = 1200.25; // km²
    float pib_rj = 588.50; // bilhões
    float densidade_rj = populacao_rj / area_rj;
    float pib_percapita_rj = (pib_rj * 1000000000) / populacao_rj;
    float superPoder2 = populacao_rj + area_rj + (pib_percapita_rj * 1000) + pontos_turisticos_rj + (1 / densidade_rj);

    int escolha1, escolha2;
    float valor1_sp = 0, valor1_rj = 0;
    float valor2_sp = 0, valor2_rj = 0;

    printf("=== SUPER TRUNFO ===\n\n");

    ("Carta 1: %s (%s-%s)\n", cidade1, estado1, codigo1);
    ("1 - População: %lu\n", populacao_sp);
    ("2 - Área: %.2f km²\n", area_sp);
    ("3 - PIB: %.2f bilhões\n", pib_sp);
    ("4 - Pontos turísticos: %d\n", pontos_turisticos_sp);
    ("5 - Densidade Demográfica: %.2f hab/km²\n", densidade_sp);
    ("6 - PIB per Capita: %.2f\n", pib_percapita_sp);
    ("7 - Super Poder: %.2f\n", superPoder1);

    printf("\nEscolha o PRIMEIRO atributo para comparar (1 a 7):\n");
    scanf("%d", &escolha1);

    // Menu dinâmico: não mostra o atributo já escolhido
    printf("\nEscolha o SEGUNDO atributo para comparar (1 a 7), diferente de %d:\n", escolha1);
    for (int i = 1; i <= 7; i++) {
        if (i == escolha1) continue; 
        switch (i) {
            case 1: printf("1 - População\n");
             break;
            case 2: printf("2 - Área\n");
             break;
            case 3: printf("3 - PIB\n");
             break;
            case 4: printf("4 - Pontos turísticos\n");
             break;
            case 5: printf("5 - Densidade Demográfica\n");
             break;
            case 6: printf("6 - PIB per Capita\n");
             break;
            case 7: printf("7 - Super Poder\n");
             break;
        }
    }
    scanf("%d", &escolha2);

    // Função de atribuição de valores via switch
    switch (escolha1) {
        case 1: valor1_sp = populacao_sp; valor1_rj = populacao_rj;
         break;
        case 2: valor1_sp = area_sp; valor1_rj = area_rj;
         break;
        case 3: valor1_sp = pib_sp; valor1_rj = pib_rj; 
        break;
        case 4: valor1_sp = pontos_turisticos_sp; valor1_rj = pontos_turisticos_rj;
         break;
        case 5: valor1_sp = densidade_sp; valor1_rj = densidade_rj;
         break;
        case 6: valor1_sp = pib_percapita_sp; valor1_rj = pib_percapita_rj; 
        break;
        case 7: valor1_sp = superPoder1; valor1_rj = superPoder2; 
        break;
    }

    switch (escolha2) {
        case 1: valor2_sp = populacao_sp; valor2_rj = populacao_rj;
         break;
        case 2: valor2_sp = area_sp; valor2_rj = area_rj;
         break;
        case 3: valor2_sp = pib_sp; valor2_rj = pib_rj;
         break;
        case 4: valor2_sp = pontos_turisticos_sp; valor2_rj = pontos_turisticos_rj;
         break;
        case 5: valor2_sp = densidade_sp; valor2_rj = densidade_rj;
         break;
        case 6: valor2_sp = pib_percapita_sp; valor2_rj = pib_percapita_rj;
         break;
        case 7: valor2_sp = superPoder1; valor2_rj = superPoder2;
         break;
    }

    // Comparação especial para densidade (menor vence)
    int resultado1 = (escolha1 == 5) ? (valor1_sp < valor1_rj ? 1 : (valor1_sp > valor1_rj ? -1 : 0)) 
                                     : (valor1_sp > valor1_rj ? 1 : (valor1_sp < valor1_rj ? -1 : 0));

    int resultado2 = (escolha2 == 5) ? (valor2_sp < valor2_rj ? 1 : (valor2_sp > valor2_rj ? -1 : 0)) 
                                     : (valor2_sp > valor2_rj ? 1 : (valor2_sp < valor2_rj ? -1 : 0));

    float soma_sp = valor1_sp + valor2_sp;
    float soma_rj = valor1_rj + valor2_rj;

    printf("\n===== RESULTADO =====\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n\n", cidade2);

    printf("Atributo %d -> %s: SP = %.2f | RJ = %.2f\n", escolha1,
           (escolha1 == 5 ? "Densidade Demográfica" :
            escolha1 == 1 ? "População" :
            escolha1 == 2 ? "Área" :
            escolha1 == 3 ? "PIB" :
            escolha1 == 4 ? "Pontos Turísticos" :
            escolha1 == 6 ? "PIB per Capita" : "Super Poder"),
           valor1_sp, valor1_rj);

    printf("Atributo %d -> %s: SP = %.2f | RJ = %.2f\n", escolha2,
           (escolha2 == 5 ? "Densidade Demográfica" :
            escolha2 == 1 ? "População" :
            escolha2 == 2 ? "Área" :
            escolha2 == 3 ? "PIB" :
            escolha2 == 4 ? "Pontos Turísticos" :
            escolha2 == 6 ? "PIB per Capita" : "Super Poder"),
           valor2_sp, valor2_rj);

    printf("\nSoma dos atributos:\n");
    printf("São Paulo = %.2f | Rio de Janeiro = %.2f\n", soma_sp, soma_rj);

    if (soma_sp > soma_rj)
        printf("\n>>> SÃO PAULO venceu a rodada! <<<\n");
    else if (soma_sp < soma_rj)
        printf("\n>>> RIO DE JANEIRO venceu a rodada! <<<\n");
    else
        printf("\n>>> EMPATE! <<<\n");

    return 0;
}
    