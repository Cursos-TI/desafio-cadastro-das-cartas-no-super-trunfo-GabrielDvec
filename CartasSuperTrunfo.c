#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //declaração de variáveis para armazenar dados das cartas
    
char estado1, estado2;     //letra de "A" a "H" para definir o estado
char codigo1[4], codigo2[4];     //codigo da carta em formato A01, B02...
char nome1[50], nome2[50];     //nome da cidade
int populacao1, populacao2;     //número de habitantes
float area1, area2;     //área em km² 
float pib1; pib2;     //PIB em Bilhões de reais
int pontosturisticos1, pontosturisticos2;     //Quantidade de pontos turísticos

    //Entrada de dados da primeira carta

printf("\nInsira os dados da primeira carta:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado1); //O espaço que vem antes de %C é para evitar quebra de linha
printf("Código da carta (exemplo: A01): "); //
scanf("%s", codigo1);
printf("Nome da cidade: ");
scanf(" %[^\n]", nome1); //Lê a string até a quebra da linha
printf("Habitantes: ");
scanf("%d", &populacao1);
printf("área (km2): ");
scanf("%f", &area1);
printf("PIB (em Bilhões): ");
scanf("%f", &pib1);
printf("Número de pontos turísticos: ");
scanf ("%d", &pontosturisticos1);
    
    //Entrada de dados da segunda carta

printf("\nInsira os dados da primeira carta:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2); //O espaço que vem antes de %C é para evitar quebra de linha
printf("Código da carta (exemplo: A01): "); //
scanf("%s", codigo2);
printf("Nome da cidade: ");
scanf(" %[^\n]", nome2); //Lê a string até a quebra da linha
printf("Habitantes: ");
scanf("%d", &populacao2);
printf("área (km2): ");
scanf("%f", &area2);
printf("PIB (em Bilhões): ");
scanf("%f", &pib2);
printf("Número de pontos turísticos: ");
scanf ("%d", &pontosturisticos2);

    //Exibição de dados das cartas
printf("\n==== CARTAS CADASTRADAS ====\n");
    
    //exibir carta n° 01

printf("\n Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", nome1);
printf("Habitantes: %d\n", populacao1);
printf("Área km²: %f\n", area1);
printf("PIB (em bilhões): %f\n", pib1);
printf("Pontos Turísticos: %d\n, pontosturisticos1);

    //exibir carta n° 02
    
printf("\n Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", nome2);
printf("Habitantes: %d\n", populacao2);
printf("Área km²: %f\n", area2);
printf("PIB (em bilhões): %f\n", pib2);
printf("Pontos Turísticos: %d\n, pontosturisticos2);
    
printf("\n================================\n");
    return 0;
}
