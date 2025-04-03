#include <stdio.h>
//Tema 1 - nivel aventureiro
//feito no VS Code, tendo auxilio das explicações na ESTACIO, Youtube e COPILOT (VS Code)
//Feito por Gabriel S. Dalla Vecchia
int main() {
    //Declaração de variáveis para a carta 1
    char estado1;
    char codigo1[4]; //Exemplo: "A01"
    char nome1[20]; //Exemplo: "São Paulo"
    int populacao1; //Exemplo: 12325000
    float area1; //Exemplo: 1521.11
    float pib1; //Exemplo: 699.28
    int pturisticos1; //Exemplo: 50

    //entrada de dados para a carta 1
    printf("Digite o estado (A-H) da carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nome1); //Lê até o final da linha

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pturisticos1);

    //Declaração de variáveis para a carta 2
    char estado2;
    char codigo2[4]; //Exemplo: "B02"
    char nome2[20]; //Exemplo: "Rio de Janeiro"
    int populacao2; //Exemplo: 6748000
    float area2; //Exemplo: 1200.25
    float pib2; //Exemplo: 300.50
    int pturisticos2; //Exemplo: 30

    //entrada de dados para a carta 2
    printf("Digite o estado (A-H) da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nome2); //Lê até o final da linha

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pturisticos2);

    //Cálculos dos novos atributos para carta 1
    float densidade1 = (float)populacao1 / area1; //Densidade populacional
    float pibPerCapita1 = pib1 / populacao1; //PIB per capita

    //Cálculos dos novos atributos para carta 2
    float densidade2 = (float)populacao2 / area2; //Densidade populacional
    float pibPerCapita2 = pib2 / populacao2; //PIB per capita

    //Exibição dos dados e atributos - Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pturisticos1);
    printf("Densidade: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.8f\n", pibPerCapita1);

    printf("--------------------------------------------------\n");

    //Exibição dos dados e atributos - Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pturisticos2);
    printf("Densidade: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.8f\n", pibPerCapita2);

    printf("--------------------------------------------------\n");

    return 0;

}
