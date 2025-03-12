#include <stdio.h>

int main(){

    printf(" desafio das cartas\n ");

    // as variaveis

    char cidade[20], estado[2],cidade2[20], estado2[2];
    int carta, turismo, carta2, turismo2, opcao;
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

    // novas variaveis 

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
    printf("O PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &PIB2);
    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turismo2);

    // contas  

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

    printf("**escolha qual atributo a ser comparado**\n"); //menu interativo
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. PIB\n");
    printf("4. turismo\n");
    printf("5. Densidade\n");
    printf("6. PIB per capital\n");
    printf("7. super poder\n");
    printf("escolha uma das pocoes: ");
    scanf("%d", &opcao);

    printf("=========================================\n");//separacao

    switch (opcao){
    case 1:
    
       printf(" carta %d - %s tem a populacao de %lu\n", carta, cidade, populacao);
       printf(" carta %d - %s tem a populacao de %lu\n", carta2, cidade2, populacao2);

       if (populacao > populacao2){
           printf(" Carta %d venceu pois tem mais populacao\n", carta);
        } else if (populacao < populacao2){
           printf(" Carta %d venceu pois tem mais populacao\n", carta2);
        } else{
           printf(" houve um empate!\n");
        }
        break;

    case 2:
    
        printf(" carta %d - %s tem a area de %.2f\n", carta, cidade, area);
        printf(" carta %d - %s tem a area de %.2f\n", carta2, cidade2, area2);
  
        if (area > area2){
            printf(" Carta %d venceu pois a area e maior\n", carta);
        } else if (area < area2){
            printf(" Carta %d venceu pois a area e maior\n", carta2);
        } else{
            printf(" houve um empate!\n");
        }
        break;    


    case 3:
    
        printf(" carta %d - o PIB de %s e: %.2f\n", carta, cidade, PIB);
        printf(" carta %d - o PIB de %s e: %.2f\n", carta2, cidade2, PIB2);
  
        if (PIB > PIB2){
            printf(" Carta %d venceu pois o PIB e maior\n", carta);
        } else if (PIB < PIB2){
            printf(" Carta %d venceu pois o PIB e maior\n", carta2);
        } else{
            printf(" houve um empate!\n");
        }
        break;   


    case 4:
    
        printf(" carta %d - %s tem %d pontos turisticos\n", carta, cidade, turismo);
        printf(" carta %d - %s tem %d pontos turisticos\n", carta2, cidade2, turismo2);
    
        if (turismo > turismo2){
            printf(" Carta %d venceu pois tem mais lugares turisticos\n", carta);
        } else if (turismo < turismo2){
            printf(" Carta %d venceu pois tem mais lugares turisticos\n", carta2);
        } else{
            printf(" houve um empate!\n");
        }
        break;


    case 5:
    
        printf(" carta %d - a dencidade populacional de %s e: %f\n", carta, cidade, Densidade);
        printf(" carta %d - a dencidade populacional de %s e: %f\n", carta2, cidade2, Densidade2);
    
        if (Densidade < Densidade2){
            printf(" Carta %d venceu pois tem menos dencidade populacional\n", carta);
        } else if (Densidade > Densidade2){
            printf(" Carta %d venceu pois tem menos dencidade populacional\n", carta2);
        } else{
            printf(" houve um empate!\n");
        }
        break;


    case 6:
    
        printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta, cidade, PIBperCp);
        printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta2, cidade2, PIBperCp2);
    
        if (PIBperCp > PIBperCp2){
            printf(" Carta %d venceu pois o PIB per capital e maior\n", carta);
        } else if (PIBperCp < PIBperCp2){
            printf(" Carta %d venceu pois o PIB per capital e maior\n", carta2);
        } else{
            printf(" houve um empate!\n");
        }
        break;


    case 7:
    
        printf(" carta %d - o super poder de %s e: %.2f\n", carta, cidade, Super);
        printf(" carta %d - o super poder de %s e: %.2f\n", carta2, cidade2, Super2);
    
        if (Super > Super2){
            printf(" Carta %d venceu pois o tem poder maior\n", carta);
        } else if (Super < Super2){
            printf(" Carta %d venceu pois o tem poder maior\n", carta2);
        } else{
            printf(" houve um empate!\n");
        }
        break;   

    
    default:
        printf(" opcao invalida!!\n");
        break; 
    }
    
    printf("=========================================");//separacao



    return 0;
}
