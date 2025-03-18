#include <stdio.h>


int main()
{
    char estado[15], codCarta[10], nomeCidade[50], estado2[15], codCarta2[10], nomeCidade2[50];
    int  habitante, habitante2, pontoTuristico, pontoTuristico2; 
    float area, pib, area2, pib2, densidadePopulacional, densidadePopulacional2, pibCapta, pibCapta2; 

    printf("Vamos comecar cadastrando as nossas cartas de SUPER TRUNFO!\n");
    printf("Insira os dados da primeira carta: \n");
    printf("Insira o Estado da sua carta (Informe uma letra entre A e H): \n");
    scanf("%s", &estado);
    printf("Insira o Codigo da sua carta de contendo a letra do Estado + um numero entre 01 e 04: \n");
    scanf("%s", &codCarta);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", &nomeCidade);
    printf("Insira o Numero de Habitantes: \n");
    scanf("%d", &habitante);
    printf("Insira a area da cidade: \n");
    scanf("%f", &area);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontoTuristico);

    densidadePopulacional = (habitante / area);
    pibCapta = (pib / habitante);

    printf("\nInsira os dados da segunda carta: \n");
    printf("\nInsira o Estado da sua carta (Informe uma letra entre A e H): \n");
    scanf("%s", &estado2);
    printf("Insira o Codigo da sua carta de contendo a letra do Estado + um numero entre 01 e 04: \n");
    scanf("%s", &codCarta2);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", &nomeCidade2);
    printf("Insira o Numero de Habitantes: \n");
    scanf("%d", &habitante2);
    printf("Insira a area da cidade: \n");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontoTuristico2);

    densidadePopulacional2 = (habitante2 / area2);
    pibCapta2 = (pib2 / habitante2);
    
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %s \n", codCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("Populacao: %d \n", habitante);
    printf("Area: %.2f Km2 \n", area);
    printf("Pib: %.2f \n", pib);
    printf("Pontos Turisticos: %d \n", pontoTuristico);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional);
    printf("PIB per Capta: %f \n", pibCapta);
    
    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("Populacao: %d \n", habitante2);
    printf("Area: %.2f km^2 \n", area2);
    printf("Pib: %.2f \n", pib2);
    printf("Pontos Turisticos: %d \n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional2);
    printf("PIB per Capta: %f \n", pibCapta2);

    return 0;
   
}
