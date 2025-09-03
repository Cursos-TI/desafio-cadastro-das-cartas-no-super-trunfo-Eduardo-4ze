#include <stdio.h>

// Super Trunfo - Cartas de Cidades Brasileiras
// Este código cria duas cartas de cidades brasileiras
// Cada carta possui: Estado, Código, Cidade, População, Área, PIB e Pontos Turísticos
// Os dados são aproximados e apenas para fins do jogo

int main() {
    // Carta 1 - Porto Alegre
    char estado1[] = "Rio Grande do Sul"; // Nome do estado
    char codigo1[] = "RS01";             // Código da carta
    char cidade1[] = "Porto Alegre";    // Nome da cidade
    int populacao1 = 1485000;            // População aproximada
    float area1 = 496.8;                 // Área em km2
    float pib1 = 82.0;                   // PIB aproximado em bilhões
    int pontos1 = 20;                     // Numero de pontos turísticos(estimado)

    // Carta 2 - são Paulo
    char estado2[] = "São Paulo";
    char codigo2[] = "SP01";
    char cidade2[] = "São Paulo";
    int populacao2 = 12325000;
    float area2 = 1521.1;
    float pib2 = 699.2;
    int pontos2 = 50;

    // Impressão das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0; // mostra que o programa terminou corretamente
}
