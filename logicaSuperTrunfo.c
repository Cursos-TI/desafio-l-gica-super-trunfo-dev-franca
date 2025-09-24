#include <stdio.h>

int main() {
    // --- Variáveis para a Carta 1 ---
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // --- Variáveis para a Carta 2 ---
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // --- Coleta de dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // --- Coleta de dados da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calcula a densidade para ambas as cartas
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    int opcao;

    printf("==============================================\n");
    printf("Cartas cadastradas! Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence!)\n");
    printf("Digite sua opcao: ");
    
    scanf("%d", &opcao);
    printf("==============================================\n\n");

    switch (opcao) {
        case 1:
            printf("--> Atributo escolhido: Populacao\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("\n>>> VENCEDOR: %s!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\n>>> VENCEDOR: %s!\n", cidade2);
            } else {
                printf("\n>>> EMPATE!\n");
            }
            break;

        case 2:
            printf("--> Atributo escolhido: Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            if (area1 > area2) {
                printf("\n>>> VENCEDOR: %s!\n", cidade1);
            } else if (area2 > area1) {
                printf("\n>>> VENCEDOR: %s!\n", cidade2);
            } else {
                printf("\n>>> EMPATE!\n");
            }
            break;

        case 3:
            printf("--> Atributo escolhido: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("\n>>> VENCEDOR: %s!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\n>>> VENCEDOR: %s!\n", cidade2);
            } else {
                printf("\n>>> EMPATE!\n");
            }
            break;

        case 4:
            printf("--> Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\n>>> VENCEDOR: %s!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\n>>> VENCEDOR: %s!\n", cidade2);
            } else {
                printf("\n>>> EMPATE!\n");
            }
            break;

        case 5:
            printf("--> Atributo escolhido: Densidade Demografica (MENOR vence)\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("\n>>> VENCEDOR: %s!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("\n>>> VENCEDOR: %s!\n", cidade2);
            } else {
                printf("\n>>> EMPATE!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    return 0;
}