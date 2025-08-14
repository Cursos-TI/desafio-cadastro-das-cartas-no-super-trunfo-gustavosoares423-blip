#include <stdio.h>

    int main() {
    printf("Super Trunfo - Paises\n");

    char Estado;
    char Codigo[10];
    char Cidade[50];
    int Populaçao;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Digite o Estado: \n");
    scanf("%c", &Estado);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a Populaçao: \n");
    scanf("%d", &Populaçao);

    printf("Digite a Area: \n");
    scanf(" %f", &Area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite o PontoT: \n");
    scanf("%d", &PontosTuristicos);

    printf("CARTA 1\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populaçao);
    printf("Área: %f Km²\n", Area);
    printf("PIB: %f Bilhões de Reais\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", PontosTuristicos);

    printf("Digite o Estado: \n");
    scanf(" %c", &Estado);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a Populaçao: \n");
    scanf("%d", &Populaçao);

    printf("Digite a Area: \n");
    scanf(" %f", &Area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite o PontoT: \n");
    scanf("%d", &PontosTuristicos);

    printf("CARTA 2\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populaçao);
    printf("Área: %f Km²\n", Area);
    printf("PIB: %f Bilhões de Reais\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", PontosTuristicos);


    return 0;

    }