#include <stdio.h>

int main() {

    char Codigo;
    char Estado[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB; 
    int numero_de_pontos_turisticos;
    
    printf("Codigo_da_Cidade: \n");
    scanf("%s", &Codigo);

    printf("Estado: \n");
    scanf("%s", &Estado);

    printf("Cidade: \n");
    scanf("%s", &Cidade);

    printf("Populacao: \n");
    scanf("%d", &Populacao);

    printf("Area: \n");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("numero_de_pontos_turisticos: \n");
    scanf("%s", &numero_de_pontos_turisticos);

    printf("Codigo_da_Cidade: %s \n, Codigo");

    printf("Estado: %s \n, Estado");
    printf("Cidade: %s \n, Cidade");
    printf("Populacao: %d \n, Populacao");
    printf("Area: %f \n, Area");
    printf("PIB: %f \n, PIB");
    printf("numero_de_pontos_turisticos: \n, numero_de_pontos_turisticos");

    return 0;
}
