#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    
    // Carta 1
    char codigo1[4]; 
    char nomeCidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char estado1[20];

    // Novos Atributos1:

    long double densidadePop1;
    long double pibPer1;


    // Carta 2
    char codigo2[4];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    char estado2[20];

    // Novos Atributos2:

    long double densidadePop2;
    long double pibPer2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada Carta1

    printf("=== Cadastro de Carta Super Trunfo ===\n");
    printf("\n=== Carta1 ===\n");
    
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    
    printf("\n=== Carta2 ===\n");

    // Entrada Carta2
    
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); 

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Calculo dos novos atributos  
    //Carta1
    if (area1 == 0)
    {
        area1 = 1;
    }
    densidadePop1 = populacao1/area1;
    //preferi deixar o pib em bilhões e ajustar aqui
    pibPer1 = (pib1 * 1000000000) / populacao1;
    
    //Calculo dos novos atributos  
    //Carta2
    if (area2 == 0)
    {
        area2 = 1;
    }
    densidadePop2 = populacao2/area2;
    pibPer2 = (pib2 * 1000000000) / populacao2;
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Saida Carta1

    printf("\n=== Carta1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2Lf hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2Lf\n", pibPer1);

    // Saida Carta2

    printf("\n=== Carta2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2Lf hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2Lf\n", pibPer2);


    return 0;
}
