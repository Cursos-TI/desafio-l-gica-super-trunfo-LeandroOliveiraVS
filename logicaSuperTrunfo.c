#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
 
    char buffer_entrada[100];

    // Variáveis da Carta 1
    char codigo_carta1[50];
    char cidade1[50];
    unsigned long int população1 = 0; // Inicializar com 0 é uma boa prática
    float Área1 = 0.0;
    float PIB1 = 0.0;
    int Num_Pontos_turisticos1 = 0;

    // Variáveis da Carta 2
    char codigo_carta2[50];
    char cidade2[50];
    unsigned long int população2 = 0;
    float Área2 = 0.0;
    float PIB2 = 0.0;
    int Num_Pontos_turisticos2 = 0;

    // Variavel para escolha do atributo
    char escolha[50];

    // --- CADASTRO CARTA 1 ---
    printf("Insira o codigo da carta 1: \n");
    fgets(codigo_carta1, sizeof(codigo_carta1), stdin);
    codigo_carta1[strcspn(codigo_carta1, "\n")] = 0; 

    printf("Insira o nome da cidade 1: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; 

    printf("Insira a população 1: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    população1 = atol(buffer_entrada); 

    printf("Insira a Area 1: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    Área1 = atof(buffer_entrada); 

    printf("Insira o PIB 1: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    PIB1 = atof(buffer_entrada);

    printf("Insira o Numero de pontos turisticos 1: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    Num_Pontos_turisticos1 = atoi(buffer_entrada);

    // --- CADASTRO CARTA 2 ---
    printf("\nInsira o codigo da carta 2: \n");
    fgets(codigo_carta2, sizeof(codigo_carta2), stdin);
    codigo_carta2[strcspn(codigo_carta2, "\n")] = 0;

    printf("Insira o nome da cidade 2: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Insira a população 2: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    população2 = atol(buffer_entrada);

    printf("Insira a Area 2: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    Área2 = atof(buffer_entrada);

    printf("Insira o PIB 2: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    PIB2 = atof(buffer_entrada);

    printf("Insira o Numero de pontos turisticos 2: \n");
    fgets(buffer_entrada, sizeof(buffer_entrada), stdin);
    Num_Pontos_turisticos2 = atoi(buffer_entrada);

    printf("\n==============CARTAS CADASTRADAS COM SUCESSO!==============\n");

    float densidade_populacional1 = 0;
    float pib_per_capta1 = 0;
    if (Área1 > 0) {
        densidade_populacional1 = população1 / Área1;
    }
    if (população1 > 0) {
        pib_per_capta1 = PIB1 / população1;
    }

    float densidade_populacional2 = 0;
    float pib_per_capta2 = 0;
    if (Área2 > 0) {
        densidade_populacional2 = população2 / Área2;
    }
    if (população2 > 0) {
        pib_per_capta2 = PIB2 / população2;
    }
    
    printf("\n==============CARTA 1==============\n");
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", população1);
    printf("Area: %.2f\n", Área1);
    printf("O PIB e: %.2f\n", PIB1);
    printf("A quantidade de pontos turisticos e: %i\n", Num_Pontos_turisticos1);
    printf("A densidade populacional e: %.2f\n", densidade_populacional1);
    printf("O PIB per Capta e: %.2f\n", pib_per_capta1);
    printf("\n                                   \n");
    printf("\n==============CARTA 2==============\n");
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", população2);
    printf("Area: %.2f\n", Área2);
    printf("O PIB e: %.2f\n", PIB2);
    printf("A quantidade de pontos turisticos e: %i\n", Num_Pontos_turisticos2);
    printf("A densidade populacional e: %.2f\n", densidade_populacional2);
    printf("O PIB per Capta e: %.2f\n", pib_per_capta2);

    printf("Escolha o atributo para comparação: \n");
    fgets(escolha, sizeof(escolha), stdin);
    escolha[strcspn(escolha, "\n")] = 0;

    // Converte a escolha do usuário para minúsculas para evitar erros
    toLowerStr(escolha);

    if (strcmp(escolha, "Populacao") == 0)
    {
      if (população1 > população2) {
            printf("Vencedor: %s (Populacao: %lu)\n", cidade1, população1);
        } else if (população2 > população1) {
            printf("Vencedor: %s (Populacao: %lu)\n", cidade2, população2);
        } else {
            printf("Empate na Populacao! (%lu)\n", população1);
        }
    } else if (strcmp(escolha, "Area") == 0)
    {
        if (Área1 > Área2) {
            printf("Vencedor: %s (Área: %.2f)\n", cidade1, Área1);
        } else if (Área2 > Área1) {
            printf("Vencedor: %s (Área: %.2f)\n", cidade2, Área2);
        } else {
            printf("Empate na Área! (%.2f)\n", Área1);
        }
    } else if (strcmp(escolha, "pib") == 0) {
        if (PIB1 > PIB2) {
            printf("Vencedor: %s (PIB: %.2f)\n", cidade1, PIB1);
        } else if (PIB2 > PIB1) {
            printf("Vencedor: %s (PIB: %.2f)\n", cidade2, PIB2);
        } else {
            printf("Empate no PIB! (%.2f)\n", PIB1);
        }
    } else if (strcmp(escolha, "pontos") == 0) {
        if (Num_Pontos_turisticos1 > Num_Pontos_turisticos2) {
            printf("Vencedor: %s (Pontos Turisticos: %d)\n", cidade1, Num_Pontos_turisticos1);
        } else if (Num_Pontos_turisticos2 > Num_Pontos_turisticos1) {
            printf("Vencedor: %s (Pontos Turisticos: %d)\n", cidade2, Num_Pontos_turisticos2);
        } else {
            printf("Empate nos Pontos Turisticos! (%d)\n", Num_Pontos_turisticos1);
        }
    } else if (strcmp(escolha, "densidade") == 0) {
        if (densidade_populacional1 > densidade_populacional2) {
            printf("Vencedor: %s (Densidade: %.2f)\n", cidade1, densidade_populacional1);
        } else if (densidade_populacional2 > densidade_populacional1) {
            printf("Vencedor: %s (Densidade: %.2f)\n", cidade2, densidade_populacional2);
        } else {
            printf("Empate na Densidade! (%.2f)\n", densidade_populacional1);
        }
    } else if (strcmp(escolha, "pib per capita") == 0) {
        if (pib_per_capta1 > pib_per_capta2) {
            printf("Vencedor: %s (PIB per Capita: %.2f)\n", cidade1, pib_per_capta1);
        } else if (pib_per_capta2 > pib_per_capta1) {
            printf("Vencedor: %s (PIB per Capita: %.2f)\n", cidade2, pib_per_capta2);
        } else {
            printf("Empate no PIB per Capita! (%.2f)\n", pib_per_capta1);
        }
    } else {
        // Bloco 'default' do switch agora é o último 'else'
        printf("Atributo invalido! Nao foi possivel comparar.\n");
    }
    

    // Pausar e esperar o usuário pressionar ENTER
    printf("\n\nPressione ENTER para fechar a janela...");
    getchar(); 

    return 0;
}
