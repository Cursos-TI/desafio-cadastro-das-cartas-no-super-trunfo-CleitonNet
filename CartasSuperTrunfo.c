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
    unsigned long int populacao1;
    float area1;
    float pib1;
    int atracoes1;
    float pibPerCapta1;
    float densidade1;
    float superPoder1;

    // Carta 2:
    char estado2;
    char codigo2[3];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int atracoes2;
    float pibPerCapta2;
    float densidade2;
    float superPoder2;

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
    scanf("%lu", &populacao1);
    
    printf("Informe a área da cidade 1: ");
    scanf("%f", &area1);
    
    printf("Informe o PIB da cidade 1: ");
    scanf("%f", &pib1);
    
    printf("Informe o número de pontos turísticos na cidade 1: ");
    scanf("%d", &atracoes1);

    // Calculos da carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)atracoes1 + pibPerCapta1 + (1/densidade1);

    printf("\n--------------------------------------------------------\n\n");
    
    printf("DADOS DA CARTA 2: \n");
        
    printf("\nSelecione o estado 2. Informe uma letra entre A e H: ");
    scanf(" %c", &estado2);

    printf("Selecione o código 2. Informe um numero de 01 a 04: ");
    scanf(" %s", codigo2);
 
    printf("Informe o nome da cidade 2: ");
    scanf(" %[^\n]", nome2);
        
    printf("Informe a população da cidade 2: ");
    scanf("%lu", &populacao2);
    
    printf("Informe a área da cidade 2: ");
    scanf("%f", &area2);
    
    printf("Informe o PIB da cidade 2: ");
    scanf("%f", &pib2);
    
    printf("Informe o número de pontos turísticos na cidade 2: ");
    scanf("%d", &atracoes2);
    
    // Calculos da carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;
    superPoder2  = (float)populacao2 + area2 + pib2 + (float)atracoes2 + pibPerCapta2 + (1/densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n================ RESULTADO ================\n\n");

    printf("CARTA 1: \n");
    printf("Estado: %c\n",                           estado1            );
    printf("Código: %c%s\n",                         estado1, codigo1   );
    printf("Nome da Cidade: %s\n",                   nome1              );
    printf("População: %lu\n",                       populacao1         );
    printf("Área: %.2f km² \n",                      area1              );
    printf("PIB: %.2f bilhões de reais \n",          pib1               );
    printf("Número de Pontos Turísticos: %d\n",      atracoes1          );
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1         );
    printf("PIB per Capita: %.2f reais\n",           pibPerCapta1       );
    printf("Super Poder: %.2f\n",                    superPoder1        );
    
    printf("\n--------------------------------\n\n");
    
    printf("CARTA 2: \n");
    printf("Estado: %c\n",                           estado2            );
    printf("Código: %c%s\n",                         estado2, codigo2   );
    printf("Nome da Cidade: %s\n",                   nome2              );
    printf("População: %lu\n",                       populacao2         );
    printf("Área: %.2f km² \n",                      area2              );
    printf("PIB: %.2f bilhões de reais \n",          pib2               );
    printf("Número de Pontos Turísticos: %d\n",      atracoes2          );
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2         );
    printf("PIB per Capita: %.2f reais\n",           pibPerCapta2       );
    printf("Super Poder: %.2f\n",                    superPoder2        );

    printf("\n---------------------------------\n");
    printf("***** COMPARAÇÂO DAS CARTAS *****\n");
    printf("---------------------------------\n\n");

    // printf("COMPARAÇÃO DAS CARTAS: \n");
    printf("População: Carta %d venceu (%d)\n",                 ( populacao1   > populacao2   ), ( populacao1   > populacao2   ));
    printf("Área: Carta %d venceu (%d)\n",                      ( area1        > area2        ), ( area1        > area2        ));
    printf("PIB: Carta %d venceu (%d)\n",                       ( pib1         > pib2         ), ( pib1         > pib2         ));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",         ( atracoes1    > atracoes2    ), ( atracoes1    > atracoes2    ));
    printf("Densidade Populacional: Carta %d venceu (%d)\n",    ( densidade1   < densidade2   ), ( densidade1   < densidade2   ));
    printf("PIB per Capita: Carta %d venceu (%d)\n",            ( pibPerCapta1 > pibPerCapta2 ), ( pibPerCapta1 > pibPerCapta2 ));
    printf("Super Poder: Carta %d venceu (%d)\n",               ( superPoder1  > superPoder2  ), ( superPoder1  > superPoder2  ));

    printf("\n=============================================\n\n");

    return 0;
}