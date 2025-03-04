#include <stdio.h>

int main() {
    char nomecd[50];  
    int NPturistico;  
    double area, pib; 
    long int populacao, cdcidade; 
    
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

    printf("\n--- Dados Cadastrais da Cidade ---\n");
    printf("Cidade: %s \n", nomecd);  
    printf("Código da cidade: %ld\n", cdcidade); 
    printf("População: %ld\n", populacao);  
    printf("Número de pontos turísticos: %d\n", NPturistico);  
    printf("PIB: %lf trilhões\n", pib); 
    printf("Área: %lf km²\n", area); 


    return 0;
}
