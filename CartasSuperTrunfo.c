#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
#define MAX_ESTADOS 8 // Número máximo de estados
#define MAX_CIDADES_POR_ESTADO 4 // Número máximo de cidades por estado

typedef struct {
    char codigo[4]; // Código da cidade com três dígitos
    char nomeCidade[50]; // Nome da cidade
    unsigned long int populacao; // População da cidade
    float area; // Área em km²
    float pib; // PIB em bilhões
    int pontosTuristicos; // Número de pontos turísticos
    float densidadePopulacional; // Densidade populacional (população/área)
    float PIBPerCapita; // PIB per capita (PIB/população)
    float superPoder; // Super Poder
} Carta;

int main() {
    Carta cartas[MAX_ESTADOS * MAX_CIDADES_POR_ESTADO]; //Armazena todas as cartas
    int totalCartas = 0; // Contador de cartas cadastradas

    // Cadastro da Carta A01:
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
    
    //Cálculo da densidade populacional e PIB per capita para carta A01:
    cartas[totalCartas].densidadePopulacional = (float)cartas[totalCartas].populacao / cartas[totalCartas].area;
    cartas[totalCartas].PIBPerCapita = cartas[totalCartas].pib / cartas[totalCartas].populacao;
    
    //Cálculo Super Poder:
    cartas[totalCartas].superPoder = (float)cartas[totalCartas].populacao + cartas[totalCartas].area + cartas[totalCartas].pib + cartas[totalCartas].pontosTuristicos + cartas[totalCartas].pib + cartas[totalCartas].PIBPerCapita + (1 / cartas[totalCartas].densidadePopulacional);
    
    //Armazenar o código da carta A01 e incrementar o contador de cartas:
    snprintf(cartas[totalCartas].codigo, sizeof(cartas[totalCartas].codigo), "A01");
    totalCartas++;

    // Cadastro da Carta A02:
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
    
    //cálculo da densidade populacional e PIB per capita para a carta A02
    cartas[totalCartas].densidadePopulacional = (float)cartas[totalCartas].populacao / cartas[totalCartas].area;
    cartas[totalCartas].PIBPerCapita = cartas[totalCartas].pib / cartas[totalCartas].populacao;
   
    //Cálculo Super Poder:
    cartas[totalCartas].superPoder = (float)cartas[totalCartas].populacao + cartas[totalCartas].area + cartas[totalCartas].pib + cartas[totalCartas].pontosTuristicos + cartas[totalCartas].pib + cartas[totalCartas].PIBPerCapita + (1 / cartas[totalCartas].densidadePopulacional);
    
    //Armazenar o código da carta A02 e incrementar o contador de cartas:
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
        printf("Densidade Populacional: %.2f\n", cartas[i].densidadePopulacional);
        printf("PIB Per Capita: %.2f\n", cartas[i].PIBPerCapita);
        printf("Super Poder: %.2f\n", cartas[i].superPoder);
    }
    
    //Comparar os atributos das cartas:
    printf("\nComparação de cartas\n");
    printf("População: Carta %d venceu\n", cartas[0].populacao > cartas[1].populacao ? 1 : 2);
    printf("Área: Carta %d venceu\n", cartas[0].area > cartas[1].area ? 1 : 2);
    printf("PIB: Carta %d venceu\n", cartas[0].pib > cartas[1].pib ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", cartas[0].pontosTuristicos > cartas[1].pontosTuristicos ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", cartas[0].densidadePopulacional < cartas[1].densidadePopulacional ? 1 : 2);
    printf("PIB Per Capita: Carta %d venceu\n", cartas[0].PIBPerCapita > cartas[1].PIBPerCapita ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", cartas[0].superPoder > cartas[1].superPoder ? 1 : 2);
    
    return 0;
}