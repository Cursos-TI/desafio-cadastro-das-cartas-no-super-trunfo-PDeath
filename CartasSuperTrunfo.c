#include <stdio.h>

int main() {
 char estado[15], codCarta[10], nomeCidade[50], estado2[15], codCarta2[10], nomeCidade2[50];
    int habitante, pontoTuristico, habitante2, pontoTuristico2; 
    float area, pib, area2, pib2;

    printf("Vamos começar cadastrando as nossas cartas de SUPER TRUNFO!\n");
    printf("Insira os dados da primeira carta: \n");
    printf("Insira o Estado da sua carta (Informe uma letra entre A e H): \n");
    scanf("%s", &estado);
    printf("Insira o Codigo da sua carta de contendo a letra do Estado + um numero entre 01 e 04: \n");
    scanf("%s", &codCarta);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", &nomeCidade);
    printf("Insira o Numero de Habitantes: \n");
    scanf("%d", &habitante);
    printf("Insira a area da cidade em Km^2 : \n");
    scanf("%f", &area);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontoTuristico);

    printf("\nInsira os dados da segunda carta: \n");
    printf("\nInsira o Estado da sua carta (Informe uma letra entre A e H): \n");
    scanf("%s", &estado2);
    printf("Insira o Codigo da sua carta de contendo a letra do Estado + um numero entre 01 e 04: \n");
    scanf("%s", &codCarta2);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", &nomeCidade2);
    printf("Insira o Numero de Habitantes: \n");
    scanf("%d", &habitante2);
    printf("Insira a area da cidade em Km^2 : \n");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontoTuristico2);
    
    printf("Carta 1: \n Estado: %s \n Codigo da Carta: %s \n  Nome da Cidade: %s \n  População:  %d\n  Area em Km^2: %f \n Pib: %f \n Pontos Turisticos: %d \n", estado, codCarta, nomeCidade, habitante, area, pib, pontoTuristico);
    printf("Carta 2: \n Estado: %s \n Codigo da Carta: %s \n  Nome da Cidade: %s \n  População:  %d\n  Area em Km^2: %f \n Pib: %f \n Pontos Turisticos: %d \n", estado2, codCarta2, nomeCidade2, habitante2, area2, pib2, pontoTuristico2);
    
    return 0;
}
