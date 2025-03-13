#include <stdio.h>

int main(){

    printf(" desafio das cartas\n ");

    // as variaveis

    char cidade[20], estado[2],cidade2[20], estado2[2];
    int carta, turismo, carta2, turismo2, opcao1, opcao2, opcao3, resultado1, resultado2, resultado3;
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
    printf("escolha uma das opcoes: ");
    scanf("%d", &opcao1);

    printf("=========================================\n");//separacao

    switch (opcao1){
    case 1:
       printf("voce escolheu comparar a populacao\n");
       printf(" carta %d - %s tem a populacao de %lu\n", carta, cidade, populacao);
       printf(" carta %d - %s tem a populacao de %lu\n", carta2, cidade2, populacao2);

       resultado1 = populacao > populacao2 ? 1 : 0;
    
       break;       

    case 2:
    
        printf("voce escolheu comparar a area\n");
        printf(" carta %d - %s tem a area de %.2f\n", carta, cidade, area);
        printf(" carta %d - %s tem a area de %.2f\n", carta2, cidade2, area2);
  
        resultado1 = area > area2 ? 1 : 0;

        break;

    case 3:
        printf("voce escolheu comparar o PIB\n");
        printf(" carta %d - o PIB de %s e: %.2f\n", carta, cidade, PIB);
        printf(" carta %d - o PIB de %s e: %.2f\n", carta2, cidade2, PIB2);
  
        resultado1 = PIB > PIB2 ? 1 : 0;

        break;

    case 4:
    
        printf("voce escolheu comparar o turtismo\n");
        printf(" carta %d - %s tem %d pontos turisticos\n", carta, cidade, turismo);
        printf(" carta %d - %s tem %d pontos turisticos\n", carta2, cidade2, turismo2);
    
        resultado1 = turismo > turismo2 ? 1 : 0;

        break;

    case 5:
    
        printf("voce escolheu comparar a dencidade\n");
        printf(" carta %d - a dencidade populacional de %s e: %f\n", carta, cidade, Densidade);
        printf(" carta %d - a dencidade populacional de %s e: %f\n", carta2, cidade2, Densidade2);
    
        resultado1 = Densidade < Densidade2 ? 1 : 0;

        break;

    case 6:
    
        printf("voce escolheu comparar o PIB per capital\n");
        printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta, cidade, PIBperCp);
        printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta2, cidade2, PIBperCp2);
    
        resultado1 = PIBperCp > PIBperCp2 ? 1 : 0;

        break;

    case 7:
    
        printf("voce escolheu comparar o super poder\n");
        printf(" carta %d - o super poder de %s e: %.2f\n", carta, cidade, Super);
        printf(" carta %d - o super poder de %s e: %.2f\n", carta2, cidade2, Super2);
    
        resultado1 = Super > Super2 ? 1 : 0;
        break;   

    
    default:
        printf(" opcao invalida!!\n");
        break; 
    }

    printf("=========================================\n");//separacao

    printf("**escolha outro atributo a ser comparado**\n"); //menu interativo
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. PIB\n");
    printf("4. turismo\n");
    printf("5. Densidade\n");
    printf("6. PIB per capital\n");
    printf("7. super poder\n");
    printf("escolha uma das opcoes: ");
    scanf("%d", &opcao2);

    printf("=========================================\n");//separacao
    
    if (opcao1 == opcao2){
        printf("voce escolheu a mesma opcao!!!!\n");
    }else{
        switch (opcao2){
        case 1:
            printf("voce escolheu comparar a populacao\n");
            printf(" carta %d - %s tem a populacao de %lu\n", carta, cidade, populacao);
            printf(" carta %d - %s tem a populacao de %lu\n", carta2, cidade2, populacao2);
        
            resultado2 = populacao > populacao2 ? 1 : 0;
            
            break;       
        
        case 2:
            
            printf("voce escolheu comparar a area\n");
            printf(" carta %d - %s tem a area de %.2f\n", carta, cidade, area);
            printf(" carta %d - %s tem a area de %.2f\n", carta2, cidade2, area2);
          
            resultado2 = area > area2 ? 1 : 0;
        
            break;
        
        case 3:
            printf("voce escolheu comparar o PIB\n");
            printf(" carta %d - o PIB de %s e: %.2f\n", carta, cidade, PIB);
            printf(" carta %d - o PIB de %s e: %.2f\n", carta2, cidade2, PIB2);
          
            resultado2 = PIB > PIB2 ? 1 : 0;
        
            break;
        
        case 4:
            
            printf("voce escolheu comparar o turtismo\n");
            printf(" carta %d - %s tem %d pontos turisticos\n", carta, cidade, turismo);
            printf(" carta %d - %s tem %d pontos turisticos\n", carta2, cidade2, turismo2);
            
            resultado2 = turismo > turismo2 ? 1 : 0;
        
            break;
        
        case 5:
            
            printf("voce escolheu comparar a dencidade\n");
            printf(" carta %d - a dencidade populacional de %s e: %f\n", carta, cidade, Densidade);
            printf(" carta %d - a dencidade populacional de %s e: %f\n", carta2, cidade2, Densidade2);
            
            resultado2 = Densidade < Densidade2 ? 1 : 0;
        
            break;
        
        case 6:
            
            printf("voce escolheu comparar o PIB per capital\n");
            printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta, cidade, PIBperCp);
            printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta2, cidade2, PIBperCp2);
            
            resultado2 = PIBperCp > PIBperCp2 ? 1 : 0;
        
            break;
        
        case 7:
            
            printf("voce escolheu comparar o super poder\n");
            printf(" carta %d - o super poder de %s e: %.2f\n", carta, cidade, Super);
            printf(" carta %d - o super poder de %s e: %.2f\n", carta2, cidade2, Super2);
            
            resultado2 = Super > Super2 ? 1 : 0;
            break;   
        
            
        default:
            printf(" opcao invalida!!\n");
            break; 
        }
            
        printf("=========================================\n");//separacao

        printf("**escolha outro atributo a ser comparado**\n"); //menu interativo
        printf("1. populacao\n");
        printf("2. area\n");
        printf("3. PIB\n");
        printf("4. turismo\n");
        printf("5. Densidade\n");
        printf("6. PIB per capital\n");
        printf("7. super poder\n");
        printf("escolha uma das opcoes: ");
        scanf("%d", &opcao3);
    
        printf("=========================================\n");//separacao

    if ((opcao3 == opcao1) || (opcao3 == opcao2) ){
            printf("voce ja escolheu essa opcao, portanto ela sera descartada!!!!\n");
    }else{
        switch (opcao3){
        case 1:
            printf(" voce escolheu comparar a populacao\n");
            printf(" carta %d - %s tem a populacao de %lu\n", carta, cidade, populacao);
            printf(" carta %d - %s tem a populacao de %lu\n", carta2, cidade2, populacao2);
            
            resultado3 = populacao > populacao2 ? 1 : 0;
                
            break;       
            
        case 2:
                
            printf(" voce escolheu comparar a area\n");
            printf(" carta %d - %s tem a area de %.2f\n", carta, cidade, area);
            printf(" carta %d - %s tem a area de %.2f\n", carta2, cidade2, area2);
              
            resultado3 = area > area2 ? 1 : 0;
            
            break;
            
        case 3:
            printf(" voce escolheu comparar o PIB\n");
            printf(" carta %d - o PIB de %s e: %.2f\n", carta, cidade, PIB);
            printf(" carta %d - o PIB de %s e: %.2f\n", carta2, cidade2, PIB2);
              
            resultado3 = PIB > PIB2 ? 1 : 0;
            
            break;
            
          case 4:
                
            printf(" voce escolheu comparar o turtismo\n");
            printf(" carta %d - %s tem %d pontos turisticos\n", carta, cidade, turismo);
            printf(" carta %d - %s tem %d pontos turisticos\n", carta2, cidade2, turismo2);
                
            resultado3 = turismo > turismo2 ? 1 : 0;
            
            break;
            
        case 5:
                
            printf(" voce escolheu comparar a dencidade\n");
            printf(" carta %d - a dencidade populacional de %s e: %f\n", carta, cidade, Densidade);
            printf(" carta %d - a dencidade populacional de %s e: %f\n", carta2, cidade2, Densidade2);
                
            resultado3 = Densidade < Densidade2 ? 1 : 0;
            
            break;
            
        case 6:
                
            printf(" voce escolheu comparar o PIB per capital\n");
            printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta, cidade, PIBperCp);
            printf(" carta %d - o PIB per capital de %s e: %.2f\n", carta2, cidade2, PIBperCp2);
                
            resultado3 = PIBperCp > PIBperCp2 ? 1 : 0;
            
            break;
            
        case 7:
                
            printf(" voce escolheu comparar o super poder\n");
            printf(" carta %d - o super poder de %s e: %.2f\n", carta, cidade, Super);
            printf(" carta %d - o super poder de %s e: %.2f\n", carta2, cidade2, Super2);
                
            resultado3 = Super > Super2 ? 1 : 0;

            break;   
            
                
        default:
            printf(" opcao invalida!!\n");
            break; 
        }
    }
        printf("=========================================\n");//separacao

        if ((resultado1 && resultado2 != resultado3) || (resultado3 && resultado2 != resultado1) || (resultado1 && resultado3 != resultado2) || (resultado1 && resultado2 && resultado3)){
            printf(" parabens, a carta %d venceu!!!\n", carta);
        }else if(resultado1 != resultado2){
            printf(" com base nas suas duas escolhas houve um empate das cartas!!!!\n");
        }else{
            printf(" parabens, a carta %d venceu!!!\n", carta2);
        }
            
    }

    
    printf("=========================================");//separacao



    return 0;
}
