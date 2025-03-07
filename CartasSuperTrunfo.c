#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

     unsigned short int atributo;

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variáveis da Carta 1:
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

    // Variáveis da Carta 2:
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
    printf("-----------------------------------------------------------\n");
    printf("******************* CADASTRO DAS CARTAS *******************\n");
    printf("-----------------------------------------------------------\n\n");

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
    pibPerCapta1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)atracoes1 + pibPerCapta1 + (1/densidade1);

    printf("\n----------------------------------------------------------\n\n");
    
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
    pibPerCapta2 = pib2 / (float)populacao2;
    superPoder2  = (float)populacao2 + area2 + pib2 + (float)atracoes2 + pibPerCapta2 + (1/densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n======================== RESULTADO ========================\n\n");

    printf("CARTA 1: \n");
    printf("Estado:                         %c\n",             estado1            );
    printf("Código:                         %c%s\n",           estado1, codigo1   );
    printf("Nome da Cidade:                 %s\n",             nome1              );
    printf("População:                      %lu\n",            populacao1         );
    printf("Área:                           %.2f km² \n",      area1              );
    printf("PIB:                            %.2f de reais \n", pib1               );
    printf("Número de Pontos Turísticos:    %d\n",             atracoes1          );
    printf("Densidade Populacional:         %.2f hab/km²\n",   densidade1         );
    printf("PIB per Capita:                 %.2f reais\n",     pibPerCapta1       );
    printf("Super Poder:                    %.2f\n",           superPoder1        );
    
    printf("\n-----------------------------------------------------------\n\n");
    
    printf("CARTA 2: \n");
    printf("Estado:                         %c\n",             estado2            );
    printf("Código:                         %c%s\n",           estado2, codigo2   );
    printf("Nome da Cidade:                 %s\n",             nome2              );
    printf("População:                      %lu\n",            populacao2         );
    printf("Área:                           %.2f km² \n",      area2              );
    printf("PIB:                            %.2f de reais \n", pib2               );
    printf("Número de Pontos Turísticos:    %d\n",             atracoes2          );
    printf("Densidade Populacional:         %.2f hab/km²\n",   densidade2         );
    printf("PIB per Capita:                 %.2f reais\n",     pibPerCapta2       );
    printf("Super Poder:                    %.2f\n",           superPoder2        );

    printf("\n-----------------------------------------------------------\n");
    printf("****************** COMPARAÇÂO DE CARTAS: ******************\n");
    printf("-----------------------------------------------------------\n\n");

    printf("Escolha um atributo para comparação:\n");
    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");

    printf("Digite 1 para População\n");
    printf("Digite 2 para Área total\n");
    printf("Digite 3 para PIB\n");
    printf("Digite 4 para Pontos Turísticos\n");
    printf("Digite 5 para Densidade Demográfica\n");
    printf("Digite 6 para PIB per Capta\n");
    printf("Digite 7 para Super Poder\n");

    printf("\nDigite uma opção: ");
    scanf("%hu", &atributo);
    
    printf("\n\n");

    switch (atributo)
    {
        case 1:
            printf("O Atributo escolhido foi: POPULAÇÃO\n");
            printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");
    
            printf("Carta 1 - %s (%c%s): %lu\n", nome1, estado1, codigo1, populacao1);
            printf("Carta 2 - %s (%c%s): %lu\n", nome2, estado2, codigo2, populacao2);
            
            printf("-----------------------------------------------------------\n");
            
            if (populacao1 > populacao2) 
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", nome1); }
            else if (populacao1 == populacao2)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", nome1, nome2); }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", nome2); }

            break;
        
        case 2:
            printf("O Atributo escolhido foi: ÁREA\n");
            printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", nome1, estado1, codigo1, area1);
            printf("Carta 2 - %s (%c%s): %.2f\n", nome2, estado2, codigo2, area2);
            
            printf("-----------------------------------------------------------\n");
            
            if (area1 > area2) 
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", nome1); }
            else if (area1 == area2)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", nome1, nome2); }
            else  
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", nome2); }

            break;
        
        case 3:
            printf("O Atributo escolhido foi: PIB\n");
            printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", nome1, estado1, codigo1, pib1);
            printf("Carta 2 - %s (%c%s): %.2f\n", nome2, estado2, codigo2, pib2);
            
            printf("-----------------------------------------------------------\n");
            
            if (pib1 > pib2) 
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", nome1); }
            else if (pib1 == pib2)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", nome1, nome2); }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", nome2); }

            break;
        
        case 4:
            printf("O Atributo escolhido foi: PONTOS TURÍSTICOS\n");
            printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");

            printf("Carta 1 - %s (%c%s): %d\n", nome1, estado1, codigo1, atracoes1);
            printf("Carta 2 - %s (%c%s): %d\n", nome2, estado2, codigo2, atracoes2);
            
            printf("-----------------------------------------------------------\n");
            
            if (atracoes1 > atracoes2) 
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", nome1); }
            else if (atracoes1 == atracoes2)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", nome1, nome2); }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", nome2); }

            break;
        
        case 5:
            printf("O Atributo escolhido foi: DENSIDADE DEMOGRÁFICA\n");
            printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", nome1, estado1, codigo1, densidade1);
            printf("Carta 2 - %s (%c%s): %.2f\n", nome2, estado2, codigo2, densidade2);
            
            printf("-----------------------------------------------------------\n");
            
            if (densidade1 < densidade2) 
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", nome1); }
            else if (densidade1 == densidade2)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", nome1, nome2); }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", nome2); }

            break;
        
        case 6:
            printf("O Atributo escolhido foi: PIB PER CAPTA\n");
            printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", nome1, estado1, codigo1, pibPerCapta1);
            printf("Carta 2 - %s (%c%s): %.2f\n", nome2, estado2, codigo2, pibPerCapta2);
            
            printf("-----------------------------------------------------------\n");
            
            if (pibPerCapta1 > pibPerCapta2) 
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", nome1); }
            else if (pibPerCapta1 == pibPerCapta2)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", nome1, nome2); }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", nome2); }

            break;
        
        case 7:
            printf("O Atributo escolhido foi: SUPER PODER\n");
            printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", nome1, estado1, codigo1, superPoder1);
            printf("Carta 2 - %s (%c%s): %.2f\n", nome2, estado2, codigo2, superPoder2);
            
            printf("-----------------------------------------------------------\n");
            
            if (superPoder1 > superPoder2) 
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", nome1); }
            else if (superPoder1 == superPoder2)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", nome1, nome2); }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", nome2); }

            break;
        
        default:
            printf("*** Atributo inválido ***");
            break;
    }
    
    printf("\n\n===========================================================\n");

    return 0;
}