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
    int opcao;
    char estado1, estado2;
    char cod1[5], cod2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float dencidade1, dencidade2, PibperCapita1, PibperCapita2;
    int pontosTuristicos1, pontosTuristicos2;
    float SuperPoder1, SuperPoder2;

    printf("Digite as informações da Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf(" %s", cod1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    printf("Digite as informações da Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    dencidade1 = populacao1 / area1;
    PibperCapita1 = pib1 / populacao1; 
    dencidade2 = populacao2 / area2;
    PibperCapita2 = pib2 / populacao2;

    SuperPoder1 =  (populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / dencidade1) + PibperCapita1);
    SuperPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / dencidade2) + PibperCapita2);

    while (1) {
        printf("\nMenu Principal\n");
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Pontos Turísticos\n");
        printf("5. Comparar Densidade Populacional\n");
        printf("6. Comparar PIB per Capita\n");
        printf("7. Comparar Super Poder\n");
        printf("8. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        char atributo[50];
        int resultado;

        switch (opcao) {
            case 1:
                strcpy(atributo, "populacao");
                break;
            case 2:
                strcpy(atributo, "area");
                break;
            case 3:
                strcpy(atributo, "pib");
                break;
            case 4:
                strcpy(atributo, "pontosTuristicos");
                break;
            case 5:
                strcpy(atributo, "densidade");
                break;
            case 6:
                strcpy(atributo, "pibPerCapita");
                break;
            case 7:
                strcpy(atributo, "SuperPoder");
                break;
            case 8:
                printf("Saindo...\n");
                return 0;  
            default:
                printf("Opção inválida. Tente novamente.\n");
                continue; 
        }

        printf("\nComparando as cartas pelo atributo: %s\n", atributo);

        if (strcmp(atributo, "populacao") == 0) {
            resultado = comparar_atributo(atributo, (float)populacao1, (float)populacao2);
        } else if (strcmp(atributo, "area") == 0) {
            resultado = comparar_atributo(atributo, area1, area2);
        } else if (strcmp(atributo, "pib") == 0) {
            resultado = comparar_atributo(atributo, pib1, pib2);
        } else if (strcmp(atributo, "pontosTuristicos") == 0) {
            resultado = comparar_atributo(atributo, (float)pontosTuristicos1, (float)pontosTuristicos2);
        } else if (strcmp(atributo, "densidade") == 0) {
            resultado = comparar_atributo(atributo, dencidade1, dencidade2);
        } else if (strcmp(atributo, "pibPerCapita") == 0) {
            resultado = comparar_atributo(atributo, PibperCapita1, PibperCapita2);
        } else if (strcmp(atributo, "SuperPoder") == 0) {
            resultado = comparar_atributo(atributo, SuperPoder1, SuperPoder2);
        }

        if (resultado == 1) {
            printf("Carta 1 venceu!\n");
        } else if (resultado == 0) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    }

    return 0;
}
