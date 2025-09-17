#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Cartas Super Trunfo! \n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char nome1[20], nome2[20];
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;

  // Área para entrada de dados
    printf("Digite a população total da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em quilometros quadrados (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB(Produto Interno Bruto): \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontos1);

    printf("Digite a população total da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em quilometros quadrados (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB(Produto Interno Bruto): \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
    
    printf("Carta 1: \n População: %d\n Área: %.3f km²\n PIB: %.3f milhões de reais\n Números de Pontos Turísticos: %d\n", estado1, codigo1, nome1, populacao1, area1, pib1, pontos1);
    printf("----------------\n");
    printf("Carta 2: \nPopulação: %d\n Área: %.3f km²\n PIB: %.3f milhões de reais\n Números de Pontos Turísticos: %d\n", estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

return 0;
} 
