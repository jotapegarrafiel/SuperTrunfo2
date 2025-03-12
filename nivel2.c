#include <stdio.h>
#include <string.h>

int main(){
    // Apresentação do jogo
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("O jogo de cartas que testa seus conhecimentos sobre as cidades do Brasil.\n");
    printf("Você irá escolher duas cartas e comparar os atributos de cada uma delas.\n");
    printf("O jogador que tiver o maior atributo vence a rodada.\n");
    printf("O jogo acaba quando um dos jogadores ficar sem cartas.\n");
    printf("Vamos começar!\n");

    // Menu inicial
    int opcao;
    printf("1. Iniciar Jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);
    getchar();  // Limpar o buffer de entrada

    switch (opcao) {
        case 1: {
            // Declaração das variáveis para as cartas
            char estado, estado2, codigo[4], codigo2[4], cidade[40], cidade2[40];
            int pontosTuristicos, pontosTuristicos2;
            float pib, pib2, area, area2, populacao, populacao2;

            // Primeira carta
            printf("Escolha uma letra de 'A' a 'H'\n");
            scanf(" %c", &estado);
            printf("Escolha um número de 01 a 04 combinando com a letra escolhida acima. EX: A01, B03\n");
            scanf(" %s", codigo);
            printf("Nome da cidade\n");
            getchar();  // Limpar o buffer de entrada
            fgets(cidade, sizeof(cidade), stdin);
            cidade[strcspn(cidade, "\n")] = 0;  // Remover o \n do final
            printf("População total da cidade\n");
            scanf(" %f", &populacao);
            printf("Área total da cidade 'km²'\n");
            scanf(" %f", &area);
            printf("PIB (Produto Interno Bruto) da cidade\n");
            scanf(" %f", &pib);
            printf("Número total de pontos turísticos da cidade\n");
            scanf(" %d", &pontosTuristicos);

            // Segunda carta
            printf("Escolha uma letra de 'A' a 'H'\n");
            scanf(" %c", &estado2);
            printf("Escolha um número de 01 a 04 combinando com a letra escolhida acima. EX: A01, B03\n");
            scanf(" %s", codigo2);
            printf("Nome da cidade\n");
            getchar();  // Limpar o buffer de entrada
            fgets(cidade2, sizeof(cidade2), stdin);
            cidade2[strcspn(cidade2, "\n")] = 0;  // Remover o \n do final
            printf("População total da cidade\n");
            scanf(" %f", &populacao2);
            printf("Área total da cidade 'km²'\n");
            scanf(" %f", &area2);
            printf("PIB (Produto Interno Bruto) da cidade\n");
            scanf(" %f", &pib2);
            printf("Número total de pontos turísticos da cidade\n");
            scanf(" %d", &pontosTuristicos2);

            // Calculando a densidade demográfica e pib per capita
            float densidadeDemografica = populacao / area;
            float densidadeDemografica2 = populacao2 / area2;
            float pibPerCapita = pib / populacao;
            float pibPerCapita2 = pib2 / populacao2;

            // Calculando o inverso da densidade demográfica para usar no super poder
            float inversoDensidade = area / populacao;
            float inversoDensidade2 = area2 / populacao2;

            // Calculando o super poder
            float superPoder = populacao + area + pib + pontosTuristicos + densidadeDemografica + pibPerCapita + inversoDensidade;
            float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadeDemografica2 + pibPerCapita2 + inversoDensidade2;

            // Apresentando as cartas
            printf("---------- Dados da carta 1 ----------\n");
            printf("Estado: %c\n", estado);
            printf("Código: %s\n", codigo);
            printf("Cidade: %s\n", cidade);
            printf("População: %.2f habitantes\n", populacao);
            printf("Área total: %.3f km²\n", area);
            printf("PIB: %.2f\n", pib);
            printf("Pontos turísticos: %d\n", pontosTuristicos);
            printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica);
            printf("PIB per capita: %.2f\n", pibPerCapita);
            printf("Super poder: %.2f\n", superPoder);

            printf("---------- Dados da carta 2 ----------\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %.2f habitantes\n", populacao2);
            printf("Área total: %.3f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos turísticos: %d\n", pontosTuristicos2);
            printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica2);
            printf("PIB per capita: %.2f\n", pibPerCapita2);
            printf("Super poder: %.2f\n", superPoder2);

            // Loop para comparação de atributos
            int continuarComparando = 1;
            while (continuarComparando == 1) {
                // Perguntar qual atributo o jogador deseja comparar
                printf("--------------------\n");
                printf("Escolha qual atributo você quer comparar:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos turísticos\n");
                printf("5. Densidade demográfica\n");
                printf("6. PIB per capita\n");
                printf("7. Super poder\n");
                int atributo;
                scanf("%d", &atributo);

                // Comparando os atributos
                switch (atributo) {
                    case 1: // População
                        if (populacao > populacao2) {
                            printf("O jogador 1 venceu a rodada!\n");
                            printf("%.2f habitantes\n", populacao);
                        } else if (populacao < populacao2) {
                            printf("O jogador 2 venceu a rodada!\n");
                            printf("%.2f habitantes\n", populacao2);
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 2: // Área
                        if (area > area2) {
                            printf("O jogador 1 venceu a rodada!\n");
                            printf("%.3f km²\n", area);
                        } else if (area < area2) {
                            printf("O jogador 2 venceu a rodada!\n");
                            printf("%.3f km²\n", area2);
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 3: // PIB
                        if (pib > pib2) {
                            printf("O jogador 1 venceu a rodada!\n");
                            printf("%.2f\n", pib);
                        } else if (pib < pib2) {
                            printf("O jogador 2 venceu a rodada!\n");
                            printf("%.2f\n", pib2);
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 4: // Pontos turísticos
                        if (pontosTuristicos > pontosTuristicos2) {
                            printf("O jogador 1 venceu a rodada!\n");
                            printf("%d\n", pontosTuristicos);
                        } else if (pontosTuristicos < pontosTuristicos2) {
                            printf("O jogador 2 venceu a rodada!\n");
                            printf("%d\n", pontosTuristicos2);
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 5: // Densidade demográfica
                        if (densidadeDemografica < densidadeDemografica2) {
                            printf("O jogador 1 venceu a rodada!\n");
                            printf("%.2f\n", densidadeDemografica);
                        } else if (densidadeDemografica > densidadeDemografica2) {
                            printf("O jogador 2 venceu a rodada!\n");
                            printf("%.2f\n", densidadeDemografica2);
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 6: // PIB per capita
                        if (pibPerCapita > pibPerCapita2) {
                            printf("O jogador 1 venceu a rodada!\n");
                            printf("%.2f\n", pibPerCapita);
                        } else if (pibPerCapita < pibPerCapita2) {
                            printf("O jogador 2 venceu a rodada!\n");
                            printf("%.2f\n", pibPerCapita2);
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 7: // Super poder
                        if (superPoder > superPoder2) {
                            printf("O jogador 1 venceu a rodada!\n");
                            printf("%.2f\n", superPoder);
                        } else if (superPoder < superPoder2) {
                            printf("O jogador 2 venceu a rodada!\n");
                            printf("%.2f\n", superPoder2);
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    default:
                        printf("Opção inválida!\n");
                        break;
                }

                // Perguntar se o jogador deseja comparar outro atributo
                printf("Deseja comparar outro atributo? (1 - Sim, 2 - Não)\n");
                scanf("%d", &continuarComparando);
            }
            break;
        }
        case 2:
            printf("Regras do jogo\n");
            break;
        case 3:
            printf("Obrigado por jogar!\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            break;
    }
    return 0;
}
