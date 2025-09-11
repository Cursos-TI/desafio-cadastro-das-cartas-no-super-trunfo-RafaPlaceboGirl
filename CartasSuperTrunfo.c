#include <stdio.h>

int main() {

//Incluindo as variáveis de ambas as cartas    
    char estado1, estado2;
    char cod_carta1[4], cod_carta2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    float densidade1, densidade2, pibpcapita1, pibpcapita2;
    float superpoder1, superpoder2;
    float inversoDensi1, inversoDensi2;
    char* resultPopulacao;
    char* resultArea;
    char* resultPib;
    char* resultTuris;
    char* resultDensi;
    char* resultPibp;
    char* resultPoder;
    

//Atribuindo variáveis que receberão os resultados das comparações

    resultPopulacao = (populacao1 > populacao2) ? "carta 1 venceu (1)" : "carta 2 venceu (0)";
    resultArea = (area1 > area2) ? "carta 1 venceu (1)" : "carta 2 venceu (0)";
    resultPib = (pib1 > pib2) ? "carta 1 venceu (1)" : "carta 2 venceu (0)";
    resultTuris = (pontos_turisticos1 > pontos_turisticos2) ? "carta 1 venceu (1)" : "carta 2 venceu (0)";
    resultDensi = (inversoDensi1 > inversoDensi2) ? "carta 1 venceu (1)" : "carta 2 venceu (0)";
    resultPibp = (pibpcapita1 > pibpcapita2) ? "carta 1 venceu (1)" : "carta 2 venceu (0)";
    resultPoder = (superpoder1 > superpoder2) ? "carta 1 venceu (1)" : "carta 2 venceu (0)";


//Registrando a primeira carta
    printf("*** REGISTRO DE CARTAS - SUPER TRUNFO ***\n\n");

    printf("Carta 1: \n");

    printf("Estado (Uma letra de `A` a `H`): \n");
    scanf("%c", &estado1);

    printf("Código da carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", cod_carta1);

    printf("Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%i", &pontos_turisticos1);

//Cálculo da densidade populacional, PIB per capita  e Super Poder  da carta 1
    densidade1 = (float) populacao1 / area1;
    pibpcapita1 = (float) (pib1 * 1000000000) / populacao1;
    inversoDensi1 = (float) area1 / populacao1;
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontos_turisticos1 + pibpcapita1 + inversoDensi1);

//Carta 1 Registrada e registrando carta 02
    printf("Carta 1 registrada com sucesso!\n\n");

    printf("Carta 2: \n");

    printf("Estado: (Uma letra de `A` a `H`): \n");
    scanf(" %c", &estado2);

    printf("Código da carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", cod_carta2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%i", &pontos_turisticos2);

//Cálculo da densidade populacional e PIB per capita e Super Poder carta 2    
    densidade2 = (float) populacao2 / area2;
    pibpcapita2 = (float) (pib2 * 1000000000) / populacao2;
    inversoDensi2 = (float) area2 / populacao2;
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontos_turisticos2 + pibpcapita2 + inversoDensi2);

//Carta 02 Registrada
    printf("Carta 2 registrada com sucesso\n\n");

//Exibindo os dados de ambas as cartas
    printf("CARTA 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpcapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);
    
    printf("CARTA 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpcapita2);
    printf("Super Poder: %.2f\n", superpoder1);
    
 //Comparando as cartas 
    printf("Comparação de Cartas: \n\n");
    printf("População: %s\n", resultPopulacao);
    printf("Área: %s\n", resultArea);
    printf("PIB: %s\n", resultPib);
    printf("Pontos Turísticos: %s\n", resultTuris);
    printf("Densidade Populacional: %s\n", resultDensi);
    printf("PIB Per Capita: %s\n", resultPibp);
    printf("Super Poder: %s\n", resultPoder);

    return 0;
}