#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 1:
    char estado1;
    char codigo1[3];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int atracoes1;
    float pibPerCapta1;
    float densidade1;

    // Carta 2:
    char estado2;
    char codigo2[3];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int atracoes2;
    float pibPerCapta2;
    float densidade2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("DADOS DA CARTA 1: \n");

    printf("\nSelecione o estado 1. Informe uma letra entre A e H: ");
    scanf(" %c", &estado1);

    printf("Selecione o código 1. Informe um numero de 01 a 04: ");
    scanf(" %s", codigo1);
 
    printf("Informe o nome da cidade 1: ");
    scanf(" %[^\n]", nome1);
        
    printf("Informe a população da cidade 1: ");
    scanf("%d", &populacao1);
    
    printf("Informe a área da cidade 1: ");
    scanf("%f", &area1);
    
    printf("Informe o PIB da cidade 1: ");
    scanf("%f", &pib1);
    
    printf("Informe o número de pontos turísticos na cidade 1: ");
    scanf("%d", &atracoes1);

    densidade1 = area1 / populacao1;
    pibPerCapta1 = pib1 / populacao1;

    printf("\n--------------------------------------------------------\n\n");
    
    printf("DADOS DA CARTA 2: \n");
        
    printf("\nSelecione o estado 2. Informe uma letra entre A e H: ");
    scanf(" %c", &estado2);

    printf("Selecione o código 2. Informe um numero de 02 a 04: ");
    scanf(" %s", codigo2);
 
    printf("Informe o nome da cidade 2: ");
    scanf(" %[^\n]", nome2);
        
    printf("Informe a população da cidade 2: ");
    scanf("%d", &populacao2);
    
    printf("Informe a área da cidade 2: ");
    scanf("%f", &area2);
    
    printf("Informe o PIB da cidade 2: ");
    scanf("%f", &pib2);
    
    printf("Informe o número de pontos turísticos na cidade 2: ");
    scanf("%d", &atracoes2);
    
    densidade2 = area2 / populacao2;
    pibPerCapta1 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n================ RESULTADO ================\n\n");

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", atracoes1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta1);
    
    
    printf("\n--------------------------------\n\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", atracoes2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta2);

    printf("\n=============================================\n\n");

    return 0;
}