#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main() {
    // Informações da primeira carta
    char idCarta1[4];
    int habitantes1;
    float tamanhoArea1, pibTotal1;
    int atracoes1;
    
    // Informações da segunda carta
    char idCarta2[4];
    int habitantes2;
    float tamanhoArea2, pibTotal2;
    int atracoes2;
    
    // Entrada da primeira carta
    printf("Informe o código da primeira carta (exemplo: A01): ");
    scanf("%3s", idCarta1);
    printf("Informe a população: ");
    scanf("%d", &habitantes1);
    printf("Informe a área: ");
    scanf("%f", &tamanhoArea1);
    printf("Informe o PIB: ");
    scanf("%f", &pibTotal1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &atracoes1);
    
    printf("\n");
    
    // Entrada da segunda carta
    printf("Informe o código da segunda carta (exemplo: B02): ");
    scanf("%3s", idCarta2);
    printf("Informe a população: ");
    scanf("%d", &habitantes2);
    printf("Informe a área: ");
    scanf("%f", &tamanhoArea2);
    printf("Informe o PIB: ");
    scanf("%f", &pibTotal2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &atracoes2);
    
    printf("\n");
    
    // Exibição dos dados da primeira carta
    printf("Carta %s:\n", idCarta1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f\n", tamanhoArea1);
    printf("PIB: %.2f\n", pibTotal1);
    printf("Pontos turísticos: %d\n", atracoes1);
    
    printf("\n");
    
    // Exibição dos dados da segunda carta
    printf("Carta %s:\n", idCarta2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f\n", tamanhoArea2);
    printf("PIB: %.2f\n", pibTotal2);
    printf("Pontos turísticos: %d\n", atracoes2);
    
    return 0;
}

