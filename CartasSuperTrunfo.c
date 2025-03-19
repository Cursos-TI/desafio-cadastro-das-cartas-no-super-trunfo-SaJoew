#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar_atributo(char* atributo, float valor1, float valor2) {
    if (strcmp(atributo, "populacao") == 0) {
        return valor1 > valor2;
    } else if (strcmp(atributo, "area") == 0) {
        return valor1 > valor2;
    } else if (strcmp(atributo, "pib") == 0) {
        return valor1 > valor2;
    } else if (strcmp(atributo, "pontosTuristicos") == 0) {
        return valor1 > valor2;
    } else if (strcmp(atributo, "densidade") == 0) {
        return valor1 < valor2;
    } else if (strcmp(atributo, "pibPerCapita") == 0) {
        return valor1 > valor2;
    }
    return 0; 
}

int main() {
    char atributo1[50], atributo2[50];
    float valor1, valor2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibperCapita1, pibperCapita2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Digite as informações da Carta 1:\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite as informações da Carta 2:\n");
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1; 
    densidade2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;

    printf("\nEscolha o primeiro atributo para comparar (populacao, area, pib, pontosTuristicos, densidade, pibPerCapita): ");
    scanf("%s", atributo1);

    printf("Escolha o segundo atributo para comparar (populacao, area, pib, pontosTuristicos, densidade, pibPerCapita): ");
    scanf("%s", atributo2);

    if (strcmp(atributo1, "populacao") == 0) {
        valor1 = (float)populacao1;
        valor2 = (float)populacao2;
    } else if (strcmp(atributo1, "area") == 0) {
        valor1 = area1;
        valor2 = area2;
    } else if (strcmp(atributo1, "pib") == 0) {
        valor1 = pib1;
        valor2 = pib2;
    } else if (strcmp(atributo1, "pontosTuristicos") == 0) {
        valor1 = (float)pontosTuristicos1;
        valor2 = (float)pontosTuristicos2;
    } else if (strcmp(atributo1, "densidade") == 0) {
        valor1 = densidade1;
        valor2 = densidade2;
    } else if (strcmp(atributo1, "pibPerCapita") == 0) {
        valor1 = pibperCapita1;
        valor2 = pibperCapita2;
    }

    int resultado1 = comparar_atributo(atributo1, valor1, valor2);

    if (strcmp(atributo2, "populacao") == 0) {
        valor1 = (float)populacao1;
        valor2 = (float)populacao2;
    } else if (strcmp(atributo2, "area") == 0) {
        valor1 = area1;
        valor2 = area2;
    } else if (strcmp(atributo2, "pib") == 0) {
        valor1 = pib1;
        valor2 = pib2;
    } else if (strcmp(atributo2, "pontosTuristicos") == 0) {
        valor1 = (float)pontosTuristicos1;
        valor2 = (float)pontosTuristicos2;
    } else if (strcmp(atributo2, "densidade") == 0) {
        valor1 = densidade1;
        valor2 = densidade2;
    } else if (strcmp(atributo2, "pibPerCapita") == 0) {
        valor1 = pibperCapita1;
        valor2 = pibperCapita2;
    }
    int resultado2 = comparar_atributo(atributo2, valor1, valor2);

    if (resultado1 > resultado2) {
        printf("Carta 1 venceu!\n");
    } else if (resultado1 < resultado2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
