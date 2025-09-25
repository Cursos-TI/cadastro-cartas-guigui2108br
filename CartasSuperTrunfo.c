#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declaração das variáveis da cidade 1
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;

    // Declaração das variáveis da cidade 2
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;

    // ===== Entrada de dados da Cidade 1 =====
    printf("Fortaleza");
    scanf(" %[^\n]", nomeCidade1);

    printf("2.428.708");
    scanf("%d", &populacao1);

    printf("313,8 Km²");
    scanf("%f", &area1);

    printf("73,4 bilhões");
    scanf("%f", &pib1);

    // ===== Entrada de dados da Cidade 2 =====
    printf("\nRio de Janeiro");
    scanf(" %[^\n]", nomeCidade2);

    printf("6.211.223");
    scanf("%d", &populacao2);

    printf("1.200 Km²");
    scanf("%f", &area2);

    printf("359,6 bilhões");
    scanf("%f", &pib2);

    // ===== Área para exibição dos dados da cidade  =====
    printf("\n===== CARTA 1 =====\n");
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);

    printf("\n===== CARTA 2 =====\n");
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);

    return 0;
}


