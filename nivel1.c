#include <stdio.h>
#include <string.h>

int main(){

    // Apresentação do jogo
    printf("Bem vindo ao Super Trunfo!\n");
    printf("O jogo de cartas que testa seus conhecimentos sobre as cidades do Brasil.\n");
    printf("Você irá escolher duas cartas e comparar os atributos de cada uma delas.\n");
    printf("O jogador que tiver o maior atributo vence a rodada.\n");
    printf("O jogo acaba quando um dos jogadores ficar sem cartas.\n");
    printf("Vamos começar!\n");

    // Registrar as cartas
    char estado, estado2, codigo[4], codigo2[4], cidade2[40], cidade[40];
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
    float superPoder, superPoder2;
    superPoder = populacao + area + pib + pontosTuristicos + densidadeDemografica + pibPerCapita + inversoDensidade;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadeDemografica2 + pibPerCapita2 + inversoDensidade2;

    // Apresentando as cartas
    
    // Primeira carta
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

    // Segunda carta
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

    // Resultado da rodada
    // Populacão
    if (populacao > populacao2){
        printf("O jogador 1 venceu a rodada!\n");
        printf("%.2f habitantes\n", populacao);
        printf("Parabéns, você ganhou a rodada!\n");
    } else if (populacao < populacao2){
        printf("O jogador 2 venceu a rodada!\n");
        printf("%.2f habitantes\n", populacao2);
        printf("Parabéns, você ganhou a rodada!\n");
    } else{
        printf("Empate!\n");
    }
    // Área
    if (area > area2){
        printf("O jogador 1 venceu a rodada!\n");
        printf("%.3f m2\n", area);
        printf("Parabéns, você ganhou a rodada!\n");
    } else if (area < area2){
        printf("O jogador 2 venceu a rodada!\n");
        printf("%.3f m2\n", area2);
        printf("Parabéns, você ganhou a rodada!\n");
    } else{
        printf("Empate!\n");
    }
    // PIB
    if (pib > pib2){
        printf("O jogador 1 venceu a rodada!\n");
        printf("%.2f\n", pib);
        printf("Parabéns, você ganhou a rodada!\n");
    } else if (pib < pib2){
        printf("O jogador 2 venceu a rodada!\n");
        printf("%.2f\n", pib2);
        printf("Parabéns, você ganhou a rodada!\n");
    } else{
        printf("Empate!\n");
    }
    // Pontos turísticos
    if (pontosTuristicos > pontosTuristicos2){
        printf("O jogador 1 venceu a rodada!\n");
        printf("%d\n", pontosTuristicos);
        printf("Parabéns, você ganhou a rodada!\n");
    } else if (pontosTuristicos < pontosTuristicos2){
        printf("O jogador 2 venceu a rodada!\n");
        printf("%d\n", pontosTuristicos2);
        printf("Parabéns, você ganhou a rodada!\n");
    } else{
        printf("Empate!\n");
    }
    // Densidade demográfica
    if (densidadeDemografica < densidadeDemografica2){
        printf("O jogador 1 venceu a rodada!\n");
        printf("%.2f\n", densidadeDemografica);
        printf("Parabéns, você ganhou a rodada!\n");
    } else if (densidadeDemografica > densidadeDemografica2){
        printf("O jogador 2 venceu a rodada!\n");
        printf("%.2f\n", densidadeDemografica2);
        printf("Parabéns, você ganhou a rodada!\n");
    } else{
        printf("Empate!\n");
    }
    // PIB per capita
    if (pibPerCapita > pibPerCapita2){
        printf("O jogador 1 venceu a rodada!\n");
        printf("%.2f\n", pibPerCapita);
        printf("Parabéns, você ganhou a rodada!\n");
    } else if (pibPerCapita < pibPerCapita2){
        printf("O jogador 2 venceu a rodada!\n");
        printf("%.2f\n", pibPerCapita2);
        printf("Parabéns, você ganhou a rodada!\n");
    } else{
        printf("Empate!\n");
    }
    

    return 0;
}