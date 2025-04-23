#include <stdio.h>

int main() {

    //variaves da primeira carta
    
    char estado1;
    char codigo1[4]; //Codigo da carta
    char cidade1[50]; //Nome da cidade
    int populacao1;
    float area1; //Área em km2 da cidade
    float pib1; 
    int pontos_turiscos1; //Numeros de pontos turiscos da cidade
    float densidade1;
    float capita1;

    //variaves da segunda carta
    
    char estado2;
    char codigo2[4]; //Codigo da carta
    char cidade2[50]; //Nome da cidade
    int populacao2;
    float area2; //Área em km2 da cidade
    float pib2; 
    int pontos_turiscos2; //Numeros de pontos turiscos da cidade
    float densidade2;
    float capita2;  

    //Entrada de dados carta 1

    printf("Cadastro da carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo da carta EX(A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Numero da população: ");
    scanf("%d", &populacao1);

    printf("Área (em km²) da cidade: ");
    scanf("%f", &area1);

    printf("PIB da cidade (Bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turiscos1);
    
    densidade1 = (populacao1 / area1);
    capita1 = (pib1 / populacao1); 

    //Entrada de dados carta 2

    printf("Cadastro da carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo da carta EX(A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Numero da população: ");
    scanf("%d", &populacao2);

    printf("Área (em km²) da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade (Bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turiscos2);
    
    densidade2 = (populacao2 / area2);
    capita2 = (pib2 / populacao2); 

    //Exibição de dados carta 1

    printf("\nCarta1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turiscos1);
    printf("Densidade populacional: %.2f\n", densidade1); 
    printf("PIB per Capita: %.2f\n", capita1); 

    //Exibição de dados carta 2

    printf("\nCarta2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turiscos2);
    printf("Densidade populacional: %.2f\n", densidade2); 
    printf("PIB per Capita: %.2f\n", capita2); 

    return 0;
}
