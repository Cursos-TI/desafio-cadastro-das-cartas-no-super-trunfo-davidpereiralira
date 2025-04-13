#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
#define MAX_ESTADOS 8 // Número máximo de estados
#define MAX_CIDADES_POR_ESTADO 4 // Número máximo de cidades por estado

typedef struct {
    char codigo[4]; // Código da cidade com três dígitos
    char nomeCidade[50]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área em km²
    float pib; // PIB em bilhões
    int pontosTuristicos; // Número de pontos turísticos
} Carta;

int main() {
    Carta cartas[MAX_ESTADOS * MAX_CIDADES_POR_ESTADO]; //Armazena todas as cartas
    int totalCartas = 0; // Contador de cartas cadastradas

    // Cadastro das Cartas:
    printf("Cadastro da Carta A01\n");
    printf("digite o nome da cidade: ");
    scanf("%s", cartas[totalCartas].nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &cartas[totalCartas].populacao);
    printf("Digite a área: ");
    scanf("%f", &cartas[totalCartas].area);
    printf("Digite o PIB: ");
    scanf("%f", &cartas[totalCartas].pib); 
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &cartas[totalCartas].pontosTuristicos);
    snprintf(cartas[totalCartas].codigo, sizeof(cartas[totalCartas].codigo), "A01");
    totalCartas++;

    printf("Cadastro da Carta A02\n");
    printf("digite o nome da cidade: ");
    scanf("%s", cartas[totalCartas].nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &cartas[totalCartas].populacao);
    printf("Digite a área: ");
    scanf("%f", &cartas[totalCartas].area);
    printf("Digite o PIB: ");
    scanf("%f", &cartas[totalCartas].pib); 
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &cartas[totalCartas].pontosTuristicos);
    snprintf(cartas[totalCartas].codigo, sizeof(cartas[totalCartas].codigo), "A02");
    totalCartas++;

    // Exibição dos Dados das Cartas:
    printf("\nExibição dos Dados das Cartas\n");
    for (int i = 0; i < totalCartas; i++) {
        printf("\nCarta %s: \n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f \n", cartas[i].area);
        printf("PIB: %.2f \n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
    }
    
    return 0;
}
