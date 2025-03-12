#include <stdio.h>
#include <string.h>

struct CartasSuperTrunfo
{
    char estado;
    char codigo[4];
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int atracoes;
    float pibPerCapta;
    float densidade;
    float superPoder;
};

// Função para cadastrar a carta
void cadastrarCarta(struct CartasSuperTrunfo *carta, int numCarta) {
    printf("DADOS DA CARTA %d: \n", numCarta);

    printf("Selecione o estado. Informe uma letra entre A e H: ");
    scanf(" %c", &carta->estado);

    printf("Selecione o código. Informe um número de 01 a 04: ");
    scanf(" %3s", carta->codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta->nome);

    printf("Informe a população da cidade: ");
    scanf("%lu", &carta->populacao);

    printf("Informe a área da cidade: ");
    scanf("%f", &carta->area);

    printf("Informe o PIB da cidade: ");
    scanf("%lf", &carta->pib);

    printf("Informe o número de pontos turísticos na cidade: ");
    scanf("%d", &carta->atracoes);

    // Cálculos automáticos
    carta->pibPerCapta = carta->pib / (float)carta->populacao;
    carta->densidade = (float)carta->populacao / carta->area;
    carta->superPoder = (float)carta->populacao + carta->pib + carta->pibPerCapta + (float)carta->atracoes + carta->densidade;
}

// Função para exibir o resultado de uma carta
void exibirResultado(struct CartasSuperTrunfo carta, int numCarta) {
    printf("CARTA %d: \n", numCarta);
    printf("Estado:                         %c\n",             carta.estado);
    printf("Código:                         %c%s\n",           carta.estado, carta.codigo);
    printf("Nome da Cidade:                 %s\n",             carta.nome);
    printf("População:                      %lu\n",            carta.populacao);
    printf("Área:                           %.2f km²\n",       carta.area);
    printf("PIB:                            %.2f de reais\n",  carta.pib);
    printf("Número de Pontos Turísticos:    %d\n",             carta.atracoes);
    printf("Densidade Populacional:         %.2f hab/km²\n",   carta.densidade);
    printf("PIB per Capita:                 %.2f reais\n",     carta.pibPerCapta);
    printf("Super Poder:                    %.2f\n",           carta.superPoder);
}

