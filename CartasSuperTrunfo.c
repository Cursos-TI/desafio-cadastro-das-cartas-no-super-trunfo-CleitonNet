#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cod;
    char name[50];
    int population;
    float area;
    double pib;
    int attractions;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Informe o código da cidade: \n");
    scanf("%d", &cod);
    
    printf("Informe o nome da cidade: \n");
    scanf("%s", &name);
    
    printf("Informe a população da cidade: \n");
    scanf("%d", &population);
    
    printf("Informe a área da cidade: \n");
    scanf("%f", &area);
    
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib);
    
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &attractions);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n================ RESULTADO ================\n");
    printf("Código da cidade: %d\n", cod);
    printf("Nome da cidade: %s\n", name);
    printf("População da cidade: %d\n", population);
    printf("Área da cidade: %.3f\n", area);
    printf("PIB da cidade: %.2f\n", pib);
    printf("Número de pontos turísticos na cidade: %d\n", attractions);
    printf("=============================================\n\n");

    return 0;
}
