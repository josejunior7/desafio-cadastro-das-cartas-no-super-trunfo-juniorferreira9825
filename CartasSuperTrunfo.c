#include <stdio.h>


typedef struct {
    char codigo[4];          
    int populacao;           
    float area;              
    float pib;               
    int pontos_turisticos;   
} Carta;

int main() {
    
    Carta c1, c2;

    
    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo);
    printf("Populacao (int): ");
    scanf("%d", &c1.populacao);
    printf("Area (float): ");
    scanf("%f", &c1.area);
    printf("PIB (float): ");
    scanf("%f", &c1.pib);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c1.pontos_turisticos);

    
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Populacao (int): ");
    scanf("%d", &c2.populacao);
    printf("Area (float): ");
    scanf("%f", &c2.area);
    printf("PIB (float): ");
    scanf("%f", &c2.pib);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c2.pontos_turisticos);

    
    printf("\n===== CARTA 1 =====\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos turisticos: %d\n", c1.pontos_turisticos);

    printf("\n===== CARTA 2 =====\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos turisticos: %d\n", c2.pontos_turisticos);

    return 0;
}

