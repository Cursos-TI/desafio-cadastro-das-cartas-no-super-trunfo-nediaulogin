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
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char estado1[20];

    // Carta 2
    char codigo2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    char estado2[20];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada Carta1

    printf("=== Cadastro de Carta Super Trunfo ===\n");
    printf("Digite o estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; // remove o \n

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite o PIB (em bilhões): "); // como estava no exemplo fiz da mesma forma
    scanf("%f", &pib1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Saida Carta1
    printf("\n=== Carta1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);


    return 0;
}
