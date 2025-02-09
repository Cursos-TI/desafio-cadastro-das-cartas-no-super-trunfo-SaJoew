#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nomecd[50];  // Nome da cidade
    int NPturistico;  // Número de pontos turísticos
    double area, pib; // Área e PIB da cidade
    long int populacao, cdcidade; // População e código da cidade

    // Entrada de dados
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomecd);  

    printf("Informe a quantidade populacional: \n");
    scanf("%ld", &populacao); 

    printf("Número de pontos turísticos: \n");
    scanf("%d", &NPturistico); 

    printf("Informe o PIB: \n");
    scanf("%lf", &pib); 
    printf("Insira o código da cidade: \n");
    scanf("%ld", &cdcidade);  

    printf("Insira a área da cidade: \n");
    scanf("%lf", &area);  

    // Exibindo os dados da cidade
    printf("\n--- Dados Cadastrais da Cidade ---\n");
    printf("Cidade: %s \n", nomecd);  
    printf("Código da cidade: %ld\n", cdcidade); 
    printf("População: %ld\n", populacao);  
    printf("Número de pontos turísticos: %d\n", NPturistico);  
    printf("PIB: %lf trilhões\n", pib); 
    printf("Área: %lf km²\n", area); 

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
