#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Declaracao das variaveis para carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Declaracao das variaveis para a carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados da primeira carta
  printf("Insira os dados da primeira carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta (ex: A01): ");
  scanf("%3s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (em km²): ");
  scanf("%f", &area1);

  printf("PIB (em R$ bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\n");

   // Área para entrada de dados da segunda carta
  printf("Insira os dados da segunda carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2); 

  printf("Codigo da carta (ex: B02 ): ");
  scanf("%3s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (em km²): ");
  scanf("%f", &area2);

  printf("PIB (em R$ bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  printf("\n");

  // Área para exibição dos dados da cidade carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo:%s\n", codigo1);
  printf("Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: R$ %.2f bilhões de reais\n", pib1);
  printf("Pontos turisticos: %d\n", pontosTuristicos1);

  printf("\n");

  // Área para exibição dos dados da cidade carta 2
  printf("Carta 2:\n");
  printf("Codigo:%s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("Estado: %c\n", estado2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões de reais\n", pib2);
  printf("Pontos turisticos: %d\n", pontosTuristicos2);


return 0; // Fim do programa
} 
