#include <stdio.h>

int main(){

    printf(" desafio das cartas\n ");

    // as variaveis

    char cidade[20], estado[2],cidade2[20], estado2[2];
    int carta, turismo, carta2, turismo2;
    unsigned long int populacao, populacao2;
    float area, area2,PIB, PIB2, Densidade, Densidade2, PIBperCp, PIBperCp2;

    // cadastro das cartas

    printf("digite um numero de 01 a 04 para indentificar a carta: ");
    scanf("%d", &carta);
    printf("uma letra de A a H: ");
    scanf("%s", estado);
    printf("O nome da cidade: ");
    scanf("%s", cidade);
    printf("o numero de habitantes da cidade: ");
    scanf("%lu", &populacao);
    printf("A area da cidade em quilometros quadrados: ");
    scanf("%f", &area);
    printf("o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%e", &PIB);
    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turismo);

    Densidade = populacao / area;
    PIBperCp = PIB / populacao;
    float InversoDaDensidadePopulacional = 1 / Densidade;
    double Super = (double) InversoDaDensidadePopulacional + populacao + area + PIB + turismo + PIBperCp ;

    printf("digite o numero de 01 a 04 para indentificar a carta: ");
    scanf("%d", &carta2);
    printf("uma letra de A a H: ");
    scanf("%s", estado2);
    printf("O nome da cidade: ");
    scanf("%s", cidade2);
    printf("o numero de habitantes da cidade: ");
    scanf("%lu", &populacao2);
    printf("A area da cidade em quilometros quadrados: ");
    scanf("%f", &area2);
    printf("o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &PIB2);
    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turismo2);

    Densidade2 = populacao2 / area2;
    PIBperCp2 = PIB2 / populacao2;
    float InversoDaDensidadePopulacional2 = 1 / Densidade2;
    double Super2 = (double) InversoDaDensidadePopulacional2 + populacao2 + area2 + PIB2 + turismo2 + PIBperCp2;

    printf("=========================================\n");//separacao

    //Exibição dos Dados das Cartas

    printf("Carta %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Codigo: %s0%d\n", estado, carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("area: %.2fm2\n", area);
    printf("PIB: R$%.2f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidade);
    printf("PIB per Capita: R$%.2f\n", PIBperCp);
    printf("Super Poder: %.2f\n", Super);
    printf("%f, %.2f, \n", InversoDaDensidadePopulacional, Super);

    printf("=========================================\n");//separacao

    printf("Carta %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s0%d\n", estado2, carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("area: %.2fkm2\n", area2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidade2);
    printf("PIB per Capita: R$%.2f\n", PIBperCp2);
    printf("Super Poder: %.2f\n", Super2);

    printf("=========================================\n");//separacao

    //comparação das cartas

    printf("*******Comparacao de Cartas*******\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turismo > turismo2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade < Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCp > PIBperCp2);
    printf("Super Poder: Carta 1 venceu (%d)\n", Super > Super2);

    printf("=========================================");//separacao


    return 0;
}