// Função para exibir o resultado da comparação
int compararAtributo(int atributo, struct CartasSuperTrunfo carta1, struct CartasSuperTrunfo carta2) {

    switch (atributo)
    {
        case 1:
            printf("O Atributo escolhido foi: POPULAÇÃO\n");

            printf("Carta 1 - %s (%c%s): %lu\n", carta1.nome, carta1.estado, carta1.codigo, carta1.populacao);
            printf("Carta 2 - %s (%c%s): %lu\n", carta2.nome, carta2.estado, carta2.codigo, carta2.populacao);
            printf("-----------------------------------------------------------\n");

            if (carta1.populacao > carta2.populacao)
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", carta1.nome); return 1; }
            else if (carta1.populacao == carta2.populacao)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", carta1.nome, carta2.nome); return 0; }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", carta2.nome); return 2; }

            break;

        case 2:
            printf("O Atributo escolhido foi: ÁREA\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", carta1.nome, carta1.estado, carta1.codigo, carta1.area);
            printf("Carta 2 - %s (%c%s): %.2f\n", carta2.nome, carta2.estado, carta2.codigo, carta2.area);
            printf("-----------------------------------------------------------\n");

            if (carta1.area > carta2.area)
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", carta1.nome); return 1; }
            else if (carta1.area == carta2.area)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", carta1.nome, carta2.nome); return 0; }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", carta2.nome); return 2; }

            break;

        case 3:
            printf("O Atributo escolhido foi: PIB\n");

            printf("Carta 1 - %s (%c%s): %.2lf\n", carta1.nome, carta1.estado, carta1.codigo, carta1.pib);
            printf("Carta 2 - %s (%c%s): %.2lf\n", carta2.nome, carta2.estado, carta2.codigo, carta2.pib);
            printf("-----------------------------------------------------------\n");

            if (carta1.pib > carta2.pib)
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", carta1.nome); return 1; }
            else if (carta1.pib == carta2.pib)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", carta1.nome, carta2.nome); return 0; }
            else
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", carta2.nome); return 2; }

            break;

        case 4:
            printf("O Atributo escolhido foi: PONTOS TURÍSTICOS\n");

            printf("Carta 1 - %s (%c%s): %d\n", carta1.nome, carta1.estado, carta1.codigo, carta1.atracoes);
            printf("Carta 2 - %s (%c%s): %d\n", carta2.nome, carta2.estado, carta2.codigo, carta2.atracoes);
            printf("-----------------------------------------------------------\n");

            if (carta1.atracoes > carta2.atracoes)
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", carta1.nome); return 1; }
            else if (carta1.atracoes == carta2.atracoes)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", carta1.nome, carta2.nome); return 0; }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", carta2.nome); return 2; }

            break;

        case 5:
            printf("O Atributo escolhido foi: DENSIDADE DEMOGRÁFICA\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", carta1.nome, carta1.estado, carta1.codigo, carta1.densidade);
            printf("Carta 2 - %s (%c%s): %.2f\n", carta2.nome, carta2.estado, carta2.codigo, carta2.densidade);
            printf("-----------------------------------------------------------\n");

            if (carta1.densidade < carta2.densidade)
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", carta1.nome); return 1; }
            else if (carta1.densidade == carta2.densidade)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", carta1.nome, carta2.nome); return 0; }
            else
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", carta2.nome); return 2; }

            break;

        case 6:
            printf("O Atributo escolhido foi: PIB PER CAPTA\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", carta1.nome, carta1.estado, carta1.codigo, carta1.pibPerCapta);
            printf("Carta 2 - %s (%c%s): %.2f\n", carta2.nome, carta2.estado, carta2.codigo, carta2.pibPerCapta);
            printf("-----------------------------------------------------------\n");

            if (carta1.pibPerCapta > carta2.pibPerCapta)
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", carta1.nome); return 1; }
            else if (carta1.pibPerCapta == carta2.pibPerCapta)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", carta1.nome, carta2.nome); return 0; }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", carta2.nome); return 2; }

            break;

        case 7:
            printf("O Atributo escolhido foi: SUPER PODER\n");

            printf("Carta 1 - %s (%c%s): %.2f\n", carta1.nome, carta1.estado, carta1.codigo, carta1.superPoder);
            printf("Carta 2 - %s (%c%s): %.2f\n", carta2.nome, carta2.estado, carta2.codigo, carta2.superPoder);
            printf("-----------------------------------------------------------\n");

            if (carta1.superPoder > carta2.superPoder)
            { printf("##### RESULTADO: CARTA 1 (%s) VENCEU! #####", carta1.nome); return 1; }
            else if (carta1.superPoder == carta2.superPoder)
            { printf("##### RESULTADO: CARTA 1 (%s) E CARTA 2 (%s) EMPATARAM! #####", carta1.nome, carta2.nome); return 0; }
            else 
            { printf("##### RESULTADO: CARTA 2 (%s) VENCEU! #####", carta2.nome); return 2; }

            break;
        
        default:
            printf("*** Atributo inválido ***");
            break;
    }
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    struct CartasSuperTrunfo carta1, carta2;
    unsigned short int primeiroAtributo = 0, segundoAtributo = 0, result1 = 0, result2 = 0, pontosCarta1 = 0, pontosCarta2 = 0;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("-----------------------------------------------------------\n");
    printf("************* BEM VINDO AO JOGO SUPER TRUNFO **************\n");
    printf("-----------------------------------------------------------\n\n");

    printf("\n=================== CADASTRO DE CARTAS ====================\n\n");

    // Cadastrar as duas cartas
    cadastrarCarta(&carta1, 1);
    printf("\n-----------------------------------------------------------\n\n");
    cadastrarCarta(&carta2, 2);

    // São Paulo (SP)
    // carta1.estado           = 'A';
    // strcpy(carta1.codigo, "01");
    // strcpy(carta1.nome, "São Paulo");
    // carta1.populacao        = 11450000;
    // carta1.area             = 1521.11;
    // carta1.pib              = 2719751000000;
    // carta1.atracoes         = 20;
    // carta1.pibPerCapta      = carta1.pib / (float)carta1.populacao;
    // carta1.densidade        = (float)carta1.populacao / carta1.area;
    // carta1.superPoder       = (float)carta1.populacao + carta1.pib + carta1.pibPerCapta + (float)carta1.atracoes + carta1.densidade;

    // // Rio de Janeiro (RJ)
    // carta2.estado           = 'B';
    // strcpy(carta2.codigo, "02");
    // strcpy(carta2.nome, "Rio de Janeiro");
    // carta2.populacao        = 6748000;
    // carta2.area             = 1182.30;
    // carta2.pib              = 413600000000;
    // carta2.atracoes         = 25;
    // carta2.pibPerCapta      = carta2.pib / (float)carta2.populacao;
    // carta2.densidade        = (float)carta2.populacao / carta2.area;
    // carta2.superPoder       = (float)carta2.populacao + carta2.pib + carta2.pibPerCapta + (float)carta2.atracoes + carta2.densidade;
        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n======================== RESULTADO ========================\n\n");

    exibirResultado(carta1, 1);
    printf("\n-----------------------------------------------------------\n\n");
    exibirResultado(carta2, 2);

    do {
        printf("\n-----------------------------------------------------------\n");
        printf("****************** COMPARAÇÂO DE CARTAS: ******************\n");
        printf("-----------------------------------------------------------\n\n");

        printf("Escolha um atributo para comparação:\n");
        printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");

        printf("Digite 1 para População %s\n",             (primeiroAtributo == 1) ? "(ESCOLHIDO)" : "");
        printf("Digite 2 para Área total %s\n",            (primeiroAtributo == 2) ? "(ESCOLHIDO)" : "");
        printf("Digite 3 para PIB %s\n",                   (primeiroAtributo == 3) ? "(ESCOLHIDO)" : "");
        printf("Digite 4 para Pontos Turísticos %s\n",     (primeiroAtributo == 4) ? "(ESCOLHIDO)" : "");
        printf("Digite 5 para Densidade Demográfica %s\n", (primeiroAtributo == 5) ? "(ESCOLHIDO)" : "");
        printf("Digite 6 para PIB per Capta %s\n",         (primeiroAtributo == 6) ? "(ESCOLHIDO)" : "");
        printf("Digite 7 para Super Poder %s\n",           (primeiroAtributo == 7) ? "(ESCOLHIDO)" : "");
        printf("\n-----------------------------------------------------------\n");

        if (primeiroAtributo == 0) {

            printf("Escolha o primeiro atributo para comparação: ");
            scanf("%hu", &primeiroAtributo);

        } else if (primeiroAtributo < 1 || primeiroAtributo > 7) {

            printf("*** Valor inválido! Por favor, escolha um atributo válido. *** \n");
            printf("Digite um atributo válido: ");
            scanf("%hu", &primeiroAtributo);

        } else if (primeiroAtributo != 0 && primeiroAtributo == segundoAtributo) {

            printf("*** Este atributo já foi escolhido! Por favor, escolha um atributo diferente. *** \n");
            printf("Digite um atributo válido: ");
            scanf("%hu", &segundoAtributo);

        }else {

            printf("Escolha o segundo atributo para comparação: ");
            scanf("%hu", &segundoAtributo);

        }

    } while (primeiroAtributo < 1 || primeiroAtributo > 7 || primeiroAtributo == segundoAtributo || segundoAtributo == 0 || segundoAtributo < 1 || segundoAtributo > 7);

    printf("\n\n>>> COMPARANDO O PRIMEIRO ATRIBUTO:\n");
    result1 = compararAtributo(primeiroAtributo, carta1, carta2);

    printf("\n\n>>> COMPARANDO O SEGUNDO ATRIBUTO:\n");
    result2 = compararAtributo(segundoAtributo, carta1, carta2);

    // Contabiliza os pontos da primeira rodada
    if (result1 == 1) pontosCarta1++;
    else if (result1 == 2) pontosCarta2++;

    // Contabiliza os pontos da segunda rodada
    if (result2 == 1) pontosCarta1++;
    else if (result2 == 2) pontosCarta2++;

    // Verifica o vencedor final
    if (pontosCarta1 > pontosCarta2) {
        printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>> ** <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
        printf("********************** RESULTADO FINAL *********************\n");    
        printf("****************** A CARTA 1 É A VENCEDORA *****************\n");
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>> ** <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    }
    else if (pontosCarta1 < pontosCarta2) {
        printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>> ** <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
        printf("********************** RESULTADO FINAL *********************\n");    
        printf("****************** A CARTA 2 É A VENCEDORA *****************\n");
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>> ** <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    }
    else { // Empate    
        printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>> ** <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
        printf("********************** RESULTADO FINAL *********************\n");    
        printf("***************** AS CARTAS 1 E 2 EMPATARAM ****************\n");
        printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>> ** <<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    } 

    printf("\n\n======================= FIM DO JOGO =======================\n\n");
    return 0;
}