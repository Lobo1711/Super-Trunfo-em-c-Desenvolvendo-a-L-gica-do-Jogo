#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char cidade1[] = "São Paulo";
    char estado1[] = "SP";
    char codigo1[] = "A01";
    int pontos_turisticos_sp =50;
    unsigned long int populacao_sp = 12325000;
    float area_sp = 1521.11; // km²
    float pib_sp = 699.28; // bilhões
    float densidade_sp = 810247; // hab/km²
    float resultado= populacao_sp/area_sp; //  é convertido escplicitamente para float
    float resultado2= (float) (pib_sp * 1000000000) / populacao_sp;//  é convertido escplicitamente para float
    float superPoder1 = populacao_sp + area_sp + (resultado2 * 1000000000) + pontos_turisticos_sp + resultado2+ (1 / densidade_sp);


    printf("** SÃO PAULO **\n\n");
    printf("Carta 1:\n");
    printf("Estado: SP\n");
    printf("Código: A01\n");
    printf("Cidade: São Paulo\n");
    printf("População: %lu\n", populacao_sp);
    printf("Área: %.2f km²\n", area_sp);
    printf("PIB: %.2f bilhões de reais\n", pib_sp);
    printf("Pontos turísticos: %d\n", pontos_turisticos_sp);
    printf("Densidade populacional: %.0f hab/km²\n", densidade_sp);
    printf("número de habitantes por Km²: %.2f\n", resultado);
    printf("PIB per Capita: %.2f reais\n", resultado2);
    printf("Super Poder: %.2f\n\n",superPoder1);

    // Carta 2 - Rio de Janeiro
    char cidade[] = "Rio de Janeiro";
    char estado[] = "RJ";
    char codigo[] = "B02";
    int pontos_turisticos_rj = 30;
    unsigned long int populacao_rj = 6748000;
    float area_rj = 1200.25; // km²
    float pib_rj = 300.50; // bilhões
    float densidade_rj = 562224; // hab/km²
    float resultado3= populacao_rj/area_rj; // 'a' é convertido escplicitamente para float
    float resultado4 = (float) (pib_rj * 1000000000) / populacao_rj;// 'a' é convertido escplicitamente para float
    float superPoder2 = populacao_sp + area_sp + (resultado2 * 10000000000) + pontos_turisticos_sp + resultado4+ (1 / densidade_rj);

    printf("** RIO DE JANEIRO **\n\n");
    printf("Carta 2:\n");
    printf("Estado: RJ\n");
    printf("Código: B02\n");
    printf("Cidade: Rio de Janeiro\n");
    printf("População: %lu\n", populacao_rj);
    printf("Área: %.2f km²\n", area_rj);
    printf("PIB: %.2f bilhões de reais\n", pib_rj);
    printf("Pontos turísticos: %d\n", pontos_turisticos_rj);
    printf("Densidade populacional: %.0f hab/km²\n", densidade_rj);
    printf("número de habitantes por Km²: %.2f\n", resultado3);
    printf("PIB per Capita: %.2f reais\n", resultado4);
    printf("Super Poder: %.2f\n\n",superPoder2);


    if (populacao_sp > populacao_rj){
        printf("São Paulo Vence\n");
    } else if (populacao_sp < populacao_rj){
        printf("Rio de Janeiro Vence\n");
    } else {
        printf("Empate em População\n");
    } if (area_sp > area_rj)
        printf ("São Paulo vence\n");
    else if (area_sp < area_rj)
        printf ("Rio de Janeiro vence\n");
    else
        printf("Empate em Área\n");
        if (pib_sp > pib_rj)
        {
            printf ("São Paulo vence\n");
        }
        else if (pib_sp < pib_rj)
        {
            printf ("Rio de Janeiro vence\n");
        }
        else
        {
            printf ("Empate em PIB\n");
        } if (pontos_turisticos_sp > pontos_turisticos_rj)
        {
            printf ("São Paulo vence\n");
        }
        else if (pontos_turisticos_sp < pontos_turisticos_rj)
        {
            printf ("Rio de Janeiro vence\n");
        }
        else
        {
            printf ("Empate em Pontos Turísticos\n");
        } if (densidade_sp <densidade_rj)
        {
            printf ("São Paulo vence\n");
        }
        else if (densidade_sp > densidade_rj)
        {
            printf ("Rio de Janeiro vence\n");
        }
        else
        {
            printf ("Empate em Densidade Populacional\n");
        } if (superPoder1 > superPoder2)
        {
            printf ("São Paulo vence\n");
        }
        else if (superPoder1 < superPoder2)
        {
            printf ("Rio de Janeiro vence\n");
        }
        else
        {
            printf ("Empate em Super Poder\n");
        }
    return 0;
    }