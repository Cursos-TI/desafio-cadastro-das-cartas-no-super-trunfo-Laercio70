#include <stdio.h>

int main() {

    char Codigo;
    char Estado[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB; 
    int Pontos_turisticos;
    
    printf("Codigo_da_Cidade: \n");
    scanf("%c", &Codigo);

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

    printf("Pontos_turisticos: \n");
    scanf("%d", &Pontos_turisticos);

    printf("Codigo_da_Cidade: %c \n", Codigo);
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Populacao: %d \n", Populacao);
    printf("Area: %f \n", Area);
    printf("PIB: %f \n", PIB);
    printf("pontos_turisticos: %d \n", Pontos_turisticos);

    return 0;
}
