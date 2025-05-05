#include <stdio.h>

int main(){
    int populacao, populacao2, pontos, pontos2;
    char estado[20], estado2[20], codigo[25], codigo2[25], cidade[30], cidade2[30];
    float pib, pib2, area, area2;
    float densidade1, densidade2, percapita1, percapita2;

    printf("Digite o numero de habitantes da cidade 1: \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos da cidade 1: \n");
    scanf("%d", &pontos);

    printf("Digite o pib da cidade 1: \n");
    scanf("%f", &pib);

    printf("Informe a area da cidade 1: \n");
    scanf("%f", &area);

    printf("Digite o Estado da cidade 1: \n");
    scanf("%s", estado);

    printf("Digite o nome da cidade 1:\n");
    scanf("%s", cidade);

    printf("Digite o codigo da cidade 1:\n");
    scanf("%s", codigo);

    printf("Digite o numero de habitantes da cidade 2:\n");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos da cidade 2: \n");
    scanf("%d", &pontos2);

    printf("Digite o pib da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Informe a area da cidade 2: \n");
    scanf("%f", &area2);

    printf("Digite o Estado da cidade 2: \n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite o codigo da cidade 2: \n");
    scanf("%s", codigo2);

    densidade1 = populacao / area;
    percapita1 = populacao / pib;

    densidade2 = populacao2 / area2;
    percapita2 = populacao2 / pib2;

    printf("\n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Area: %.2f km² \n", area);
    printf("PIB: %.2f bilhoes de reais \n", pib);
    printf("Numeros de pontos turisticos: %d \n", pontos);
    printf("Densidade Populacional: %.2f km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", percapita1);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", percapita2);
    printf("\n");



    return 0;
      

    
}