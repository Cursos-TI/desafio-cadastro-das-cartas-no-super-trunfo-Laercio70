#include <stdio.h>

int main() {

    char Código[50];
    char Estado[50];
    char Cidade[50];
    int População;
    float Área;
    float PIB; 
    int número_de_pontos_turísticos;
    
    printf("Código da Cidade: \n");
    scanf("%s", &Código);

    printf("Estado: \n");
    scanf("%s", &Estado);

    printf("Cidade: \n");
    scanf("%s", &Cidade);

    printf("População: \n");
    scanf("%d", &População);

    printf("Área: \n");
    scanf("%f", &Área);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("número_de_pontos_turísticos: \n");
    scanf("%s", &número_de_pontos_turísticos);

    printf("Código da Cidade: %s \n");
    printf("Estado: %s \n");
    printf("Cidade: %s \n");
    printf("População: %d \n");
    printf("Área: %f \n");
    printf("PIB: %f \n");
    printf("número_de_pontos_turísticos: \n");

    return 0;
}
